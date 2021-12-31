#include <iostream>
using namespace std;
double newPrice(double price,double discount)
{
    double newPrice;
    newPrice=price-price*discount/100;
    return newPrice;
}
int main()
{
    double price;
    double discount;
    cout<<"price ";
    cin>>price;
    cout<<"discount ";
    cin>>discount;
    cout<<newPrice(price,discount);



}
