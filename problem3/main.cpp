#include <iostream>
#include <fstream>
using namespace std;

const int UPPER = 775147;

int sieve(int arr[UPPER + 1])
{
    int biggest = 0;
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 0; i < UPPER + 1; i++)
    {
        if (arr[i] == 1)
        {
            int j = 0;
            for (int d = 2; d <= (UPPER) / i; d++)
            {
                j = i * d;
                arr[j] = 0;
            }
            if (600851475143 % i == 0)
                biggest = i;
        }
    }
    return biggest;
}

int main()
{
    int *primes = new int[UPPER + 1];
    for (int i = 0; i < UPPER + 1; i++)
    {
        primes[i] = 1;
    }
    cout << sieve(primes) << endl;
    delete[] primes;
    return 0;
}