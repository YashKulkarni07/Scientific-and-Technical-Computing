#include <iostream>
#include <time.h>
#include <random>

using std::cin;
using std::cout;
using std::endl;
int main() {
  int h=0;
  int t=0;
  srand (time(NULL));
  int rand();
  int random_number;
  for (int i=0; i<1000000;i++){ 
  random_number=rand();
  if (random_number%2 ==0) {
  h=h+1;
  }
  else {
  t=t+1;
  }
}
  cout << " The number of heads " << h <<endl;
  cout << " The number of tails " << t <<endl;
 }
