#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    k = k%n;
    int j = 0;

    for(int i = 0; i<n-k; i++){
        arr[j++] = arr[i];
    }
    
    for(int i = 0; i<=k; i++){
        arr[j++] = arr[i];
    }

    for(int i = 0; i<n; i++){

        cout<<arr[j]<<" ";
    }

    cout<<endl;

return 0 ;
}