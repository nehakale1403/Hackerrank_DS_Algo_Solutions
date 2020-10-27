#include <iostream>

using namespace std;

long arrayManipulation(int n,int m, int queries[][3]) {

    long arr[n+1];
    long start, end, num;

    for(int i=0; i<=n+1; i++){
        arr[i]=0;
    }

    for(int i=0; i<m; i++){
        start = queries[i][0];
        end = queries[i][1];
        num = queries[i][2];

        for(int j=start; j<=end; j++){
            arr[j]+=num;
        }
    }

    long max=0;
    for(int i=0; i<=n+1; i++){
        if(arr[i]>max)
            max=arr[i];
    }

    return max;

}

int main()
{

    int n, m;
    cin>>n>>m;

    int queries[m][3];

    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }
    }

    long result = arrayManipulation(n,m, queries);

    cout<<result;

    return 0;
}

//getting segmentation error for some of the test cases!

//array manipulation only in the main function

#include<iostream>
using namespace std;

long main(){
    
    long size, m, a,b,k;
    cin>>size>>m;
    long n[size+1] = {0};
    
    for(long i=0; i<m; i++){
        cin>>a>>b>>k;
        for(long j=a; j<=b; j++){
            n[j]+=k;
        }
    }
    long max = n[0];
    for(long i=1; i<size+1; i++){
        if(n[i]> max){
            max = n[i];
        }
    }
    cout<<max;
    
}