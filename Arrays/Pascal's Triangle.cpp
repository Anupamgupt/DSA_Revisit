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
    int n ;
    cin>>n;
    vector<vector<int>>v;
    if(n==1){
        vector<int>ans;
        ans={1};
        v.push_back(ans);
    }else if(n==2){
       v={{1},{1,1}};
    }
    else{
        v={{1},{1,1}};
        for(int i=3;i<=n;i++){
            vector<int>ans={1};
            for(int j=1;j<(i-1);j++){
                int k=v[i-2][j-1];
                int p=v[i-2][j];
                ans.push_back(k+p);
            }
            ans.push_back(1);
            v.push_back(ans);
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"he;;p";
    
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