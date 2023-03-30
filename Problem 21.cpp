
/*
Q:Create   a    class    Account    class     with     balance     as     data    member.    
Create  methods to withdraw and Add To current balance.  
*/



#include<iostream>
#include <algorithm> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class account {
private:
    double balance;
public:
    account(double balance):balance(balance){}
    double withdraw(double amount) {
        if (this->balance >= amount) {
        this->balance -= amount;
        return amount;
        }
        else {
            cout << "sorry,your money is less than what you want!";
            return 0.0;
        }
    }
    void currentbalance() {
        cout << "The current balance is " << balance << endl;
    }
    void AddMoney(double amount) {
        this->balance += amount;
    }

};
int main()
{
    ANOOS
        account a(10500);
    a.AddMoney(6500);
    a.currentbalance();
   
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
