#include <bits/stdc++.h>

using namespace std;
vector<vector<int> >a;
vector<int>pre;
int v,e,u,t;
void DFS(int u){
    for(int i=0;i<a[u].size();i++){
        if(pre[a[u][i]]==0){
            pre[a[u][i]]=u;
            DFS(a[u][i]);
        }
    }
}
int main()
{
    int tc; cin>>tc;
    while(tc--){
        a.clear(), pre.clear();
        cin>>v>>e>>u>>t;
        a.resize(v+1),pre.resize(v+1);
        for(int i=1;i<=v;i++) pre[i]=0;
        for(int i=1;i<=e;i++){
            int b,c; cin>>b>>c;
            a[b].push_back(c);
            a[c].push_back(b);
        }
        pre[u]=u;
        DFS(u);
        if(pre[t]==0) cout<<-1<<endl;
        else{
            vector<int>res;
            res.push_back(t);
            while(pre[t]!=u){
                res.push_back(pre[t]);
                t=pre[t];
            }
            res.push_back(u);
            for(int i=res.size()-1;i>=0;i--)
                cout<<res[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
