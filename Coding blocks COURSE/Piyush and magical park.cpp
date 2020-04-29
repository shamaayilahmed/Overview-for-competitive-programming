#include <iostream>
using namespace std;
/*The park is of a grid of (m,n),
 s is the initial strength of piyush,
 k is the threshold(required) strength(in any of the steps s<k piyush fails to exit the park)
 obstacles in park ('.' s-2(strength decreased by 2),'*'(s+2),'#' blocked move to next row,each step decrease strength by 1)
    FOR EACH CASE PREDICT IF PIYUSH IS ABLE TO EXIT PARK AND HIS STRENGTH
                        SAMPLE CASE
                         4 4 5 20   (m,n,k,s)
                         . . * .
                         . # . .
                         * * . .
                         . # * *

                         OUTPUT
                         YES
                         13                               */
void magical_park(char a[][100],int m,int n,int k,int s){
    bool success=true;    //piyush can get out of park
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch=a[i][j];
            //check the conditions
            if(s<k){
                success=false;
                break;
            }
            if(ch=='*'){
                s += 5;
            }
            else if(ch=='.'){
                s -= 2;
            }
            else{
                break;
            }
            //He also loose 1 point for each step except last column(to next row).
            if(j!=n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int m,n,k,s;
    char a[100][100];
    cin>>m>>n>>k>>s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         cin>>a[i][j];
        }
    }
    magical_park(a,m,n,k,s);
    return 0;
}
