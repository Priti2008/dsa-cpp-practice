#include<iostream>
using namespace std;
void dfs(int image[10][10],int n,int m,int r,int c,int oldColor,int newColor){
    if(r<0 || c<0 || r>=n || c>= m)
     return;
    if(image[r][c] != oldColor)
     return;
    image[r][c]=newColor;
    dfs(image, n, m, r+1,c,oldColor,newColor);
    dfs(image,n,m,r-1,c,oldColor,newColor);
    dfs(image,n,m,r,c+1,oldColor,newColor);
    dfs(image,n,m,r,c-1,oldColor,newColor);
}
int main(){
    int n,m;
    cin>>n>>m;
    int image[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> image[i][j];
        }
    }
    int sr,sc,newColor;
    cin>>sr>>sc>>newColor;
    int oldColor = image[sr][sc];
    if(oldColor!=newColor){
        dfs(image,n,m,sr,sc,oldColor,newColor);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<image[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}