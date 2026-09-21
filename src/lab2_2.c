#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

// compute factorial iteratively
long long factorial(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }

  return result;
}

// validate input, call function, print result
int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  if (scanf("%d", &n) != 1) {
    printf("Error: Invalid input.\n");
    return 1;
  }

  if (n < 0) {
    printf("Error: Number must be non-negative.\n");
    return 1;
  }

  printf("%d! = %lld\n", n, factorial(n));

  return 0;
}
