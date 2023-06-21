#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll Check(){
    if (s.size()<3) return 0;
    return (s[0]=='W' && s[1]=='U' && s[2]=='B');
}
void Del(){
    while (Check()) s.erase(0,3);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    Del();
    while (s.size()>0){
        if (Check()){
            cout<<' ';
            Del();
        }
        else{
            while (!Check() && s.size()>0){
                cout<<s[0];
                s.erase(0,1);
            }
        }
    }
}
