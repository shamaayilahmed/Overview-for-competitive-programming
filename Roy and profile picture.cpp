#include <iostream>

using namespace std;

int main()
{
    int l;cin>>l;
    int n;cin>>n;
    while(n--){
        int h,w;cin>>w>>h;
        if(h<l || w<l){
            cout<<"UPLOAD ANOTHER";
        }
        else if(h==w){
            cout<<"ACCEPTED";
        }
        else{
            cout<<"CROP IT";
        }
    }
}
