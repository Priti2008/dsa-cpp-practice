#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial"<<fact<<endl;
}

int main(){
    factorial(4);
    return 0;

}