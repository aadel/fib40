#ifndef FIB40WRAPPER_H
#define FIB40WRAPPER_H

#include <node.h>

class STDFib40Wrapper : public node::ObjectWrap {

  private:
    std::long* l_;
 
    explicit STDFib40Wrapper(std::long l = 0);
    ~STDFib40Wrapper();

    static v8::Handle<v8::Value> New(const v8::Arguments& args);

    static v8::Handle New(const v8::Arguments& args);

    static v8::Handle<v8::Value> fib40(const v8::Arguments& args);

  public:
    static void Init(v8::Handle<v8::Object> exports);
};

#endif
