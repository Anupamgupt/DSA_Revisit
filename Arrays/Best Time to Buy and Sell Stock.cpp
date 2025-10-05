#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;


#define MOD 1000000007
#define MOD1 998244353
#define ll long long
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define deb(a) cout<<a<<'\n'
#define deb2(a,b) cout<<a<<" "<<b<<'\n'
#define debug(v) for(auto it:v)cout<<it<<" "
#define all(x) (x).begin(), (x).end()
 
typedef vector<ll>  vec;
typedef set<ll>  stt;
typedef pair<int,int> PII;

#define MX INT_MAX
#define MN INT_MIN
// ll it=max_element(all(v))-v.begin();
ll ceil(ll n,ll m) {
    if(n%m==0){
        return n/m;
    }
    return (n/m)+1;
}
string to_lower(string s){
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     return s;
}
string to_upper(string s){
     transform(s.begin(), s.end(), s.begin(), ::toupper);
     return s;
}
/*--------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>prefix(n);
    vector<int>suffix(n);
    for(int i=0;i<n;i++){
        if(i==0){
            prefix[i]=v[i];
        }else{
            prefix[i]=min(v[i],prefix[i-1]);
        }
    }
    for(int i=(n-1);i>=0;i--){
        if(i==(n-1)){
            suffix[i]=v[i];
        }else{
            suffix[i]=max(v[i],suffix[i+1]);
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(suffix[i]-prefix[i],ans);
    }
    cout<<ans<<endl;
 
    
}

int main(){ 
    fast;
    ll t;
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
   
    return 0;
}