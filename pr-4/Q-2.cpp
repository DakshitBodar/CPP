#include <iostream>
using namespace std;

int main() {
    int row,col,i,j,max,a[row][col];
    
  
    cout<<"Enter the number of row: ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;
    
   

    
    cout<<"Enter array elements "<<endl;
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            cin>>a[i][j];
        }
    }

    
    max = a[0][0];
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            if (a[i][j]>max) {
                max = a[i][j];
            }
        }
    }

    
    cout<<"The largest element is: "<<max<<endl;

    
}

