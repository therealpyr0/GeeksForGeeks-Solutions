/*
Given a sorted array A[]  ( 0 based index ) and a key "k"  you need to complete the function bin_search to  determine the position of the key if the key is present in the array. If the key is not  present then you have to return -1. The arguments left and right denotes the left most index  and right most index of the array A[] .
There are multiple test cases. For each test case, this function will be called individually.
*/


int bin_search(int A[], int left, int right, int k)
{
    int mid=(left+right)/2;
    if(left>right)return -1;
    if(A[mid]==k)return mid;
    if(A[mid]<k)bin_search(A,mid+1,right,k);
    else bin_search(A,left,mid-1,k);
}