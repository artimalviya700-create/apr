#include<iostream>
using namespace std;
int main(){
    int arr[5]={19,10,12,5,7};
    int max=arr[0];
   
 for(int i=0;i<=6;i++){
       if(max<arr[i]){
        max= arr[i];
       } 
       
    }
    cout<<"the maximum value is :"<<max<<endl;
    
    return 0;
}
