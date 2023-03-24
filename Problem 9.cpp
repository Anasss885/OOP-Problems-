/*
The Question is :
please create public clup and private clup to save The player info 
Look 
Please make sure that both of them  not use a common peices of code from each other 
*/



#include<iostream>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class baseEntity {
private:
    int id;
    string name;
public:
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return this->id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }

};

class PublicClub:public baseEntity {
private:
    int PublicCode;
public:
    void set_PublicCode(int PublicCode) {
        this->PublicCode = PublicCode;
    }
    int getPublicCode(){
        return this->PublicCode;
    }
};

class PrivateClub :public baseEntity {
private:
    int PrivateCode;
public:
    void set_PrivateCode(int PrivateCode) {
        this->PrivateCode = PrivateCode;
    }
    int getPrivateCode() {
        return this->PrivateCode;
    }
};

// next step is about creating an interface(abstract class) to override a functions from it for Saving player operation 
class publicPlayerService {
    virtual void savePublicPlayer(PublicClub Pc)=0; // Abstract Function To be Override
};
class privatePlayerService {
    virtual void savePrivatePlayer(PrivateClub Pc)=0;
};


// next classes belong to clubs services 
class PublicClubService: publicPlayerService { // this class is hold an info of the public palyer
public:
    void savePublicPlayer(PublicClub Pc) {
        cout << Pc.getId() << " " << Pc.getName() << " " << Pc.getPublicCode() << endl;
        cout << "the Public Player Saved Successfully\n";
    }
};
class PrivateClubService :privatePlayerService {
public:
    void savePrivatePlayer(PrivateClub Pc) {
        cout << Pc.getId() << " " << Pc.getName() << " " << Pc.getPrivateCode() << endl;
        cout << "the Private Player Saved Successfully\n";
    }
};

int main()
{
    ANOOS
        PublicClub pc;
    pc.setId(1);
    pc.setName("Ali");
    pc.set_PublicCode(636);
    PublicClubService cx;
    cx.savePublicPlayer(pc);

    PrivateClub pc2;
    pc2.setId(3);
    pc2.setName("mohsen");
    pc2.set_PrivateCode(122);
    PrivateClubService cm;
    cm.savePrivatePlayer(pc2);
       
    
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
