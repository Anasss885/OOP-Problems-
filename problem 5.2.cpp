/*Q:
Create tha app that accept 
Person(id,name)
Player(id,name,number,phone)
studnet(id,name,age,phone)

Solution:             */

#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class person {
public:
    int id;
    string name;
};
class player:public person {
public:
    int number,phone;
};
class student :public person {
public:
    int age, phone;
};

int main()
{
    ANOOS

        // Applying on inheritance concept to avoid Data redundancy


        player pl;
       student st;
       cout << "Enter the data of the player first\n";
       cout << "enter the player ID\n"; cin >> pl.id;
       cout << "enter the player name\n"; cin >> pl.name;
       cout << "enter the player number\n"; cin >> pl.number;
       cout << "enter the player phone\n"; cin >> pl.phone;

       cout << "enter the student data\n";

       cout << "enter the student ID\n"; cin >> st.id;
       cout << "enter the student name\n"; cin >> st.name;
       cout << "enter the student age\n"; cin >> st.age;
       cout << "enter the student phone\n"; cin >> st.phone;



    
      

       
 
   

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
