// CodeForces 110A Nearly Lucky Number
#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    int count=0, len=0;
    long long int num;
    cin>>num;
    while(num>0){
        if(num%10==4 || num%10==7){
            count++;
        }
        num=num/10;
        len++;
    }
    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}