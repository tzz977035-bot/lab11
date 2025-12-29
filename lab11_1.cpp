#include<iostream>
#include<ctime>
#include<fstream>

using namespace std;
 
int main(){ 

 cout << "Press Enter 3 times to reveal your future.";
 
   for(int i=0;i<3;i++){
       cin.get();
   }                 
    
    srand(time(0));
    
    string set[]={"A","B+","B","C+","C","D+","D","F","W"};
    
    string grade = set[rand()%9];
    
    
 cout << "You will get "<< grade <<" in this 261102.";
}
