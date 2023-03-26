/*
Write a program by creating an 'Employee' class having the following methods and printthe final salary.

1 - 'getInfo()' which takes the salary, number of hours of work per day of employee asparameter
2   -   'AddSal()'   which   adds   $10   to   salary   of   the   employee   if   it   is   less   than   $500.
3 - 'AddWork()' which adds $5 to salary of employee if the number of hours of work perday is more than 6 hours.

*/


#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class employee_finances {
private:
    double salary=0;
    int number_of_daily_Working_hours=0; //
public:
    void get_info(double salary, int number_of_daily_Working_hours) {
        this->salary = salary;
        this->number_of_daily_Working_hours = number_of_daily_Working_hours;
    }
    void Add_salary(){
        if (salary < 500)salary += 10;
    }
    void Add_work() {
        if (number_of_daily_Working_hours > 6)salary += 5;
    }
    void print_salary() {
        cout << salary;
    }

};
int main()
{
    ANOOS
    double salary;
    int number_of_daily_Working_hours;
        employee_finances em;
    cout << "Enter the employee salary\n";
    cin >> salary;
    cout << "Enter the employee number of daily Working hours\n";
    cin >> number_of_daily_Working_hours;
      em.get_info(salary, number_of_daily_Working_hours);
     em.Add_salary();
    em.Add_work();
    cout << "The Final salary = ";
    em.print_salary();

        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
