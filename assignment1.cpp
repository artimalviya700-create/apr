#include<iostream>
#include<limits>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int arr[]={12,45,23,56,78,10,34,89,67,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    //calculate minimum and maximum value
    int min_val=*min_element(arr,arr+n);
    int max_val=* max_element(arr,arr+n);
//calculate sum and average
double sum_val =accumulate(arr,arr+n,0.0);
double avg_val= sum_val/n;
// serach implementation
int search_val=56;
bool found =false; 
for(int i=0; i<n;i++){
    if(arr[i]==search_val){
        found=true;
        break;

    }
}
// display all result
cout<<"minimum:"<<min_val<<endl;
cout<<"maximum:"<<max_val<<endl;
cout<<"sum:   "<<sum_val<<endl;
cout<<"average:"<<avg_val<<endl;
if(found){
 
  cout<<search_val<<"found in array."<<endl;
}else{

    cout<<search_val<<"not found in array."<<endl;

}
 return 0;
}