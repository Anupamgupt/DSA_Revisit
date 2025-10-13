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
vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int k=n/3;
        for(auto it:nums){
            mp[it]++;
            
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second>k){
                ans.push_back(it.first);
            }
        }
        return ans;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt1=0,cnt2=0, el1=INT_MIN, el2=INT_MIN;
    for(int it : v){
        if(cnt1==0 && el2!=it){
            cnt1=1;
            el1=it;
        }else if(cnt2==0 && el1!=it){
            cnt2=1;
            el2=it;
        }else if (el1==it){
            cnt1++;
        }else if(el2==it){
            cnt2++;
        }else{
            cnt2--,cnt1--;
        }
    }
    cnt2=0,cnt1=0;
    for(int it:v){
        if(el1==it)cnt1++;
        else if(el2==it)cnt2++;
    }
    int k=n/3;
    vector<int>ans;
    if(cnt1>k){
        ans.push_back(el1);
    }
    if(cnt2>k){
        ans.push_back(el2);

    }
    for(int it : ans){
        cout<<it <<" ";
    }

    
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