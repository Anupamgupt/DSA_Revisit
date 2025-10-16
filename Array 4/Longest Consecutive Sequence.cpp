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
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        for(int i=0;i<nums.size();i++){
            int f=nums[i]-1;
            if(mp.find(f)!=mp.end()){
                mp[nums[i]]=0;
            }
        }
        int ans=0;
        int c=1,mx=1;
        for(auto it:mp){
            if(it.second){
                int f=(int)it.first;
                while(mp.find(f+1)!=mp.end()){
                    c++;
                    f++;
                    mx=max(c,mx);
                }
                c=1;
            }
        }
        return mx;
    }
};
void solve(){
  
 
    
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