#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,d,i=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d;
    while (a>0 && c>0){
        i++;
        (i%2==1) ? c-=b : a-=d;
    }
    (c<=0) ? cout<<"Yes" : cout<<"No";
}
