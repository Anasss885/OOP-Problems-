
/*
Q: create FaceBook class that accept all of its data only through constructor and render these data only using getters, setters not allowed at all
*/




#include<iostream>
#include <algorithm>  
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class faceBook {
private:
    int id;
    string text, image;
public:
    faceBook(int id, string text, string image):id(id),text(text),image(image){} 
    // assigning  elements using initializer list, one of best constructor assigning ways ever
    int get_id() {
        return id;
    }
    string get_text(){
        return text;
    }
    string get_image() {
        return image;
    }
};
int main()
{
    ANOOS
        faceBook fb(1,"text here","img");
    cout << fb.get_id()<< " " << fb.get_text() << " " << fb.get_image() << "\n";
        
}





/*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
