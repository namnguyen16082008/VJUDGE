#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,x;
ll Mod(ll a, ll n, ll m){
    ll ans=1;
    while (n>0){
        ll d=1,s=a;
        while (d*2<=n){
            d*=2;
            s=(s*s)%m;
        }
        n-=d;
        ans=(ans*s)%m;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (a%10==(a*a)%10) cout<<a%10;
    else if (a%10==2){
        x=Mod(b%4,c,4);
        if (x==1) cout<<2;
        if (x==2) cout<<4;
        if (x==3) cout<<8;
        if (x==0) cout<<6;
    }
    else if (a%10==3){
        x=Mod(b%4,c,4);
        if (x==1) cout<<3;
        if (x==2) cout<<9;
        if (x==3) cout<<7;
        if (x==0) cout<<1;
    }
    else if (a%10==4){
        if (b%2==1) cout<<4;
        if (b%2==0) cout<<6;
    }
    else if (a%10==7){
        x=Mod(b%4,c,4);
        if (x==1) cout<<7;
        if (x==2) cout<<9;
        if (x==3) cout<<3;
        if (x==0) cout<<1;
    }
    else if (a%10==8){
        x=Mod(b%4,c,4);
        if (x==1) cout<<8;
        if (x==2) cout<<4;
        if (x==3) cout<<2;
        if (x==0) cout<<6;
    }
    else if (a%10==9){
        if (b%2==1) cout<<9;
        if (b%2==0) cout<<1;
    }
}
