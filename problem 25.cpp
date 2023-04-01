/*
Q:Create an Abstract class Student that contains a method take  exam, 
implement themethod in the  child  classes  PhdStudent  and  GradStudent  in  which PhdStudent  takesexam
  by giving his final presentation 
while the graduate student gives a written paper.
*/

#include<iostream>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class  student{
public:
    virtual void Take_exam(string exam) = 0; // Must be override
};
class phd_student:public student {
public:
    void Take_exam(string exam) {
        cout << "This exam is with " << exam << "\n";
    }

};
class grad_student :public student {
public:
    void Take_exam(string exam) {
        cout << "This exam is with " << exam << "\n";
    }
};
int main()
{
    ANOOS
        phd_student p;
    p.Take_exam("Presentation");
    grad_student g;
    g.Take_exam("Written Paper");
     
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
