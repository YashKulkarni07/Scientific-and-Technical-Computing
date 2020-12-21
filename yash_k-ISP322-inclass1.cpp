#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main () {
   char array_alphabets [26] = {'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

   int number_element ;
   cout << "What element number do you want to know between 1-26?"<<endl;
   cin >> number_element ;
   cout << "Elements " << number_element << " of array_alphabet is " << array_alphabets [number_element-1] << endl; 
   return 0;
	}
