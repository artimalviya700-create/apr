#include<iostream>
using namespace std ;
int main(){
    int num ,originalNum,remainder=0, sum=0;
cout<<"enter three digit no";
cin>>num;
originalNum =num;

 while(num!=0){
        remainder=num%10;
        sum+= (remainder *remainder*remainder);
        num/=10;
}if(originalNum==sum){
        cout<< " is Armstrong";
     } else{
            cout<<"not a Armstrong";
        }

    
    return 0;
}