//Q1 : create a class that accept id,age,name from a user and print them (YOU MUST USE OOP NOT A PROCEDURAL CODE)



//Solution :


#include<iostream>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class employees {
    private:
        int id, age;
        string name;
public:
    employees(int id,int age,string name):id(id),age(age),name(name){} 
    // this is a constructor with an initializer list , this way is better than normal assignment , search on this point 
    void print() {
        cout << "id = " << id << " age = " << age << " name is " << name << endl;
    }
};

int main()
{
    ANOOS
        int id, age;string name; cin >> id >> age >> name;
        employees emp(id, age, name);
        emp.print();
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
