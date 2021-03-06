#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int infor;
    node *left;
    node *right;
} *Tree;
Tree makeNode(int x){
    Tree p=new node;
    p->infor=x;
    p->left=p->right=NULL;
}
Tree create(int n){
    Tree root=NULL;
    map<int,Tree>m;
    while(n--){
        int a,b; char c;
        cin>>a>>b>>c;
        Tree cha=new node;
        if(m.find(a)==m.end()){
            cha=makeNode(a);
            m[a]=cha;
            if(root==NULL) root = cha;
        }
        else cha=m[a];
        Tree con=makeNode(b);
        if(c=='L') cha->left=con;
        else if(c=='R') cha->right=con;
        m[b]=con;
    }
    return root;
}
int sum(Tree root){
    if(root==NULL) return 0;
    return sum(root->left)+root->infor+sum(root->right);
}
bool isSumTree(Tree root){
    if(root==NULL||(root->left==NULL&&root->right==NULL))
        return true;
    int ls=sum(root->left);
    int rs=sum(root->right);
    return ((root->infor==ls+rs)&&isSumTree(root->left)&&isSumTree(root->right));
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Tree root=create(n);
        if(isSumTree(root)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
