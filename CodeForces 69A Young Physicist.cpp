// CodeForces 69A Young Physicist
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x=0, y=0, z=0, X, Y, Z;
    cin>>n;
    for(int i;i<n;i++){
        cin>>X>>Y>>Z;
        x+=X;
        y+=Y;
        z+=Z;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}