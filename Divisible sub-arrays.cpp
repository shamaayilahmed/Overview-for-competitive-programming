#include <iostream>
#include<cstring>
using namespace std;
#define ll long
/*Given an array of size N find all sub arrays whose elements are divisible by N
TEST CASE:
5
1 3 2 6 4

(3,2)(6,4)(3,2,6,4)
*/
ll a[1000],pre[1000];
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        memset(pre,0,sizeof(pre));
        pre[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
            sum%=n;
            sum=(sum+n)%n;
            pre[sum]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            ll n=pre[i];
            ans+=(n)*(n-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
