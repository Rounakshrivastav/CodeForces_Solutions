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


 void code(){
    int n;cin>>n;
   int vec[n+1];

    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
int  cnt=0;
    for(int i=1;i<=n;i++){
       for(int j=vec[i]-i;j<=n;j+=vec[i]){
        if(j>=0){ 
         if((vec[i]*vec[j])==(i+j) && i<j) cnt++;
       }
    }
    }

    cout<<cnt<<endl;
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

