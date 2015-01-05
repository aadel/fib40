object Fibonacci {
  def fib(n: Int): Int = n match {
    case 0 | 1 => n
    case _ => fib(n -1) + fib(n-2)
  }

  def main(args: Array[String]) {
    val start = System.nanoTime();
    val fib40 = fib(40);
    val diff = System.nanoTime() - start;
    println(fib40);
    println(diff / 1000000);
  }
}
