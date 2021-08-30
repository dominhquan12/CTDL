//#include <bits/stdc++.h>
//
//using namespace std;
//
//string res;
//
//void chuanHoa(char a[]){
//    int n=strlen(a);
//    for(int i=0;i<n;i++){
//        if(a[i]==' '){
//            int dem=0;
//            int j=i+1;
//            while(a[j]==' '&&j<n){
//                ++dem; ++j;
//            }
//            a[j]-=32;
//            i+=dem;
//        }
//        if(a[i]!=' '&&i==0) a[i]-=32;
//        if(i>=n-1&&a[i]==' ') break;
//        res+=a[i];
//    }
//}
//int main()
//{
//    int t; cin>>t;
//    fflush(stdin);
//    while(t--){
//        res="";
//        char a[100];
//        cin.getline(a,sizeof(a));
//        strlwr(a);
//        chuanHoa(a);
//        if(a[0]==' ')res.erase(0,1);
//        cout<<res<<endl;
//    }
//    return 0;
//}
#include <bits/stdc++.h>

using namespace std;
void chuanHoa(char a[]){
    char res[100]="";
    char *p=strtok(a," ");
    while(p!=NULL){
        p[0]-=32;
        strcat(res,p);
        strcat(res," ");
        p=strtok(NULL," ");
    }
    cout<<res<<endl;
}
int main()
{
    int t;cin>>t;
    fflush(stdin);
    while(t--){
        char a[100];
        gets(a);
        strlwr(a);
        chuanHoa(a);
    }
    return 0;
}
