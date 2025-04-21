#include <iostream>
using namespace std;

int main() {
   
    int a[5] = {64,25,12,22,11};
    int n = 5,min;
    int j,i;
   
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
             if(a[j] < a[min]){
                min = j;
             }
        }
        int tmp;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
   
    cout<<"Sorted array :- \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   
    return 0;
}
