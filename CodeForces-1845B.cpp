#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,xa,ya,xb,yb,xc,yc;
void Solve(){
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    if (xa==xb && xb==xc){
        if ((ya-yb)*(ya-yc)<0) cout<<1<<endl;
        else cout<<min(abs(ya-yb),abs(ya-yc))+1<<endl;
    }
    else if (ya==yb && yb==yc){
        if ((xa-xb)*(xa-xc)<0) cout<<1<<endl;
        else cout<<min(abs(xa-xb),abs(xa-xc))+1<<endl;
    }
    else if ((xa-xb)*(xa-xc)<=0 && (ya-yb)*(ya-yc)<=0) cout<<1<<endl;
    else if ((ya-yb)*(ya-yc)<=0) cout<<min(abs(xa-xb),abs(xa-xc))+1<<endl;
    else if ((xa-xb)*(xa-xc)<=0) cout<<min(abs(ya-yb),abs(ya-yc))+1<<endl;
    else if ((xb-xa)*(xb-xc)>=0 && (yb-ya)*(yb-yc)<=0) cout<<abs(yb-ya)+abs(xc-xa)+1<<endl;
    else if ((xb-xa)*(xb-xc)<=0 && (yb-ya)*(yb-yc)>=0) cout<<abs(yc-ya)+abs(xb-xa)+1<<endl;
    else if ((xa-xb)*(xa-xc)>=0 && (ya-yb)*(ya-yc)>=0) cout<<min(abs(xa-xb)+abs(ya-yb),abs(xa-xc)+abs(ya-yc))+1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
