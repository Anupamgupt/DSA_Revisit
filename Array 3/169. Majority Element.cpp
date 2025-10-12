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
int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]==(nums.size()/2 + 1)){
                return it;
            }
        }
        return 0;
}
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);
    int flag=0;
    int ans;
    for(int i=0;i<n;i++){
       cin>>v[i];
       if(flag==0){
        flag++;
        ans=v[i];
       }else{
        if(ans==v[i]){
            flag++;
        }else{
            flag--;
        }
       }
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