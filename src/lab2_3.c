#include <math.h>
#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

// check if n is prime using loop up to sqrt(n)
int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  int squared_n = sqrt(n);
  for (int i = 2; i <= squared_n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

// validate input and print all primes up to n
int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  if (scanf("%d", &n) != 1) {
    printf("Error: Invalid input.\n");
    return 1;
  }

  if (n < 2) {
    printf("Error: n must be at least 2.\n");
    return 1;
  }

  printf("Prime numbers up to %d: ", n);
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
