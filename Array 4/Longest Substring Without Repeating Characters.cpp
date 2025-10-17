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
 int lengthOfLongestSubstring(string s) {
        int n=s.size();
         if(s.size()==0){
            return 0;
        }
        map<char,int>mp;
        int i=0,j=0;
        int k=INT_MIN;
        int ans;
        while(i<n){
            mp[s[i]]++;
            if(mp[s[i]]==1){
                i++;
            } else{
                while(mp[s[i]]>1 ){
                    ans=i-j;
                    k=max(ans,k);
                    mp[s[j]]--;
                    if(mp[s[j]]==0){
                        mp.erase(mp[s[j]]);
                    }
                    j++;   
                }
                i++;
        }    
        }
        if(i==n){
            ans=i-j;
            k=max(k,ans);
        }
        return k;
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