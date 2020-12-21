#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

struct Tri{
     float side_a;
     float side_b;
     float side_c;
     float theta1;
     float theta2;
     float theta3;
 };

void hypo(float side_a, float side_b,float &side_c);
void angle(float side_b, float &side_c, float &theta1);
void angle2(float theta3,float &theta1, float &theta2);

int main() {
    Tri one,two;
    one.side_a=3.;
    two.side_a=4.;
    one.side_b=5.;
    two.side_b=12.;
    one.theta3=90.;
    two.theta3=90.;

    hypo(one.side_a, one.side_b, one.side_c);
    hypo(two.side_a, two.side_b, two.side_c);
    angle(one.side_b,one.side_c,one.theta1);
    angle(two.side_b,two.side_c,two.theta1);
    angle2(one.theta3,one.theta1,one.theta2);
    angle2(two.theta3,two.theta1,two.theta2);

    cout<<"The hypotenuse for triangle one " << one.side_c <<endl;
    cout<<"The hypotenuse for triangle two " <<two.side_c <<endl;
    cout<<"One of the angles for traingle one is "<< one.theta1 <<endl;     
    cout<<"The other angle for triangle one is "<< one.theta2 <<endl;
    cout<< "The last angle for triangle one is " << one.theta3 <<endl;
    cout<<"One of the angles for trianlge two is " <<two.theta1<<endl;
    cout<<"The other angle for triangle two is " << two.theta2<<endl;
    cout<<"The last angle for triangle two is " << two.theta3<<endl;

}
void hypo(float side_a,float side_b, float &side_c) {
     side_c=sqrt((side_a*side_a)+(side_b*side_b));
}
void angle(float side_b, float &side_c, float &theta1) {
      theta1=(asin(side_b/side_c)*(180/3.1415));
}
void angle2(float theta3, float &theta1, float &theta2) {
     theta2=(theta3-theta1);
} 

     




 
