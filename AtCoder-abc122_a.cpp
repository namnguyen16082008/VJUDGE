#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k;
    if (k=='A') cout<<'T';
    else if (k=='T') cout<<'A';
    else if (k=='G') cout<<'C';
    else if (k=='C') cout<<'G';
}
