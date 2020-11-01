// to find the sum of all the prime factors of a given number
#include <iostream>
using namespace std;

bool isPrime(int n){

	if(n <= 1)
		return false;
	if(n == 2)
		return true;

	for(int i = 3; i < n; i++){

		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){

	int n;
	cin>>n;
	int sum = 0;

	for(int i=2; i<=n ; i++){
	    
	    if(n%i==0){
	        
    	   if(isPrime(i)){
    	
    			sum += i;
    		}
	    }
	}
	cout<<sum;
}