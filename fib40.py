import time

def fibonacci(n):
    if n < 2:
        return n
    return fibonacci(n - 2) + fibonacci(n - 1)

start = time.time()
fib40 = fibonacci(40)
diff = time.time() - start
print fib40
print diff
