function fibonacci(n) {
  if (n < 2) {
    return n;
  }
  return fibonacci(n - 2) + fibonacci(n - 1);
}

var start = (new Date).getTime();
var fib40 = fibonacci(40);
var diff = (new Date).getTime() - start;
console.log(fib40);
console.log(diff);
