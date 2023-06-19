#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=705;
ll n,m;
char a[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        a[i][0]='.';
        a[i][m+1]='.';
    }
    for (ll j=1;j<=m;j++){
        a[0][j]='.';
        a[n+1][j]='.';
    }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]=='.')
                for (char k='1';k<='5';k++)
                    if (k!=a[i-1][j] && k!=a[i+1][j] && k!=a[i][j-1] && k!=a[i][j+1]){
                        a[i][j]=k;
                        break;
                    }
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
