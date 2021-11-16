//CodeForces 50A Domino Piling
#include <iostream>
using namespace std;

int main() 
{
   int M=0, N=0;
   cin>>M>>N;
   if(M*N==0 || M*N==1){
       cout<<"0";
   }
   if(M*N>=2){
       cout<<(M*N)/2;
   }
}