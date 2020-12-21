#include <iostream>
#include<random>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    srand((unsigned)time(0));    
    int i;	
    vector<int> NumberLine;
    while (i!=42)
    { 
     i=((rand()%200)+1);
     NumberLine.push_back(i);i++;
    } 
     cout<<NumberLine.size()<<endl;
    }
