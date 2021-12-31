#include <iostream>
using namespace std;
void printPrimeNumberTo100()
{
    int number = 2;
    while (number != 100)
    {
        for (int i = 2; i <= number; i++)
        {

            if (number == i)
                cout << number << "\t";
            if (number % i == 0)
                break;
        }
        number++;
    }
}
int main()
{
    printPrimeNumberTo100();
}