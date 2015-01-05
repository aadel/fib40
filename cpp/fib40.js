var addon = require('./build/Release/fib.node');

var start = (new Date).getTime();
var fib40 = addon.fib(40);
var diff = (new Date).getTime() - start;
console.log(fib40);
console.log(diff);
