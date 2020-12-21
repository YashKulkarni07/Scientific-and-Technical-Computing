#include <iostream>
using std::cout;
using std::endl;

void y_int(float m, float x, float b, float &y);

int main() {
    float m=0.3;
    float x=2;
    float b=1;
    float y;

    y_int(m,x,b,y);
    cout<<"y_int is "  <<y<<endl;
}

void y_int(float m, float x, float b,float &y){
   y=(m*x)+b;
} 
