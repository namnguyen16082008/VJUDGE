#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d;
    if (a==b && b==c && c==d) cout<<3;
    else if (a==b && c==d) cout<<2;
    else if (a==c && b==d) cout<<2;
    else if (a==d && b==c) cout<<2;
    else if (a==b && b==c) cout<<2;
    else if (a==b && b==d) cout<<2;
    else if (a==c && c==d) cout<<2;
    else if (b==c && c==d) cout<<2;
    else if (a==b) cout<<1;
    else if (a==c) cout<<1;
    else if (a==d) cout<<1;
    else if (b==c) cout<<1;
    else if (b==d) cout<<1;
    else if (c==d) cout<<1;
    else cout<<0;
}
