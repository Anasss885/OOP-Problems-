/*Q: Please , create an app that accept the same data in both classes but with differnt access modifires(public,private)

Solution :                     */ 

#include<iostream>
#include <string.h>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class priv {
private:
    int id;
    string name;
public:

    void setId(int id) {
        this->id = id;
    }
    int getId(){
        return this->id;
    }
    void setname(string  name) {
        this->name = name;
    }
    string getname() {
        return this->name;
    }

};
class pub {
public:
    int id;
    string name;
};
int main()
{
    ANOOS
        pub p;
    p.id = 5;
    p.name = "anas";
    priv pri;
    pri.setId(5);
    pri.setname("anas");
       /*the above classes to clarify the way of accessing public attributes and
       * private attributes
        */

    

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
