fib40
=====

Benchmark of fibonacci(40) calculation on several languages

### Environment

* Node v0.10.33
* gcc version 4.8.2
* Java HotSpot 64-bit v1.8.0_25
* Scala code runner version 2.11.4
* ruby 2.1.5p273
* Python 2.7.6
* OS: Linux 3.13.0-36-generic #63-Ubuntu SMP x86_64
* Hardware: EC2 t2.micro

### Procedure

Very simple procedure was taken, each command is run 10 times and average is calculated:

`$ for i in {1..10}; do {command}; done`

for example:

`$ for i in {1..10}; do scala fib40.scala; done`

