fib40
=====

Benchmark of fibonacci(40) calculation on several languages

### Environment

* Node v0.10.33
* gcc version 4.8.2
* Java HotSpot 64-bit v1.8.0_25
* Scala code runner version 2.11.4
* julia version 0.3.5
* ruby 2.1.5p273
* jruby 1.7.18 (1.9.3p551) 2014-12-22 625381c on Java HotSpot(TM) 64-Bit Server VM 1.8.0_25-b17 +jit
* Python 2.7.6
* OS: Linux 3.13.0-36-generic #63-Ubuntu SMP x86_64
* Hardware: EC2 t2.micro

### Procedure

Very simple procedure was taken, each command is run 10 times and the mean is calculated:

`$ for i in {1..10}; do {command}; done`

for example:

`$ for i in {1..10}; do scala fib40.scala; done`

