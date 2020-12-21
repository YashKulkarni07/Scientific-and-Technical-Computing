#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

class Tri{
     private:
	float side_a,side_b,side_c,theta1,theta2,theta3;
     public:
	double hypo(float side_a,float side_b)
	    { 
		side_c=(sqrt((side_a*side_a)+(side_b*side_b)));
	        return side_c;
	    }
	 double angle(float side_b)
	   {
		theta1=(asin(side_b/side_c)*(180/3.1415));
	        return theta1;
            }
         double angle2()
	    {
 	  	theta3=90.0;
		return theta3;
	    }
	 double angle3() 
            {  
 		theta2=(theta3-theta1);
	        return theta2;
            }  

};

int main(){
	 Tri one;
	 cout<<"the hypotenuse for triangle one " << one.hypo(3.0,5.0) <<endl; 
 	 cout<<"The first angle for triangle one is " <<one.angle(5.0)<<endl;
	 cout<<"The second angle for triangle one is "<<one.angle2()<<endl; 	
         cout<<"The third angle for triangle one is " <<one.angle3()<<endl;

	 Tri two;
         cout<<"The hypotenous for triangle two " << two.hypo(4.0,12.0) <<endl;
 	 cout<<"The first angle for triangle two is "<<two.angle(12.0) <<endl;
	 cout<<"The second angle for triangle two is "<<two.angle2()<<endl;
 	 cout<<"The third angle for triangle two is " <<two.angle3()<<endl;
}
























