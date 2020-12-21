#include <iostream>
#include <time.h>
#include <random>

using std::cin;
using std::cout;
using std::endl;
using std::srand;

int main() { 
    srand (time(NULL));
    int rand();
    int random_number = rand();
    if (random_number%2 ==0) {
    cout << " The number is heads " << endl;
    }
    else {
    cout << " The number is tails "<< endl;
    }
  return 0;
}
