#include <iostream>
using namespace std;

int main() {
    int no,a[50],i,j;

    
    cout<<"Enter the number of elements in the array: ";
    cin>>no;

    cout<<"Enter"<<no<<"elements: ";
    for (i=0;i<no;i++){
        cin>>a[i];
    }

    
    cout<<"Negative elements in the array: ";
    for (j=0;j<no;j++) {
        if (a[i]<0) {
            cout<<a[i]<<" ";
        }
    }

}

