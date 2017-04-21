#include <iostream>
using namespace std;

const int DIV = 20;

int main()
{
    int num = 0;
    int count = 0;
    for (num = 1; count < DIV; num++)
    {
        for (int i = 1; i <= DIV; i++)
        {
            if (num % i == 0)
                count++;
            else
                i = DIV + 1;
        }
        if (count < DIV)
            count = 0;
    }
    cout << num - 1 << endl;
}