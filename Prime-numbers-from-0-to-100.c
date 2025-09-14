#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    
    int primes[50] = {[0] = 2,[1] = 3};
    int primeindex=2;
    
    bool isPrime;
    
    for(int p = 5; p<= 100; p +=2){
        isPrime = true;
        
        for(int i =1; isPrime && p / primes [i] >= primes[i]; ++i){
            if (p % primes[i] == 0)
                isPrime =  false;
        }
        if ( isPrime == true){
            primes[primeindex] = p;
            ++primeindex;
        }
    }
    for (int i = 0; i < primeindex; ++i)
        printf ("%i ", primes[i]);
    
    return 0;
}