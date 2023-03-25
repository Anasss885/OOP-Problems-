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
    int x, y, z;
public:
    triangle() {
        x = 3;
        y = 4;
        z = 5;
    }
    void set_x(int x) {
        this->x = x;
    }
    void set_y(int y) {
        this->y = y;
    }
    void set_z(int z) {
        this->z = z;
    }
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
    int get_z() {
        return z;
    }
    void Triangle_perimeter() {
        cout<< x + y + z<<"\n";
    }
};
int main()
{
    ANOOS
        triangle t;
    t.Triangle_perimeter();

}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
