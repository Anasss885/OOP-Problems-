/*Q:
Create an API for FaceBook&LinkedIn posts that accept(id,text,image) and show them (using oop concepts )

Solution :              */


#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class BaseClass {
public:
    int id;
    string text, image;
};
class sameItems {
public:
    void print(BaseClass bc) {
        cout << bc.id << " " << bc.text << " " << bc.image << "\n";
    }
};
class AppServices { // This is an abstract class 
    virtual void print_post(BaseClass bc) = 0; // this is just a signature without body
};
class FaceBook:AppServices,sameItems{
public:
    void print_post(BaseClass bc) {
        cout << "this post in FB\n";
        this->print(bc);
        
       // cout << bc.id << " " << bc.text << " " << bc.image << "\n";
    }
};
class LinkedIn:AppServices,sameItems{
public:
    void print_post(BaseClass bc) {
        cout << "this post in LinkedIn\n";
        this->print(bc);
        
        
       // cout << bc.id << " " << bc.text << " " << bc.image << "\n";
    }
};


int main()
{
    ANOOS
        BaseClass bc;
    bc.id = 1;
    bc.image = "i am an image\n";
    bc.text = "small text , who're you?\n";
    FaceBook fb;
    fb.print_post(bc);

    LinkedIn li;
    li.print_post(bc);
    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
