#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<ll>q;
        for(int i=0;i<n;i++){
            ll temp; cin>>temp;
            q.push(-temp);
        }
        ll res=0;
        while(q.size()>1){
            ll a= q.top(); q.pop();
            ll b=q.top(); q.pop();
            q.push(a+b);
            res+=(-(a+b));
        }
        cout<<res<<endl;
    }
    return 0;
}
