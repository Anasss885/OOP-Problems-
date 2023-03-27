/*
Q:Create user class and book class and construct a relation between them (. to . relation ) and try to access the data after the connection
*/

#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class baseEntity {
public:
    int id;
    string name;
    void set_id(int id) {
        this->id = id;
    }
    void set_name(string name) {
        this->name = name;
    }
    int get_id() {
        return this->id;
    }
    string get_name() {
        return this->name;
    }

};
class user: public baseEntity {
};
class Book : public baseEntity { // get inherted 
};
class userBook {
public:
    Book books[10]; // total of books can be read by one user 
    user user; // the one book can be read by only one user 

};
int main()
{
    ANOOS
        user u;
    u.set_id(1);
    u.set_name("Ali");
    Book book1;
    book1.set_id(1);
    book1.set_name("first book");

    Book book2;
    book2.set_id(4);
    book2.set_name("second book");

    userBook ub;
    ub.user = u;
    ub.books[0] = book1;
    ub.books[1] = book2;
    cout<<ub.user.get_name()<<"\n";
    cout << ub.books[0].get_name() << "\n" << ub.books[0].get_id();
    
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
