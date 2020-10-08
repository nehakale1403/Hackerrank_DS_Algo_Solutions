#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

int main(){

    int n, q;
    cin>>n>>q;
    vector<int> seqList[n];
    int lastAnswer=0;

    for(int i=0; i<q; i++){

        int query, x, y;
        cin>>query>>x>>y;
        int pos=(x^lastAnswer)%n;

        if(query==1){
            seqList[pos].push_back(y);
        }
        else if(query==2){
            int index = y%((int)seqList[pos].size());
            lastAnswer= seqList[pos][index];
            cout<<lastAnswer<<endl;
        }
    }

}