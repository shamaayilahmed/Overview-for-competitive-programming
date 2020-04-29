#include <iostream>

using namespace std;
int find0(int n){
    int ans=0,p=5;
    while((n/p)>0){
        ans += (n/p);
        p *= 5;
    }
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<find0(n)<<endl;
}
