// CodeChef Dec long Cook
// Check Mate 
//Problem Code: CHECKMATE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int xK, yK, xR1, yR1, xR2, yR2;
        cin>>xK>>yK>>xR1>>yR1>>xR2>>yR2;
        string ans ="NO";
        if(!(xK==1 || yK==8 || xK==8 || yK==1)){
            ans="NO";
        }
        else{
            if(xK==1){
                if((xR1==2 || xR2==2) && yR1!=yR2){
                    if(abs(yR1-yK)>1 && abs(yR2-yK)>1){
                        ans="YES";
                    }
                }
            }
            if(xK==8){
                if((xR1==7 || xR2==7) && yR1!=yR2){
                    if(abs(yR1-yK)>1 && abs(yR2-yK)>1){
                        ans="YES";
                    }
                }
            }
            if(yK==1){
                if((yR1==2 || yR2==2) && xR1!=xR2){
                    if(abs(xR1-xK)>1 && abs(xR2-xK)>1){
                        ans="YES";
                    }
                }
            }
            if(yK==8){
                if((yR1==7 || yR2==7) && xR1!=xR2){
                    if(abs(xR1-xK)>1 && abs(xR2-xK)>1){
                        ans="YES";
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}