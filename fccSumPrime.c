#include <stdio.h>
#include <cs50.h>
#include <math.h>

bool isPrime(int n); // isPrime = memoryAddress

int sumPrimes(int num);

int main(void) {

    printf("isPrime(10) is %d it should be 0\n", isPrime(10));
    printf("isPrime(2) is %d it should be 1\n", isPrime(2));

}

bool isPrime(int n) {
    for (int i = 2, max = n; i < max; i++) {// max = maxPossible number
        if(n % i == 0) {
            return false;
        }

    }
    return true;
}

int sumPrimes(int num) {
    int sum = 0;
    for(int i = num; i >= 2; i--) {
        if(isPrime(i)) {
            sum +=i;
        }
    }
    return sum;
}