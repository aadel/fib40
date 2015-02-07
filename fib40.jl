function fib(n)
  if n < 3
    return 1
  else
    return fib(n - 1) + fib(n - 2)
  end
end

start = time()
fib40 = fib(40)
diff = time() - start
println(fib40)
println(diff * 1000) # time in ms
