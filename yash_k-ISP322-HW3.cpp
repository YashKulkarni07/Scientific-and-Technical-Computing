#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
float hypo(int side_a,int side_b);
float theta(float side_c,int side_a);
float theta2(float angle);

int main() {
    int side_a=3;
    int side_b=7;
    float side_c;
    float angle;
    float angle2;

    side_c=hypo(side_a,side_b);
    angle=theta(side_c,side_a);
    angle2=theta2(angle);
    cout<<"side_c= " << side_c<< endl;
    cout<<"theta1= " << angle<<endl;
    cout<<"theta2= " << angle2<<endl;  
}

float hypo(int side_a,int side_b) {
      float side_c;
      side_c=sqrt((side_a*side_a)+(side_b*side_b));
      return side_c;
 }
float theta(float side_c,int side_a) {
      float angle;
      angle=(asin(side_a/side_c)*(180/3.1415));
      return angle;
} 
float theta2(float angle) {
      float angle2;
      angle2=(90-angle);
      return angle2;
}
          
