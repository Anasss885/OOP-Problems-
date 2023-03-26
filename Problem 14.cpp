/*
Q:Print the average of 3 numbers entered by the user by  creating class named 'Average' and have a method for calculate and print the value
*/


#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class average {
private:
    double num1, num2, num3;
public:
    average(double num1, double num2, double num3):num1(num1), num2(num2), num3(num3){}

    void compute_avg() {
        cout << (num1 + num2 + num3) / 3;
    }

};
int main()
{
    ANOOS
        double num1, num2, num3;
        cout << "Enter 3 numbers to compute their average\n";
        cin >> num1 >> num2 >> num3;
        average a(num1, num2, num3);
        a.compute_avg();
      
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
