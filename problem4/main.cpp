#include <iostream>
using namespace std;

bool palin(_int64 num)
{
    // I can see Russia from my house!
    _int64 ber = 0;
    _int64 rev = 0;
    _int64 orig = num;
    while (num != 0)
    {
        ber = num % 10;
        num /= 10;
        rev = (rev * 10) + ber; 
    }
    if (orig == rev)
        return true;
    else
        return false;
}

int main()
{
    int maxpalin = 0;
    for (int x = 1000; x > 99; x--)
        for (int y = x; y > 99; y--)
        {
            if (palin(x * y) && maxpalin < (x * y))
            {
                maxpalin = (x * y);
            }
        }
    cout << maxpalin << endl;
}