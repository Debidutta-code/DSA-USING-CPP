// link = 

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int* &arr, int n){
    for(int i=1;i<n;i++){
        int j = i-1;
        int temp = arr[i];
        while(arr[j] > temp && j >=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(arr, n);

    
    return 0;
}