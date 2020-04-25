#include <iostream>

using namespace std;

int gcd(int a,int b){
    return b==0 ? a:gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}


int main()       //greatest common divisor GCD(a,b)=GCD(b,a%b)   when b=0  solution is value of a%b
{
    int n1,n2;
    cin>>n1>>n2;
                            //GCD*LCM=a*b
    cout<<gcd(n1,n2)<<endl;
    cout<<lcm(n1,n2)<<endl;
}
