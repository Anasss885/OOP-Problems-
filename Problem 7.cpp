/*Q:
Please , create app that accept 
id,name,number,code of ClubBC
id,name,number,licence of ClubRel
of player
and print 
id,name,number
id,name,number,code
id,name,number,licence
using the oop concepts you have learned

Solution :                       */
#include<iostream>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class BaseClass {
public:
    int id;
    string name,number;
};
class BsClub :public BaseClass { //extends the base class to have the whole data
public:
    int code;
};
class RelClub :public BaseClass { //extends the base class to have the whole data
public:
    int license;
};

class playerService {
public:
    void print_1(int id,string name,string number) {
        cout << id << " " << name << " " << number << "\n";
    }
};

class BsClubServices :public playerService {
public:
    void print_2(BsClub bs) {
        this->print_1(bs.id, bs.name, bs.number);
        cout << " code is : "<<bs.code << "\n";
    }
};
class RelClubServices :public playerService {
public:
    void print_2(RelClub bs) {
        this->print_1(bs.id, bs.name, bs.number);
        cout <<" licence is : "<< bs.license << endl;
    }
};


int main()
{
    ANOOS
        BsClub bs;
    bs.name = "Anas";
    bs.id = 10;
    bs.code = 1050556478;
    bs.number="150";
    BsClubServices sr;
    sr.print_2(bs);

    

    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
