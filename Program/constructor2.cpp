#include <iostream>
#include <cmath>
using namespace std;
class point{
    int x,y;
    public:
    point(){
        cin>>x>>y;
    }
    
    void displayPoint(){
        cout <<"Your point is ("<<x<<", "<<y<<")"<<endl;
    }
    friend void distance(point p1, point p2);
    
};
void distance(point p1, point p2){
    cout <<"The distance between these two points is: ";
        float dis=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
        cout <<dis;
    }
int main()
{
    point p1;
    p1.displayPoint();
    point p2;
    p2.displayPoint();
    distance(p1,p2);
    return 0;
}