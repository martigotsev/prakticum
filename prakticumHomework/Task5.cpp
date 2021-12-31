#include <iostream>
using namespace std;
bool uniqueDigits(int n)
{
    int lastDigit;
    while (n != 0)
    {
        int number = n;
        lastDigit = n % 10;
        while (number != 0)
        {
            if (number / 10 % 10 == lastDigit)
            {
                return false;
            }
            number /= 10;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int number;
    do
    {
        cin >> number;
    } while (number < 0);
    unsigned long n;
    n = number;
    cout << boolalpha << uniqueDigits(n);
}