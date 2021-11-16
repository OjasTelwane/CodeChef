// CodeForces 281A Word Capitalization
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string str1="";
    cin>>str1;
    if(97<=str1[0]){
        str1[0]=str1[0]-32;    
    }
    cout<<str1;
}