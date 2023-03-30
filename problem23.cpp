/*
Q:Create a class “ Distance” with two constructors (no argument, and two argument)
*/


#include<iostream>
#include <algorithm> 
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include<string>
#include <set> 
#include <map> 
#include <cstdlib>
#include <utility>
#include <ctime>
#include <cmath>
#include <valarray>
#include<sstream>  
#include <stdio.h>
#include <string.h>
#include <iomanip> 
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class distance2 {
private:
    int x;
    int y;
public:
    distance2(int x, int y) :x(x), y(y) {} // using initializer list
    distance2(){}

    void print() {
        cout << x << " " << y<<endl;
    }

};
int main()
{
    ANOOS
        distance2 dist(1, 6);
    dist.print();
    
       
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
