/*Q:
Create App that Accepts 3 numbers and return their sum (using oop conecpts )
NOTE: Make sure that 3 numbers are evens.*/


//Solution :

#include<iostream>

using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 

class getting3Numbers {
private:
    int n1, n2, n3;
public:
    getting3Numbers(int n1,int n2,int n3) :n1(n1),n2(n2),n3(n3){} // using initiliazer list instead of normal assignment

    void printSumOfEvens() {
        if (EvenORnot()) // Evens
            cout << n1 + n2 + n3 << endl;
        else
            cout << "Please , enter even numbers\n";
    }
    bool EvenORnot() {
        if ((n1 + n2 + n3) % 2 == 0)
            return true;
        else return false;
    }
};
int main()
{
    ANOOS
        int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    getting3Numbers g(num1, num2, num3);
    g.printSumOfEvens();
      

       
   
   

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
