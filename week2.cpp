#include<iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;
int main ()
{
    // task 1
    
    /* double number1 , number2 ;
    cout<<"Enter two numbers : "<<endl;
    cout<<"Number 1 = ";
    cin>>number1;
    cout<<"Number 2 = ";
    cin>>number2;
    if ( number1 < number2 )
    {
        cout<<"The largest number is "<<number2;
    }
    else if ( number1 > number2 )
    {
        cout<<"The largest number is "<<number1;
    }
    else {  
        cout<<"The number are equal!"<<endl;
    } */


    // task 2
    
   /*  int number;
    cout<<"Enter the number of month :"<<endl;
    cout<<"Number = ";
    cin>>number;
    if ( number > 0 && number < 13)
    {
        cout<<"Your number is valid !";
    }
    else {
        cout<<"Your number is not valid !";1
    }
     */

    // task  3

   /*  double a , b , number ;
    cout<<"Enter number:"<<endl;
    cout<<"Number ";
    cin>>number;
    cout<<"Enter range (a,b) "<<endl;
    cout<<"a = ";
    cin>> a ;
    cout<<"b = ";
    cin>> b ;
    if ( a >= b )
    {
        cout<< "Your range is not valid ! "<<endl;
    }
    else if ( number > a && number < b)  
    {
        cout<<"Your number belongs to the range! ";
    }
    else
    { 
        cout<<"Your number Not belongs to the range! ";
    } */
    
    // task 4
    /* char symbol;
    cout << "Enter symbol : ";
    cin >> symbol;
    if ( (symbol >='a' && symbol <= 'z')|| (symbol >= 'A' && symbol <= 'Z'))
    {
        cout<<"Your symbol is letter : "<<symbol;
    }
    else
    {
        cout<< "Your symbol is not letter : "<<symbol;
     
    } */

    // task 5
/*     double number1 , number2 ;
    cout << "Enter two realnumber :"<<endl;
    cout << "Number 1 = ";
    cin >> number1 ;
    cout <<"Number 2 = ";
    cin >> number2 ;
    if (number1 > 0 && number1*number2>0)
    {
        cout<<"You have two positive number !"<<endl;
    }
    else if ( number1 * number2 < 0)
    {
        cout<<"You have only one positive number !"<<endl;
    }
    else {
        cout<<"You don't have positive number !"<<endl;
    }
     */
     // task 6
    /*  int number;
     cout<<"Enter number of month:"<<endl;
     cout<<"Number = ";
     cin >> number ;
     switch (number)
     {
         case 1: cout<<"January"; break;
         case 2: cout<<"February"; break;
         case 3: cout<<"March"; break;
         case 4: cout<<"April"; break;
         case 5: cout<<"May"; break;
         case 6: cout<<"June"; break;
         case 7: cout<<"July"; break;
         case 8: cout<<"August"; break;
         case 9: cout<<"September"; break;
         case 10: cout<<"October"; break;
         case 11: cout<<"November"; break;
         case 12: cout<<"December"; break;
         default : cout<<"Your number is not valide:"; break;        
     } */


     // task 7
     /* int n , m , k ;
     cout<< "n = ";
     cin >> n;
     cout << "m = ";
     cin >>  m ;
     cout << "k = ";
     cin >> k;
     if (( k <= m * n ) && ( k % n == 0 || k % m == 0))
     {
         cout<<"Yes ! ";
     } 
     else cout<<"No ! "; */

   /*   // task 8 
     double a , b, c , x1 , x2 , D;
     cout <<"a.x2+b.x+c=0"<<endl;
     cout << "a = ";
     cin >> a ;
     cout << "b = ";
     cin >> b ;
     cout << "c = ";
     cin >> c ;
     cout<<a<<".x2+("<<b<<").x+"<<c<<"=0"<<endl;
     D = pow(b,2)-4*a*c;
     if ( D >=0 )
     {
         x1= - ( b + D ) / (2 * a) ;
         x2= (- b + D ) / ( 2 * a) ;
         cout << "The answer are "<<x1<<" "<<x2;
     
     }     
     else {
         cout<<"Don't have answer";
     }
 */

   /*   // task 9


    double sum,sumAfter;
     string currency,currency1;
     cout<<"Enter sum:"<<endl;
     cin>>sum;
     cout<<"Enter currency (EUR,GBP,BGN)"<<endl;
     cin>>currency;
     cin>>currency1;
     cout.setf(ios::fixed);
     cout.precision(2);
     if(currency =="BGN" && currency1 =="EUR")
     {
         sumAfter=sum/1.95;
         cout<<sum<<currency<<" = "<<sumAfter<<currency1;
    }
     else if(currency =="EUR"&& currency1=="BGN")
     {
         sumAfter=sum*1.95;
         cout<<sum<<currency<<" = "<<sumAfter<<currency1;
    }
    if(currency =="BGN"&& currency1=="GBP")
     {
        sumAfter =sum/2.53405;
         cout<<sum<<currency<< " = "<<sumAfter<<currency1;
    }
     else if(currency =="GBP"&&currency1=="BGN")
     {
         sumAfter=sum*2.53405;
         cout<<sum<<currency<<" = "<<sumAfter<<currency1;
    }
    else if(currency =="EUR"&&currency1=="GBP")
     {
         sumAfter=sum*2.53405/1.95583;
         cout<<sum<<currency<<" = "<<sumAfter<<currency1;
    }
    else if(currency =="GBP"&&currency1=="EUR")
     {
         sumAfter=sum/2.53405*1.95583;
         cout<<sum<<currency<<" = "<<sumAfter<<currency1;
    }
 */

    // homework

    // task 1
    /* bool coldbeer , coldrakia , ice ;
    cout<<"Enter 1 for true or 2 for false"<<endl;
    cout<<"Cold beer : ";
    cin>>coldbeer;
    cout<<"Cold rakia : ";
    cin>>coldrakia;
    cout<<"Ice : ";
    cin>>ice;
    if (coldbeer || ( coldrakia && ice ) )
    {
        cout<<"Drinks home ";
    }
    else cout<<"Buy beer "; */
    
    //task 2
    
    /* int meter, meter1=0;
    cout<<"Meter for painting:";
    cin>>meter;
    for(int i=1;i<=meter; i++)
    {
        meter1+=2*i;
    }
    cout<<meter1; */

    return 0;
}