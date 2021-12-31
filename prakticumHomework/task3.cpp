#include <iostream>
using namespace std;
void hammingNumbersWithPrimeFactork(int n, int k)
{
    int counter = 0, number, numberCopy = 2;
    while (counter != n)
    {
        number = numberCopy;
        for (int i = 2; i <= k; i++)
        {
            while (number % i == 0)
            {
                number /= i;
            }
        }
        if (number == 1)
        {
            cout << numberCopy << " ";
            counter++;
        }
        numberCopy++;
    }
}
bool isPrime(int k)
{
    for (int i = 2; i <= k / 2; i++)
    {
        if (k % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, k, enterk;
    do
    {
        cout << "n = ";
        cin >> n;
    } while (n < 1);
    cout << "For enter k enter 1 else 0";
    cin >> enterk;
    if (enterk == 1)
    {
        do
        {
            do
            {
                cout << "Enter prime number" << endl;
                cout << "k = ";
                cin >> k;
            } while (k < 0);
        } while (k < 0 && isPrime(k) == false);
    }
    else
        k = 5;
    hammingNumbersWithPrimeFactork(n, k);
}