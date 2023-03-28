/*
Q:A Student is an object in a university management System. Analyze the concept andidentify 
the data members   that   a   Student   class   should   have.  
 Also   analyze   thebehavior   of  student  in   a   university management System and identify 
the methodsthat should be included in Student class
*/

#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class courses {
public:
    int courses[10];
};
class student {
public:
    int id;
    string name;
    string grades;
    string address;
    string behavior;
    
    //courses co;
};
class UniveristyManagmentSystem {
public:
    student st[5];
    void printBadBehaviorStudent() {
        for (int i = 0; i < 5; i++) {
            if (st[i].behavior == "bad") {
                cout<< st[i].id<<"\n"<<st[i].name<<"\n"<<st[i].address << "\n";
                cout << "----------------------------\n";
            }
        }
    }
    void printGoodBehaviorStudent() {
        for (int i = 0; i < 5; i++) {
            if (st[i].behavior == "good") {
                cout << st[i].id << "\n" << st[i].name << "\n" << st[i].address << "\n";
                cout << "----------------------------\n";
            }
        }
    }
    void printExcellentGrades() {
        for (int i = 0; i < 5; i++) {
            if (st[i].grades >= "85") {
                cout << "This student is from an Excellent students\n";
                cout << st[i].id << "\n" << st[i].name << "\n" << st[i].address << "\n";
                cout << "----------------------------\n";
            }
        }
    }
};
int main()
{
    ANOOS
        student st1;
    st1.id = 1;
    st1.grades = "95";
    st1.behavior = "good";
    st1.name = "Ali";
    st1.address = "Cairo";

    student st2;
    st2.id = 6;
    st2.grades = "35";
    st2.behavior = "bad";
    st2.name = "Mohy";

    UniveristyManagmentSystem u;
    u.st[0] = st1;
    u.printBadBehaviorStudent();
    u.printExcellentGrades();
    u.printGoodBehaviorStudent();
     // Feel Free to add more Functions to the UniveristyManagmentSystem class
    
     
       
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
