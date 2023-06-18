#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll n,a=0,d=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>k;
        (k=='A') ? a++ : d++;
    }
    if (a>d) cout<<"Anton";
    else if (a<d) cout<<"Danik";
    else cout<<"Friendship";
}
