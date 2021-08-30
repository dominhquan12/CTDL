#include <bits/stdc++.h>
#define maxn 15
using namespace std;
int n,k,a[maxn],b[maxn],kt;
void ktra(){
    int t=0;
    for(int i=1;i<=n;i++) t+=a[i]*b[i];
    if(t==k){
        kt=1;
        int c[maxn],dem=1;
        for(int i=1;i<=n;i++)
            if(b[i]) c[dem++]=a[i];
        cout<<"[";
        for(int i=1;i<dem-1;i++) cout<<c[i]<<" ";
        cout<<c[dem-1]<<"] ";
    }
}
void solve(int i ){
    for(int j=1;j>=0;j--){
        b[i]=j;
        if(i==n) ktra();
        else solve(i+1);
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        kt=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        solve(1);
        if(!kt) cout<<-1;
        cout<<endl;
    }
    return 0;
}

//
//#include <bits/stdc++.h>
//#define maxn 20
//using namespace std;
//int n,k,a[maxn],b[maxn],stop;
//bool c;
//bool ktra(int m){
//    int temp=0;
//    for(int i=1;i<=m;i++) temp+=a[b[i]];
//    if(temp==k){
//        c=true;
//        cout<<"[";
//        for(int i=1;i<=m;i++){
//            cout<<a[b[i]];
//            if(i!=m) cout<<" ";
//        }
//        cout<<"] ";
//    }
//}
//void thkt(int m){
//    int i=m;
//    while(b[i]==n-m+i) --i;
//    if(i>0){
//        b[i]+=1;
//        for(int j=i+1;j<=m;j++) b[j]=b[j-1]+1;
//    }
//    else stop=1;
//}
//void resetb(){for(int i=1;i<=n;i++) b[i]=i;}
//int main()
//{
//    int t;cin>>t;
//    while(t--){
//        memset(a,0,sizeof(a));
//        c=false;
//        cin>>n>>k;
//        for(int i=1;i<=n;i++)
//            cin>>a[i];
//        sort(a+1,a+n+1);
//        resetb();
//        for(int i=n;i>=1;i--){
//            stop=0;
//            resetb();
//            while(!stop){
//                ktra(i);
//                thkt(i);
//            }
//        }
//        if(!c) cout<<-1;
//        cout<<endl;
//    }
//    return 0;
//}


//
//#include <bits/stdc++.h>
//#define maxn 15
//using namespace std;
//int n,k,a[maxn],b[maxn];
//vector< vector<int> >res;
//void ktra(){
//    int sum=0;
//    for(int i=0;i<n;i++)
//        sum+=a[i]*b[i];
//    if(sum==k){
//        vector<int> v;
//        for(int i=0;i<n;i++)
//            if(a[i]*b[i]!=0) v.push_back(a[i]);
//        if(v.size())res.push_back(v);
//    }
//}
//void solve(int i){
//    for(int j=1;j>=0;j--){
//        b[i]=j;
//        if(i==n-1) ktra();
//        else solve(i+1);
//    }
//}
//int main()
//{
//    int t;cin>>t;
//    while(t--){
//        res.clear();
//        cin>>n>>k;
//        for(int i=0;i<n;i++) cin>>a[i];
//        sort(a,a+n);
//        solve(0);
//        if(res.size()){
//            for(int i=0;i<res.size();i++){
//                cout<<"[";
//                for(int j=0;j<res[i].size();j++){
//                    cout<<res[i][j];
//                    if(j!=res[i].size()-1) cout<<" ";
//                }
//                cout<<"] ";
//            }
//        }
//        else cout<<-1;
//        cout<<endl;
//    }
//    return 0;
//}
