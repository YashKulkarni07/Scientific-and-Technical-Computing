//Yash Kulkarni
//Coding the equation of a line; HW2
//Solves the equation of a line by returning y coordinate with m,x,and b being asked for as input variables
//9/20/20
//
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    float m,x,b,y;
    cout << "Please enter m,x, and b variable?" <<endl;
    cin >> m;
    cin >> x;
    cin >> b;
    cout << "The y coordinate is = " << (m*x)+b << endl;
    return 0;
	}
