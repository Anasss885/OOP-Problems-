/*
Q: Create a Resturant app that has a Generic class for the whole Data and other class for the services as holding the order from the guest

*/

#include<iostream> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class resturant {
public:
    int id;
    string meal_name;

};
class resturant_service {
public:
    resturant add_order(resturant res) { // this function used to add order
        return res;
    }
};
int main()
{
    ANOOS
        resturant res;
    res.id = 5;
    res.meal_name = "beef";
    resturant_service rss;
    //rss.add_order(res);
    cout << rss.add_order(res).id << " " << rss.add_order(res).meal_name;
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
