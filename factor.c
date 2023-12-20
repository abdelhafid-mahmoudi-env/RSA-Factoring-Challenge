#include "factor.h"

/**
 * factorize - Factorizes a number into two factors.
 * @n: The number to factorize.
 * @factor1: Pointer to store the first factor.
 * @factor2: Pointer to store the second factor.
 */
void factorize(long long n, long long *factor1, long long *factor2)
{
    long long i;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            *factor1 = i;
            *factor2 = n / i;
            return;
        }
    }
    *factor1 = 1; /* In case of prime number */
    *factor2 = n;
}

/**
 * rsa_factorize - RSA-specific factorization, to find prime factors.
 * @n: The RSA number to factorize.
 * @prime1: Pointer to store the first prime factor.
 * @prime2: Pointer to store the second prime factor.
 */
void rsa_factorize(long long n, long long *prime1, long long *prime2)
{
    /* Placeholder for RSA-specific factorization logic */
    factorize(n, prime1, prime2);
}
