#include <iostream>

using namespace std;
#define ll long long
#define N 10000
void prime_seive(int *p){
    //all odd numbers are prime
    for(int i=3;i<=N;i+=2){
        p[i]=1;
    }
    //sieve
    for(ll i=3;i<=N;i+=2){
        //if the current number is not marked(its prime)
        if(p[i]==1){
            //mark all multiples of i as not prime
            for(ll j=i*i;j<=N;j=j+i){
                p[j]=0;
            }
        }
    }
    //special case
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{
 int p[N+1]={0};
 prime_seive(p);
 int csum[N+1]={0};
//Preallocating the primes to upto index i in array csum
 for(int i=0;i<N;i++){
    csum[i]=csum[i-1]+p[i];
 }
 int q;cin>>q;
 while(q--){
    int a,b;
    cin>>a>>b;
    cout<<csum[b]-csum[a-1]<<endl;
 }
 return 0;
}
