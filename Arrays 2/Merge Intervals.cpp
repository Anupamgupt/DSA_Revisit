#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int f,s;
        cin>>f>>s;
        v.push_back({f,s});
    }
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    for(int i=1;i<n;i++){
        if(v[i-1][1]>=v[i][0]){
            v[i][0]=min(v[i][0],v[i-1][0]);
            v[i][1]=max(v[i][1],v[i-1][1]);
        }else{
            ans.push_back(v[i-1]);
        }
    }
    ans.push_back(v[n-1]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}

int main(){
    int t;
    t=1;
    while(t--){
        solve();
    }

}