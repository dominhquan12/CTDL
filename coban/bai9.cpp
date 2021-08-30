#include <bits/stdc++.h>
#define maxn 500
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        char a[maxn];
        scanf("%s",a);
        int len=strlen(a);
        char b[maxn];
        strcpy(b,a);
        if(next_permutation(a,a+len)&&prev_permutation(b,b+len)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
//#include <bits/stdc++.h>
//
//using namespace std;
//bool tang(char a[],int n){
//    for(int i=0;i<n-1;i++)
//        if(a[i+1]<a[i]) return false;
//    return true;
//}
//bool giam(char a[],int n){
//    for(int i=0;i<n-1;i++)
//        if(a[i+1]>a[i]) return false;
//    return true;
//}
//int main()
//{
//    int t;cin>>t;
//    while(t--){
//        char a[500]; cin>>a;
//        int n=strlen(a);
//        if(tang(a,n)||giam(a,n)) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//    }
//    return 0;
//}
