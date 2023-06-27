#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a=21,b=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    b+=n;
    while (b>=60){
        b-=60;
        a++;
    }
    cout<<a<<':';
    if (b<10) cout<<0;
    cout<<b;
}
