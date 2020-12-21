/* 
Yash Kulkarni
Kshift-Cypher
To make a program that will encrypt a given phrase based on a k shift number and return that phrase, and then decrypt that phrase and return the original phrase
10/27/2020
 */

#include<iostream>
#include<string>
#include<cmath>

using std::cout;
using std::endl;
using std::string;


struct Cipher{
	string phrase;
	int key;
	string ephrase;
	string dphrase;
};


void jumbled(string phrase, int key,string &ephrase);
void unjumbled(int key, string &ephrase, string &dphrase);



int main() {
	Cipher one;
	one.phrase="life the universe and everything equals 42" ;
	one.key=42;
	
	jumbled(one.phrase,one.key,one.ephrase);
	unjumbled(one.key,one.ephrase,one.dphrase);

	cout<<"The original phrase is:" <<one.phrase <<endl;
	cout<<"The K-shift value is:" << one.key<< endl;
	cout<<"The encrypted phrase is: " <<one.ephrase <<endl;
	cout<<"The decrypted phrase is: "<<one.dphrase <<endl;
 
	
}


void jumbled(string phrase,int key, string &ephrase)
{     	
	for(int i=0;i<phrase.size();i++) {
	if(phrase[i]=='4'||phrase[i]=='2') {
	   ephrase+=char(int(phrase[i]-48+key)%10+48);
	}else{
 	ephrase+=char(int(phrase[i]-97+key)%26+97);
	
            if (phrase[i]==' ') {
             ephrase[i]=' ';
 	   }
         } 
       }
      }
void unjumbled(int key,string &ephrase,string &dphrase)
{
       for (int i=0; i<ephrase.size();i++) {
	if(ephrase[i]>=48 && ephrase[i]<=57) {

	  dphrase+=char(int(ephrase[i]-48-key)%10+58);

	}else if (((ephrase[i]-(key-26)-97))>=0){
           dphrase+=char(int(ephrase[i]-(key-26)-97)%26+97);
	}else{
 	   dphrase+=char(int(ephrase[i]-(key-26)-97)%26+123);
	}	
	if (ephrase[i]==' ') {
	    dphrase[i]=' ';
         }
	}	   
       }     	
   





