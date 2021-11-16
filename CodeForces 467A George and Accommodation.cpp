// CodeForces 467A George and Accommodation
#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
    cout<<count;
}