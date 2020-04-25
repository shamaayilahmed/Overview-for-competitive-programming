/*  *  ****  1
    *  *    |2
    *  *    |
    *******  3
       *  * |4
       *  * |
    ****  *  5
 N=7 */


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
//1
    cout<<"*";
    for(int i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    for(int i=1;i<=(n+1)/2;i++){
        cout<<"*";
    }
    cout<<endl;
//2
    for(int rows=1;rows<=(n-3)/2;rows++){
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
//3
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
//4
    for(int rows=1;rows<=(n-3)/2;rows++){
        for(int i=1;i<=(n-3)/2+1;i++){
            cout<<" ";
        }
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;;
    }
//5
   for(int i=1;i<=(n+1)/2;i++){
    cout<<"*";
   }
   for(int i=1;i<=(n-3)/2;i++){
    cout<<" ";
   }
   cout<<"*"<<endl;
}


