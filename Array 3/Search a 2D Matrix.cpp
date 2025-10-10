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
bool binary(int n, vector<int>v,int k){
        int i=0;
        int j=n-1;  
        while(i<=j ){
            int mid=i+(j-i)/2;
            if(v[mid]==k){
                return true;
            }else if(v[mid]>k){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return false;
    }
bool searchMatrix(vector<vector<int>>& matrix, int target) {     
        int i=0;int j=matrix.size()-1;
        int s=matrix[0].size();
        bool ans=false;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[mid][0]>target){
                j=mid-1;
            }else if(matrix[mid][s-1]<target){
                i=mid+1;
            }else{
                return ans=binary(s,matrix[mid],target);  
            }
        }
        return ans;     
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>v2(m);
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        v.push_back(v2);
    }
    int target;
    cin>>target;
    bool ans=searchMatrix(v,target);
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