#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial of %d is: %lld\n", n, factorial(n));
    return 0;
}

//Ques. Write a function factorial that takes a number n and returns its factorial.
