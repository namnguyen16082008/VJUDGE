#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>a;
        if (a==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
