#include <iostream>
using namespace std;
bool isPrimeNumber(int number)
{
    for (int i = 2; i < number / 2; i++)
        if (number % i == 0)
            return 0;
    return 1;
}
void printPairedNumber(int m,int n)
{
for(int i=m;i<=n-4;i++)
{
if(isPrimeNumber(i)&&isPrimeNumber(i+4))
cout<<i<<"-"<<i+4<<endl;
}
}

int main()
{
    int m, n;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    printPairedNumber(m,n);
    
}
