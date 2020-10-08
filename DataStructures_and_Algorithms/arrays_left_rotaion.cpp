#include<iostream>

using namespace std;

int main(){

    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++){

        int leftRotate=(i+n-d)%n;
        cin>>arr[leftRotate];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}