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
int longestPalindromeSubseq(string s) {
        string k=s;
        reverse(k.begin(),k.end());
        int n=s.size();
        int m=n;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==k[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // cout<<k<<" "<<s<<endl;
        return dp[n][m];
}
void solve(){

 
    
}

int main(){ 
    fast;
    ll t;
    cin>>t;
 //   t=1;
    while(t--){
        solve();
    }
   
    return 0;
}