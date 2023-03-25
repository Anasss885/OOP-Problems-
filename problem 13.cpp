/*
Q: Write a program to print the perimeter of a triangle that have sides of 3, 4 
and 5 by creating a class named 'Triangle' without any parameter in its constructor and also user have an option to set the sides manually 
*/
#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class triangle {
private:
    double x, y, z;
public:
    triangle() {
        x = 3;
        y = 4;
        z = 5;
    }
    void set_x(double x) {
        this->x = x;
    }
    void set_y(double y) {
        this->y = y;
    }
    void set_z(double z) {
        this->z = z;
    }
    double get_x() {
        return x;
    }
    double get_y() {
        return y;
    }
    double get_z() {
        return z;
    }
    void Triangle_perimeter() {
        cout<< x + y + z<<"\n";
    }
    void triangle_area() {
        double s = (x + y + z) / 2;
        cout << sqrt(s * (s - x)*(s - y)*(s - z));
    }
};
int main()
{
    ANOOS
        triangle t;
    t.Triangle_perimeter();
    t.triangle_area();
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
