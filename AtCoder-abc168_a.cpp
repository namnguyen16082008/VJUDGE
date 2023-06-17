#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n%10==3) cout<<"bon";
    else if (n%10==0 || n%10==1 || n%10==6 || n%10==8) cout<<"pon";
    else cout<<"hon";
}
