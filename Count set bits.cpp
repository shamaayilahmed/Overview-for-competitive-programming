#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_bits(int n){
    int ans=0;
    while(n>0){
        ans += (n&1);
        n=n>>1;
    }
    return ans;
}
int count_bitsfast(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main()
{
    int n;cin>>n;
    cout<<count_bits(n)<<endl;
    cout<<count_bitsfast(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;
}
