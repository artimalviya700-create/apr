#include<iostream>
using namespace std;
int fibbonacci(int n){
    if(n<=1){
        return n;

    }else{
        return fibbonacci(n-1)+fibbonacci(n-2);

    }

}int main(){
    int n;
    cout<<"enter no. of terms:";
    cin>>n;
    cout<<"finbbonacci series"<<","<<endl;
    for(int i=0 ;i<=n;++i){
        cout<<fibbonacci(i)<<endl;


    }
    cout<<endl;
    return 0;

}