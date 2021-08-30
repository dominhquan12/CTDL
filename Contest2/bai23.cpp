#include <bits/stdc++.h>

using namespace std;
int a[100][100];
bool vs[100][100];
int n, t;
vector <string> vt;
string res="";
void Try(int i,int j){
    if(a[1][1]==0 || a[n][n]==0) return;
    if(i==n && j == n){
        vt.push_back(res);
    }
    if(a[i+1][j]==1 && i!=n && !vs[i+1][j]){
        res+='D';
        vs[i][j]=true;
        Try(i+1,j);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i][j-1]==1 && j != 1 && !vs[i][j-1]){
        res+='L';
        vs[i][j]=true;
        Try(i,j-1);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i][j+1]==1 && j != n && !vs[i][j+1]){
        res+='R';
        vs[i][j]=true;
        Try(i,j+1);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i-1][j]==1 && i != 1 && !vs[i-1][j]){
        res+='U';
        vs[i][j]=true;
        Try(i-1,j);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
}

void Solve(){
    res="";
    vt.clear();
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            a[i][j]=0;
            vs[i][j]=false;
        }
    }
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1);
    if(vt.empty()) cout << "-1"<<endl;
    else{
        for(int i=0;i<vt.size();i++){
            cout << vt[i]<<" ";
        }
        cout << endl;
    }
}

int main(){
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
//
//#include <bits/stdc++.h>
//#define maxn 100
//using namespace std;
//int n,a[maxn][maxn],vs[maxn][maxn];
//int dx[4]={0,-1,1,0};
//int dy[4]={1,0,0,-1};
//char c[4]={'D','L','R','U'};
//int kt;
//string res;
//void init(){
//    res="";
//    kt=0;
//    for(int i=0;i<100;i++)
//        for(int j=0;j<100;j++){
//            a[i][j]=0;
//            vs[i][j]=0;
//        }
//}
//void solve(int i, int j, int t){
//    for(int k=0;k<4;k++){
//        int col=i+dx[k];
//        int row=j+dy[k];
//        if(a[row][col]==1&&vs[row][col]==0){
//            res[t++]=c[k];
//            if(row==n && col==n){
//                kt=1;
//                for(int i=0;i<t;i++) cout<<res[i];
//                cout<<" ";
//                continue;
//            }
//            vs[row][col]=1;
//            solve(col,row,t);
//            vs[row][col]=0;
//            --t;
//        }
//    }
//}
//int main()
//{
//    freopen("input.txt","r",stdin);
//    int t;cin>>t;
//    while(t--){
//        init();
//        cin>>n;
//        for(int i=1;i<=n;i++)
//            for(int j=1;j<=n;j++) cin>>a[i][j];
//        if(a[1][1]!=0&&a[n][n]!=0){
//            vs[1][1]=1;
//            solve(1,1,0);
//        }
//        if(!kt) cout<<-1;
//        cout<<endl;
//    }
//    return 0;
//}
