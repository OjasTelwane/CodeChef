// CodeChef Dec Long Cook
// Pyramid Traversal 
// Problem Code: PYRAMIDMOVES

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;

const lli mod7 = 1e9 + 7;
const int MAXF = 1e5;

lli fact [MAXF+1];
lli last_elem(lli lvl){
    return ((lvl + 1)* lvl) / 2;
}

ll powmod(ll a, ll b, ll p){
    a%=p;
    if(a==0){
        return 0;
    }
    ll product = 1;
    while(b>0){
        if(b&1){
            product *=a;
            product%=p;
            --b;
        }
        a*=a;
        a%=p;
        b/=2;
    }
    return product;
}


ll inv(ll a, ll p){
    return powmod(a, p-2, p);
}

ll nCk (ll n, ll k, ll p){
    return ((fact[n]*inv(fact[k], p)%p) * inv(fact[n-k], p)) % p;
}

pair<lli, lli> get_lvl_idx(lli n){
    lli lvl = -1;
    lli idx = -1;
    if(n==1){
        return {1, 1};
    }
    lli st=2;
    lli end = 1LL + ceil(sqrt(2*n));
    while(st<=end){
        lvl = (st+end)/2;
        if(last_elem(lvl)>=n && last_elem(lvl -1)<n){
            break;
        }
        else if(last_elem(lvl)>n){
            end = lvl -1;
        }
        else {
            st = lvl + 1;
        }
    }
    idx = n - (lvl*(lvl-1))/2;
    return {lvl, idx};
}

int main() {
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<MAXF;i++){
        fact[i] = fact[i-1]*i % mod7;
    }
    
    int t;
    cin>>t;
    while(t--){
        lli s, e;
        cin>>s>>e;
        pair<lli, lli> res1, res2;
        res1 = get_lvl_idx(s);
        res2 = get_lvl_idx(e);
        
        lli slvl = res1.first;
        lli sidx = res1.second;
        lli elvl = res2.first;
        lli eidx = res2.second;
        
        lli L = elvl - slvl;
        lli K = eidx - sidx;
        lli ans = -1;
        if(L<=0 || K<0 || K>L){
            ans=0;
        }
        else{
            ans = nCk(L, K, mod7);
        }
        cout<<ans<<endl;
    }

    return 0;
}