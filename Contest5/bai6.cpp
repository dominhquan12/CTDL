#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int f[maxn][maxn];
int main()
{
    int t;cin>>t;
    while(t--){
        int res=0;
        memset(f,0,sizeof(f));
        string s; cin>>s;
        int n=s.length();
        s=' '+s;
        for(int i=1;i<=n;i++) f[i][i]=1,res=1;

        for(int i=1;i<n;i++)
            if(s[i]==s[i+1]) f[i][i+1]=1, res=2;

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n-k;i++){
                int j=i+k;
                if(s[i]==s[j]&&f[i+1][j-1]){
                    f[i][j]=1;
                    res=max(res,j-i+1);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
//
//#include <bits/stdc++.h>
//
//using namespace std;
//int f[1005][1005];
//string s;
//int solve(){
//    memset(f,0,sizeof(f));
//    int res=1, n=s.length();
//    //s=' '+s;
//    for(int i=0;i<n;i++)f[i][i]=1;
//    for(int k=1;k<n;k++){
//        for(int i=0;i<n-k;i++){
//            int j=i+k;
//            if(s[i]==s[j]&&k>1)
//                f[i][j]=f[i+1][j-1];
//            else if(s[i]==s[j]&&k==1)
//                f[i][j]=1;
//            else f[i][j]=0;
//            if(f[i][j])res=max(res,j-i+1);
//        }
//    }
//    return res;
//}
//int main()
//{
//    int t; cin>>t;
//    while(t--){
//        cin>>s;
//        cout<<solve()<<endl;
//    }
//    return 0;
//}
