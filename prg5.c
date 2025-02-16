
#include <stdbool.h>
#include <stdio.h>

int main() {
    int n = 29;
    int i;
    int cnt = 0;
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {

    
        for ( i = 1; i <= n; i++) {

            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 numbers
        // then it is not prime
        if (cnt > 2)
            printf("%d is NOT prime\n", n);

        // else it is prime
        else
            printf("%d is prime", n);
    }

    return 0;
}

