/*problem link : https://www.hackerrank.com/challenges/rectangle-area/problem


solution :                  */


/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    
    
    public:
    int h;
    int w;
    void display(){
        cout<<w<<" "<<h<<"\n";
    }
    
};
class RectangleArea:public Rectangle{
    public:
    void read_input(){
        cin>>Rectangle::w>>Rectangle::h;
    }
    
    void display(){
        cout<<w*h<<"\n";
    }
    
};
