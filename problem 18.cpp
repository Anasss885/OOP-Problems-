/*
Q:Write a program that has variables to store Car data like; 
CarModel, CarName, CarPriceand CarOwner.
 The program should include functions to assign user defined values to 
the above mentioned variable and a display function to show the values. 
Write a main that   calls   these   functions. 
 Now   write   another   runner   class   that   declares   three   Carobjects and displays the data of all three
*/


#include<iostream> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class User {
public:
    int id;
    string name;
    string phone;

};
class car {
private:
    string carModel, carName, carOwner;
    int carPrice;
    User user;
public:
    void set_car_model(string carModel) {
        this->carModel = carModel;
    }
    void set_car_name(string carName) {
        this->carName = carName;
    }
    void set_car_owner(string carOwner) {
        this->carOwner = carOwner;
    }
    void set_car_price(int carPrice) {
        this->carPrice = carPrice;
    }
    void setUser(User user) {
        this->user = user;
    }
    string get_carModel() {
        return this->carModel;
    }
    string get_carName() {
        return this->carName;
    }
    string get_carOwner() {
        return this->carOwner;
    }
    int get_carPrice() {
        return this->carPrice;
    }
    User get_user() {
        return this->user;
    }

};
class car_controller {
private:
    User us;
    car c;
public:
    void set_data() {
        us.id = 1;
        us.name = "Anas";
        us.phone = "01156801187";

        c.set_car_model("fourth");
        c.set_car_name("BMW");
        c.set_car_owner("Eng hassan");
        c.set_car_price(250000);
        c.setUser(us);
    }
    void get_data() {
    cout<<c.get_user().id<<"\n";
    cout << c.get_user().name << "\n";
    cout << c.get_user().phone << "\n";
    cout << c.get_carModel() << "\n";
    cout << c.get_carName() << "\n";
    cout << c.get_carOwner() << "\n";
    cout << c.get_carPrice() << "\n";
    }
};
int main()
{
    ANOOS
     car_controller cc;
    cc.set_data();
    cc.get_data();
       
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
