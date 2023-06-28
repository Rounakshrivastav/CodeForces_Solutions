#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back 
#define mp make_pair
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> unmap;
const int mod=1e9+7;
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define F(i,a,b) for(int i=a;i<b;i++)


void dfs(int s,int p,vector<int>adj[],int leaf[]){
    bool f=0;
        for(auto e:adj[s]){
            if(e==p) continue;
            f=1;
            dfs(e,s,adj,leaf);
            leaf[s]+=leaf[e];
        }
        if(!f) leaf[s]++;
}

 void code(){
    int n;cin>>n;

    vector<int> adj[n+1];

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int leaf[n+1]={0};
    dfs(1,-1,adj,leaf);
    
    int q;cin>>q;
    while(q--){
        int x,y;cin>>x>>y;
        int ans=leaf[x]*leaf[y];
        cout<<ans<<endl;
    }
}



signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

code();

    }
}