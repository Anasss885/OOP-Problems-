/*Q:
Create App that accept employee(id,name,number) and master (id,name,age) and print Data , But look :
-id must be>0
-num length must be <=2
-age must be >7 and <30

Solution :                    */

#include<iostream>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class employee {
private:
    int id;
    string name;
    string number;
public:
    void set_id(int id) {
        this->id = id;
    }
    int get_id() {
        return this->id;
    }
    void set_name(string name) {
        this->name = name;
    }
    string get_name() {
        return this->name;
    }
    void set_number(string number) {
        this->number = number;
    }
    string get_number() {
        return this->number;
    }


};

class master {
private:
    int id;
    string name;
    int age;
public:
    void set_id(int id) {
        this->id = id;
    }
    int get_id() {
        return this->id;
    }
    void set_name(string name) {
        this->name = name;
    }
    string get_name() {
        return this->name;
    }
    void set_age(int age) {
        this->age = age;
    }
    int get_age() {
        return this->age;
    }
};
class validation {
public:
    bool validateId(int id) {
        if (id <= 0) {
            cout << "Invalid Id\n";
            return false;
        }
        return true;
    }
    bool validate_number(string number) {
        if (number.size() > 2) {
            cout << "Invalid number\n";
            return false;
        }
        return true;
    }
    bool validateAge(int age) {
        if (age<7&&age>30) {
            cout << "Invalid age\n";
            return false;
        }
        return true;
    }


};

int main()
{
    ANOOS
        validation v;
        employee emp;
    emp.set_id(1);
    bool v1=v.validateId(emp.get_id());
    emp.set_name("Anas");
    emp.set_number("10");
    bool v2 = v.validate_number(emp.get_number());
    if (v1 && v2)cout << "id = " << emp.get_id() << " name = " << emp.get_name()<<" number = "<<emp.get_number()<<endl;
    master m;
    m.set_id(2);
    bool v3 = v.validateId(m.get_id());
    m.set_age(20);
    bool v4 = v.validateAge(m.get_age());
    m.set_name("Ali");
    if(v3&&v4)
        cout << "id = " << m.get_id() << " name = " << m.get_name() << " Age = " << m.get_age() << endl;

       
      

       
   // watch out for indomie addicts , buddy
   

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
