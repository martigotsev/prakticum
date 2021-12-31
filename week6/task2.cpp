#include <iostream>
using namespace std;

int fibonaci(int n)
{  int firstNumber=0;
   int secondNumber=1;
   int fibonaci;
   int number;
   if (n==0)return 0;
   if (n==1)return 1;
   for (size_t i = 2; i < n; i++)
   
   {
       fibonaci=firstNumber+secondNumber;
       
       firstNumber=secondNumber;
       secondNumber=fibonaci;
     
   }
    return fibonaci;
}
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 , 55 ...
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout<<fibonaci(n);

    
    
}
