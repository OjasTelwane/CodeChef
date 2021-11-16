// CodeForces 59A - Word
#include<bits/stdc++.h>
using namespace std;
string a;
int lo = 0, up = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 97) up++;
        else lo++;
    }
    if (lo >= up) {
	transform(a.begin(), a.end(), a.begin(), ::toupper);
        }
    } else {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    }
    cout << a;
}