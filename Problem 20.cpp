/*
Q:Create a class  circle class with  radius as data member. 
Create two constructors  (noargument, and two arguments) and 
a method to calculate Circumference.   Activity 2: 
*/

#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class circle {
private:
    double radius=0.0;
public:
    circle(double radius):radius(radius) {} // Parametrized constructor
    circle() {}
    void set_radius(double radius) {
        this->radius = radius;
    }
    void find_circumfernce() {
        cout << (2 * 3.14 * this->radius)<<"\n";
    }

};
int main()
{
    ANOOS
        circle c1(5);
    c1.find_circumfernce();
    circle c2;
    c2.set_radius(4);
    c2.find_circumfernce();

       
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
