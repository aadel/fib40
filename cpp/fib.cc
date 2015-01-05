#include <node.h>
#include <v8.h>

using namespace v8;

int fibonacci(int n) {
  if (n < 2) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

Handle<Value> Fibonacci(const Arguments& args) {
    HandleScope scope;

    if (args.Length() < 1) {
        return ThrowException(Exception::TypeError(
            String::New("First argument must be a number")));
    }
    
    Local<Number> integer = args[0]->ToInteger();
    int r = fibonacci(integer->Value());

    return scope.Close(Integer::New(r));
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("fib"),
      FunctionTemplate::New(Fibonacci)->GetFunction());
}

// Register the module with node.
NODE_MODULE(fib, init);
