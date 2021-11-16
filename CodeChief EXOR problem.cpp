// CodeChief EXOR problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
        int N;
        cin>>N;
        vector<int> arr;
        for(int j=0;j<N;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        for(int i=0;i<1000;i++){
            int sum=arr[0]+i;
            for(int j=1;j<N;j++){
                sum = sum^(arr[j]+i);
            }
            if(sum==0){
                cout<<i<<endl;
                break;
            }
            else{
                cout<<-1<<endl;
                break;
            }
        }
	}
	return 0;
}