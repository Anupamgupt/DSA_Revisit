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
bool isItPossible(string word1, string word2) {
        unordered_map<char,int>mp1,mp2;
        for(auto it:word1){
            mp1[it]++;
        }
        for(auto it:word2){
            mp2[it]++;
        }
        int c1=mp1.size();
        int c2=mp2.size();
        for (char i = 'a'; i <='z'; i++) {
            for(char j ='a'; j<='z';j++){
                if(mp1[i]==0 || mp2[j]==0){
                    continue;
                }
                int cnt1=c1;
                int cnt2=c2;
                if(i==j){
                    if(c1==c2) return true;
                    continue;
                };
                if(mp1[j]==0)cnt1++;
                if(mp2[j]==1)cnt2--;
                if(mp2[i]==0)cnt2++;
                if(mp1[i]==1)cnt1--;
                if(cnt1==cnt2) return true;
            }
        }
        return false;
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