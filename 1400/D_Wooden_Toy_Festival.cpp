#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back 
#define MP make_pair
#define f first
#define S second
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod=1e9+7;
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define F(i,a,b) for(int i=a;i<b;i++)


 void code(){
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    ll a=0,b=1e15,c,res=0;

    while(a<=b){
        c=a+(b-a)/2;
        ll k,l=0,cnt=0;

        for( k=0;k<n;k++){
            if(arr[k]-arr[l]>2*c){
                l=k;
                cnt++;
            }
        }

        if(cnt>=3){
            a=c+1;
        }
        else{
            res=c;
            b=c-1;
        }
    }
    cout<<res<<endl;
}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

code();

    }
}