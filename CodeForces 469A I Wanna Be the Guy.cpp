// CodeForces 469A I Wanna Be the Guy
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, p1, p2;
    cin>>num;
    vector<int> player1;
    vector<int> player2;
    cin>>p1;
    for(int i=0;i<p1;i++){
        int element;
        cin>>element;
        player1.push_back(element);
    }
    cin>>p2;
    for(int i=0;i<p2;i++){
        int element;
        cin>>element;
        player1.push_back(element);
    }
    int i;
    for(i=0;i<num;i++){
        if((player1.end()!=find(player1.begin(), player1.end(), i+1)) || (player2.end()!=find(player2.begin(), player2.end(), i+1))){
            continue;
        }
        break;
    }
    if(i==num){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}