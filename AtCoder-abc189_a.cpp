#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    (a==b && b==c) ? cout<<"Won" : cout<<"Lost";
}
