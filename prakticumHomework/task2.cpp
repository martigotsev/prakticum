#include <iostream>
using namespace std;
bool isPalindrom(unsigned int i)
{
    unsigned int revurseNumber = 0, number = i;
    while (number != 0)
    {
        revurseNumber += (number % 10);
        revurseNumber *= 10;
        number /= 10;
    }
    revurseNumber /= 10;
    return revurseNumber == i;
}
void isPalindromAndSquerIsPalindrm(int n)
{
    int count = 0;
    for (long long i = 11; i * i < 4294967295; i++)
    {

        if (isPalindrom(i) && isPalindrom(i * i))
        {
            cout << i << " -> " << i * i << endl;
            count++;
        }
        if (count == n)
        {
            return;
        }
    }
    cout << "Count of palidroms which square of palindrom is palindrom is " << count;
}
int main()
{
    int n;
    do
    {
        cout << "Enter how many numbers do you want to see: ";
        cin >> n;
    } while (n < 1);
    isPalindromAndSquerIsPalindrm(n);
}