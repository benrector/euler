#include <iostream>
using namespace std;

int main()
{
    long current = 1;
    long last = 0;
    long temp = 0;
    long total = 0;
    while (current <= 4000000)
    {
        temp = current;
        current = current + last;
        last = temp;
        if (current % 2 == 0)
            total += current;
    }
    cout << total << endl;
}