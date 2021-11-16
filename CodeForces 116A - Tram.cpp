// CodeForces 116A - Tram
#include<bits/stdc++.h>
using namespace std;
string a;
int lo = 0, up = 0;
int main() {
    int stops, capacity=0 , max=0;
    cin>>stops;
    while(stops>0){
        int a, b;
        cin>>a>>b;
        capacity=capacity-a+b;
        if(max<=capacity){
            max=capacity;
        }
        stops--;
    }
    cout<<max;

}