require 'benchmark'

def fibo(num)
  if num < 2
      num
  else
    fibo(num-1) + fibo(num-2)
  end
end

puts Benchmark.measure { f = fibo(40); puts f }
