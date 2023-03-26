/*
Q:Print the  sum,  difference  and   product of   two numbers by  creating a   classnamed 'Number Operations' with separate methods 
using numbers that are entered by user.
*/

#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class number_operations {
private:
    int number1, number2;
public:
    number_operations(int number1, int number2):number1(number1), number2(number2) {}

    void compute_addition() {
        cout << number1 + number2<<"\n";
    }
    void compute_differnce() {
        cout << abs(number1 - number2) << "\n";
    }
    void compute_multiplication() {
        cout << number1 * number2<< "\n";
    }


};
int main()
{
    ANOOS
        number_operations n(9, 4);
    n.compute_addition();
    n.compute_differnce();
    n.compute_multiplication();

        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
