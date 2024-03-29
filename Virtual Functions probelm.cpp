/*Problem link : https://www.hackerrank.com/challenges/virtual-functions/problem?isFullScreen=true



solution :          */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// int cntr=1;
int i=0,j=0;
class Person{
    public: 
    string name;
    int age;
    virtual void getdata(){}
    virtual void putdata (){}
    
};
class Professor:public Person{
    private:
    int publications ,id=1;
    public:
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata (){
        cout<<name<<' '<<age<<' '<<publications<<' '<<++i<<endl;
    }
    
};



class Student :public Person{
    private:
    int marks[6] ,id=1,score=0;
    public:
    void getdata(){
        cin>>name>>age;
        for(int i=0;i<6;i++)
        cin>>marks[i],score+=marks[i];
    }
    void putdata (){
        cout<<name<<' '<<age<<' '<<score<<' '<<++j<<endl;
    }
    
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
