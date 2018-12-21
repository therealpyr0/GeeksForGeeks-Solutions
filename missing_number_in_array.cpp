/* 
Given an array of size n-1 and given that there are numbers from 1 to n with one missing, the missing number is to be found.
*/

#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,num,i;
	cin>>T;
	for(int t=0;t<T;t++){
	    cin>>N;
	    int val=0;
	    for(int n=1;n<=N-1;n++){
	        cin>>num;
	        val^=n^num;
	    }
	    cout<<(val^(N))<<endl;
	}
	return 0;
}