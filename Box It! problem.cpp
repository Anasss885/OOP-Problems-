//Problem link : https://www.hackerrank.com/challenges/box-it/problem


solution :


#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
    int l,b,h;
    public:
    Box(){
        this->l=0;
        this->b=0;
        this->h=0;
    }
    Box(int length, int breadth, int height){
        this->l=length;
        this->b=breadth;
         this->h=height;
    }
    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
        
    }
    int getLength(){
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    long long CalculateVolume(){
        long long v=(long long)l*b*h;
        return v;
    }
    bool operator<(Box&B){
        bool cond1 =l<B.l;
        bool cond2=b<B.b&&l==B.l;
        bool cond3 =h<B.h&&b==B.b&&l==B.l;
        if(cond1||cond2||cond3)return  true;
        else return false;
    }
    friend ostream& operator<<(ostream& out,Box box){
        out<<box.l<<" "<<box.b<<" "<<box.h;
        return out;
    }
};
