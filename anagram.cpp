/*
Given two strings, check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other. 
*/


#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,num,i;
	cin>>T;
	for(int t=0;t<T;t++){
	    string s1,s2;
	    cin>>s1;cin>>s2;
	    int val=0;
	    for(int i=0;i<s1.length();i++)val^=s1[i];
	    for(int i=0;i<s2.length();i++)val^=s2[i];
	    if(val==0)cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}