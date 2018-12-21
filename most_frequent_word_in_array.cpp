/*
Given an array containing N words, you need to find the most frequent word in the array. If multiple words have same frequency then print the word that comes first in lexicographical order.
*/

#include<map>
#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,num,i;
	cin>>T;
	map<string,int>m;
	for(int t=0;t<T;t++){
	    m.clear();
	    string s,ans;
	    int N;
	    cin>>N;
	    int max=0;
	    for(i=0;i<N;i++){
	        cin>>s;
	    if(m.find(s)==m.end()){
	        m[s]=1;
	    }
	    else{
	        m[s]+=1;
	    }
	    if(m[s]>max){
	        max=m[s];ans=s;
	    }
	    if(m[s]==max){
	        if(s.compare(ans)<0){ans=s;}
	    }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}