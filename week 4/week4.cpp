#include <iostream>
using namespace std;
int main ()
{
    //   1. Направете валидация на входни данни. Потребителят трябва да въведе двуцифрено число. 
    // Ако не въведе двуцифрено число, трябва да може да въведе отново, докато не успее.
    // int number;
    
    // do 
    // {
    //     cout<<"Enter number in range [10,99] "<<endl;
    //     cin>>number;

    // }
    // while(number>99||number<10);
      
    // 2. Напишете програма, която илюстрира следните изображения:
    // а) по въведени n и m: n - редове, m - колони
    // ******
    // ******
    // ****** 
    
    // int n,m;
    // cin>>n>>m;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // б) по въведено n: n = 4
    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>0;i--)
    // {
    //     for(int j=1;j<i ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 3. Въвеждаме число n от клавиатурата. Напишете програма, която пресмята n!.

    // int n , facturiel=1;
    // cout<<"n = ";
    // cin>>n;
    // for (int i=1;i<=n; i++)
    // {
    //     facturiel*=i;
        
    // }
    // cout<<"n! = "<<facturiel;

    
    // 4. Да се напише програма, която извежда всички трицифрени числа, които имат единствено уникални цифри. 
    //     (100, 101 ... не се извеждат) Намерете броя на тези числа.

    // int count=0,first,second,third;
    
    // for (int i=100;i<=999;i++)
    // { 
    //     first=i/100;
    //     second=i/10%10;
    //     third=i%10;
    //     if(first!=second && first != third && second != third)
    //     {
    //         cout<<i<<" ";
    //         count++;
    //     }


    // }
    // cout<<endl<<count;

    // 5. Да се напише програма, която извежда всички трицифрени числа, които са кратни на произведението на цифрите си. 

    
    // int count=0,first,second,third,product;
    
    // for (int i=100;i<=999;i++)
    // { 
    //     first=i/100;
    //     second=i/10%10;
    //     third=i%10;
    //     product=first*second*third;
    //     if (product==0)
    //     { 
    //         continue;
    //     }
    //     else if(i%product==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }




    return 0;
}