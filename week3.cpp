#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    //Task 1
    // int year , month, leapyear;
    // cout<<"Enter year and month"<<endl;
    // cout<<"Enter year : ";
    // cin >> year ;
    // cout<< "Enter month : ";
    // cin>> month;
    // if (month==2&&(( year % 4 == 0 && year % 100 != 0 ) || year%400==0))
    //     {
    //         cout<<"This month has 29 days;"<<endl;
    //         return 0;
    //     } else if (month==2)
    //     {
    //     {cout<<"this month has 28 days;"<<endl;return 0;}
    // }
        
    //     switch (month)
    //     {case 1:
    //     case 3: 
    //     case 5:
    //     case 7:
    //     case 8: 
    //     case 10:
    //     case 12:
    //     {cout<<"This month has 31 days;"<<endl;}break;
    //     case 4: 
    //     case 9:
    //     case 11:
    //     {cout<<"This month has 30 days;"<<endl;}break;
    //     default: cout<<"The number of month is not valide";}



    // task 2

    // int digit;
    // cout<<"Enter a digit : ";
    // cin>> digit;
    //     switch (digit)
    //     {case 1:
    //     case 2: 
    //     case 3:
    //     case 4:
    //     case 5: 
    //     case 7:
        
    //     {cout << "This digit has 0 circle;" << endl; } break;
    //     case 0: 
    //     case 6:
    //     case 9:

    //     {cout<<"This digit has  1 circle;"<< endl; }break;
    //     case 8: {cout<<"This digit has 2 circles;"<<endl;}break;
    //     default: cout<<"This is not digit";
    //     }



    // task 3
    // int year ;
    // cout<<"Enter year : ";
    // cin >> year ;
    // bool isLeapYear = (( year % 4 == 0 && year % 100 != 0 ) || year%400==0)?true:false;
    // cout<<boolalpha<<"This year ia leap year : "<<isLeapYear;
    

    //task 4 

    // double a, b , c;
    // cout<<"Enter three numbers : ";
    // cin>>a>>b>>c;
    // bool triangle = (a<(b+c))&&
    //                 (a>(b-c)&&a>c-b)&&
    //                 (b<(a+c))&&
    //                 (b>(a-c)&&b>c-a)&&
    //                 (c<(b+a))&&
    //                 (c>(b-a)&&c>a-b);
    // cout<<"There is a triangle with these sides : "<<boolalpha<<triangle;

    //task 5
    

    //a)цялото число p се дели на 4 или на 7;

    // int p;
    // cout<<"p = ";
    // cin>>p;
    // bool divided= (p%4==0||p%7==0);
    // cout<<"This number is divided into 7 or 4: "<<boolalpha<<divided;
    
    //б) уравнението a.x2 + b.x + c = 0 (a ≠ 0) няма реални корени;
    
    // double a, b , c,discriminant;
    // cout<<"Enter three numbers :"<<endl;
    // cin>>a >> b >> c;
    // if (a != 0)
    // {
    // discriminant=b*b-4*a*c;
    // bool isHaveRaelAnswer= discriminant>=0;
    // cout<<"This equation have real answer"<<boolalpha<<isHaveRaelAnswer;
    // }
    // else 
    // {
    //     cout<<"This equatin is not square;"<<endl;
    // }
    


    //в) точка с координати (a, b) лежи във вътрешността на кръг с радиус 5 и център (0, 1).

    //  double a , b , distance;
    //  cout<<"Enter two number"<<endl;
    //  cin>>a>>b;
    //  distance=sqrt(pow (a-0,2)+ pow(b-1,2) );
    //  bool isInside = distance < 5;
    //  cout << "Point with coordinates (a, b) lies inside a circle with radius 5 and center (0, 1): "
    //  <<boolalpha<<isInside;

    //г) точка с координати (a, b) лежи извън кръга с център (c, d) и радиус f;

    //  double a , b , c , d, radius , distance;
    //  cout<<"Enter two number"<<endl;
    //  cin>>a>>b;
    //  cout<<"("<<a<<" , "<<b<<")"<<endl;
    //  cout<<"Enter two number"<<endl;
    //  cin>>c>>d;
    //  cout<<"("<<c<<" , "<<d<<")"<<endl;
    //  cout<<"Enter radius:";
    //  cin>>radius;
    //  distance=sqrt(pow (a-c,2)+ pow(b-d,2) );
    //  bool isInside = distance > radius;
    //  cout << "A point with coordinates (a, b) lies outside the circle with center (c, d) and radius: "
    //  <<boolalpha<<isInside;
    

    // д) точка принадлежи на частта от кръга с център (0, 0) и радиус 5 в трети квадрант;
    // double a , b , distance;
    //  cout<<"Enter two number"<<endl;
    //  cin>>a>>b;
    //  distance=sqrt(pow (a-0,2)+ pow(b-0,2) );
    //  bool isInside = distance < 5 &&
    //                  (a < 0 && b < 0) ;
    // cout << "A point belongs to the part of the circle with center (0, 0) and radius 5 in the third quadrant; "
    //  <<boolalpha<<isInside;





    // е) точка принадлежи на венеца с център (0, 0) и радиуси 5 и 10;

    //  double a , b , distance;
    //  cout<<"Enter two number"<<endl;
    //  cin>>a>>b;
    //  distance=sqrt(pow (a-0,2)+ pow(b-0,2) );
    //  cout<<distance;
    //  bool isInside = distance > 5 && distance < 10 ;
    //  cout << "a point belongs to the gum with center (0, 0) and radii 5 and 10;"
    //  <<boolalpha<<isInside;
    
    // ж) x принадлежи на отсечката [0, 1];
    // double x;

    // cout<<"x = ";
    // cin>> x ;
    // bool isInside = x >= 0 && x <= 1 ? true : false;
    // cout<<"X is in range : "<<boolalpha<<isInside;

    

    //з) x = max{a, b, c}
    // double a , b , c , x, max;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;
    // cout<<"c = ";
    // cin>>c;
    // cout<<"x = ";
    // cin>>x;
    // max=a;
    // if(max<b) max=b;
    // if(max<c) max=c;
    // bool istrue = (x ==max ) ?true :false;
    // cout<<"x=max{a,b,c} - "<<boolalpha<<istrue;


    // и) x != max{a, b, c} (операцията ! да не се използва);
    
    // double a , b , c , x, max;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;
    // cout<<"c = ";
    // cin>>c;
    // cout<<"x = ";
    // cin>>x;
    // max=a;
    // if(max<b) max=b;
    // if(max<c) max=c;
    // bool istrue = (x ==max ) ? false :true;
    // cout<<"x!=max{a,b,c} - "<<boolalpha<<istrue;


    //к) поне една от булевите променливи x и y има стойност true;
    
    // bool x = false;
    // bool y = false;
    // bool isTrue = (x == 1 || y == 1) ? true : false;
    // cout << isTrue ;

    
    


    //л) и двете булеви променливи x и y имат стойност true;

    // bool x = true;
    // bool y = true;
    // bool isTrue = (x == 1 && y == 1) ? true : false;
    // cout << isTrue ;


    // м) нито едно от числата a, b и c е положително;
    // double a, b , c;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;
    // cout<<"c = ";
    // cin>>c;
    // bool istrue=(a<0&&b<0&& c<0)?true:false;
    // cout<<boolalpha<<istrue;

    // н) цифрата 7 влиза в записа на положителното трицифрено число p;
    // int number;
    // cout<<"Enter three digit number: ";
    // cin>>number;
    // bool istrue=((number%10)==7||number%10/10==7||number/100==7)?true:false;
    // cout<<boolalpha<<istrue;

    // о) цифрите на трицифреното число m са различни;
    // int number;
    // cout<<"Enter three digit number: ";
    // cin>>number;
    // bool istrue=(number%10!=number%10/10&&
    //              number%10/10!=number/100&&
    //              number/100!=number%10)?true:false;
    // cout<<boolalpha<<istrue;

    // п) поне две от цифрите на трицифреното число m са равни помежду си.
    // int number;
    // cout<<"Enter three digit number: ";
    // cin>>number;
    // bool istrue=(number%10!=number%10/10&&
    //              number%10/10!=number/100&&
    //              number/100!=number%10)?false:true;
    // cout<<boolalpha<<istrue;


    

    
    
    

    

    








    return 0;
    }

