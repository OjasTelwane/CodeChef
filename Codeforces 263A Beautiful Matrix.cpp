Codeforces 263A Beautiful Matrix
#include <iostream>
using namespace std;

int main() 
{
    int mat[5][5], i, j; /*, row=0, col=0;*/
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                if(i==2 && j==2){
                    cout<<0;
                    break;
                }
                cout<<abs(2-i)+abs(2-j);                
                break;
            }
        }   
    }
}