#include <iostream>
#include <math.h>
using namespace std;
void circles(double x1, double x2, double y1, double y2, double r1, double r2)
{
    double distanse_of_radius;
    distanse_of_radius = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if (r1 + r2 > distanse_of_radius > abs(r1 - r2))
        cout << "there is an intersection point";
    else if (r1 + r2 == distanse_of_radius || distanse_of_radius == abs(r1 - r2))
        cout << "The circles touch ";
    else
        cout << "there is no intersection point";
}
int main()
{
    double x1, x2, y1, y2, r1, r2;
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;
    cout << "r1=";
    cin >> r1;
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;
    cout << "r2=";
    cin >> r2;
    circles(x1, x2, y1, y2, r1, r2);
}