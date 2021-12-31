#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int randNumber()
{

    int number = rand() % 10 + 1;
    return number;
}
bool isSameNumber(int number,int randomNumber,int count)
{   
    if(number==randomNumber){cout<<"the corect number is <<randomNumber"<<endl<<"You win!";
    return 1;}
    if(count==3) {cout<<"the corect number is "<<randomNumber<<"\nGame over"; return 0;}
    if(number<randomNumber)cout<<"Your number is smaller";
    if(number>randomNumber)cout<<"Your number is bigger";
   
    return 0;
}
void game()
{   
    int counter=1,number;
    int randomNumber=randNumber();
   for (size_t i = 0; i < 3; i++)
   
   
    { do
    {
        cout<<"enter number between 1-10";
        cout<<endl;
      cin>>number;
      
    } while (number<0||number>11);
    
        
      if(isSameNumber(number,randomNumber,counter))return;
      counter++;cout<<endl;
      
    }
}

int main()
{
    srand(time(NULL));
game();


}
