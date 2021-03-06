//#include <bits/stdc++.h>
//int n,res;
//int *a;
//using namespace std;
//void solve(){
//    int m=n/2;
//    int i=0;
//    while(i<n/2 && m<n){
//        if(a[m]>=2*a[i]){
//            res--;
//            i++;
//        }
//        m++;
//    }
//}
//int main()
//{
//    int t; cin>>t;
//    while(t--){
//        cin>>n;
//        res=n;
//        a=new int[n];
//        for(int i=0;i<n;i++) cin>>a[i];
//        sort(a,a+n);
//        solve();
//        cout<<res<<endl;
//        delete a;
//    }
//    return 0;
//}
#include <bits/stdc++.h>
int n,dem;
using namespace std;
void in(vector<int> a){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void solve(vector<int> &a,int l, int r){
    int k=a[r];
    while(l<=r){
        int m=(l+r)/2;
        if(2*a[m]>k) r=m-1;
        else l=m+1;
    }
    for(int i=l-1;i>=0;i--){
        int t=lower_bound(a.begin(),a.end(),2*a[i])-a.begin();
        in(a);
        cout<<i<<" "<<t<<endl;
        if(t<n){
            a[i]=a[t]=0;
            dem++;
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        vector<int> a;
        cin>>n;
        a.resize(n);
        dem=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        solve(a,0,n-1);
        //cout<<n-dem<<endl;
    }
    return 0;
}
