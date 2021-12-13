// CodeChef dec long cook
// Utkarsh and Placement tests
// Problem Code: UTKPLC

#include <iostream>
using namespace std;

int main() {
	int testCase;
	cin>>testCase;
	for(int i=0;i<testCase;i++){
	    char first, second, third, x, y;
	    int valueX=3, valueY=3;
	    cin>>first>>second>>third>>x>>y;
	    if(first==x){
	        valueX=1;
	    }
	    else if(second==x){
	        valueX=2;
	    }
	    else if(third==x){
	        valueX=3;
	    }
	    if(first==y){
	        valueY=1;
	    }
	    else if(second==y){
	        valueY=2;
	    }
	    else if(third==y){
	        valueY=3;
	    }
	    if(valueX>valueY){
	        cout<<y<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}