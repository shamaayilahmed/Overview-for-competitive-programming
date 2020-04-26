#include <iostream>
#include<algorithm>
using namespace std;
/*   1  2  3   4       4  8  12  16
     5  6  7   8   ->  3  7  11  15
     9  10 11  12      2  6  10  14
     13 14 15  16      1  5  9   13

     LOGIC:
     reverse each row and take transpose of the resultant.
     */
void display(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}


void rotate(int a[][100],int n){
    //reverse column
    for(int row=0;row<n;row++){
        int start_col=0,last_col=n-1;
        while(start_col<last_col){
            swap(a[row][start_col],a[row][last_col]);
            start_col++;
            last_col--;
        }
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
}
void rotate_stl(int a[][100],int n){
    //STL reverse
    for(int i=0;i<n;i++){
        reverse(a[i],a[i]+n);
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }

}



int main()
{
    int a[100][100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    rotate_stl(a,n);
    //rotate(a,n);
    display(a,n);

    return 0;
}
