#include<iostream>
using namespace std ;
//tWO POINTERS APPROACH 
void reverse( int arr[],int sz){
    int start=0,end= sz-1;
    while(start<=end ){
        swap (arr[start], arr[end]);
        start++;
        end--;
    }
}int main(){
    int sz=7;
    int arr[]={4,2,7,6,9,5,6};
     reverse(arr,sz);
     for(int i=0;i<sz;i++){
        cout<<arr[i];
     }
    return 0;
}