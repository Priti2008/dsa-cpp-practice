#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter "<<n<<"stock prices: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int minPrice=INT_MAX;
    int maxProfit=0;
    for(int price:prices){
        minPrice = min(minPrice,price);
        maxProfit=max(maxProfit,price-minPrice);
    }
    cout<<"Maximum Profit: "<< maxProfit<<endl;
    return 0;
}