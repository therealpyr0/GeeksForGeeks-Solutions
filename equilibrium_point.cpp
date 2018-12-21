/*
Given an array A your task is to tell at which position the equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.
*/


#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,num,i;
	cin>>T;
	for(int t=0;t<T;t++){
	    cin>>N;
	    int sum=0;
	    bool flag=false;
	    int *arr=new int[N];int *left=new int[N];int *right=new int[N];
	    for(int i=0;i<N;i++){cin>>num;arr[i]=num;sum+=num;}
	    int tempsum;
	    tempsum=sum;
        for(int i=0;i<N;i++){right[i]=tempsum-arr[i];tempsum=right[i];}
        tempsum=sum;
        for(int i=N-1;i>=0;i--){left[i]=tempsum-arr[i];tempsum=left[i];}
        for( i=0;i<N;i++){
            if(left[i]==right[i]){flag=true;break;}
        }
        if(flag)cout<<i+1;
        else cout<<"-1";
	    cout<<endl;
	    	    delete []arr;delete []left;delete []right;
	}
	return 0;
}