#include<iostream>
using namespace std;

int solve (int arr[], int n){
  
      // traverse the loop
	  for(int i = 1; i<=n; i++){
		  if(arr[i] == 1){
			 cout<<i+1;
			break;
		  }
	  }
}

int main(){
    int arr[10] = {0,0,0,0,0,1,1,1,1,1};
    int n =10;
    int ans = solve(arr,n);
    return 0;
}