#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    //Counting sort 
    int k = *max_element(arr.begin(),arr.end());
    vector<int>count(k+1,0);
    for(int i=0;i<n;i++) count[arr[i]]++;
    // prefix sum
    for(int i = 1;i<=k;i++) count[i] += count[i-1];
    vector<int>output(n);
    for(int i = n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++) cout<<output[i]<<" ";
}

