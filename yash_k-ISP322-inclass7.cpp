#include <iostream>
#include <vector>
#include<random>

using std::cout;
using std::endl;
using std::vector;

   vector<int> make_random_vector(int count);

   void print_myvector(vector<int> printThis);

   vector<int> combineV(vector<int> &A, vector<int> &B);
 
   int main() {
       srand(time(NULL));
       vector<int> vectorA = make_random_vector(10);
       vector<int> vectorB = make_random_vector(10);
    
       cout<< "vector a:" << endl;
       print_myvector(vectorA);
       cout<<"vector_b:"<<endl;
       print_myvector(vectorB);
       
       vector<int> vectorC=combineV(vectorA,vectorB);
       cout<<"vector_c:"<<endl;
       print_myvector(vectorC);

       cout<<"The size of vector A is: "<<vectorA.size()<<endl;
       cout<<"The size of vector B is: "<<vectorB.size()<<endl;
       cout<<"The size of vector C is: "<<vectorC.size()<<endl;

       return 0;

      }

      vector<int> make_random_vector(int count)
      {
      int i;
      vector<int> myRandomVector;
      for(int j=0; j<count;j++)
      {
      i=(rand()%32)+1;
      myRandomVector.push_back(i);
      }
      return myRandomVector;
      }
       
      void print_myvector(vector<int> printThis)
      {
       for(int m:printThis)
      {
       cout<<m<<endl;
      } 
      }

       vector<int> combineV(vector<int> &A, vector<int> &B)
       {
       vector<int> C;
       
       for(int val:A)
       {
        C.push_back(A.front());
        A.erase(A.begin());
        }
        for(int val:B) {
        C.push_back(B.front());
        B.erase(B.begin());
        }
        return C;
 } 
