/*Q1 : create a simple app like problem 1 but with some restirctions and Take the Encapsulation property in the consideration

Solution:              */



#include<iostream>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class employees { // in most of cases this class is a super class
   public:
        int age;
        string name;
};
class employees_validation {
public:
    bool name_validation(string name) {
        if (name.size() > 5) { cout << "valid name\n"; return true; }
        else { cout << "Invalid name\n"; return false; }
    }
    bool age_validation(int age) {
        if (age>=18) { cout << "valid age\n"; return true; }
        else { cout << "Invalid age\n"; return false; }
    }
};
int main()
{
    ANOOS
        employees emp;
    cin >> emp.age >> emp.name;
    employees_validation emv;
    if (emv.age_validation(emp.age) && emv.name_validation(emp.name))
        cout << "the age is : " << emp.age << " and the name is " << emp.name<<"\n";
   
// NOTE : we put logic pieces in more than one container/class to do the encapsulation property , you can say that encapsulation property is an analogy of Customization
       



       
   // watch out for indomie addicts , buddy
   

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
