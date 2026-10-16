#include<iostream>
using namespace std ;
int decToBinary(int decNum ){
    int ans =0,pow=1;
    while(decNum>0){
        int rem =decNum%2;
        decNum/=2;
        ans+=(rem *pow);
        pow*=10;

    } return ans ;

} int main(){
    int decNum=50;
    int n;
    for(int i=1;i<=10;i++){
    cout<<" 1 to 10 binary conversion   "<<i <<" "  <<decToBinary(i)<< endl;
    }
    cout<<  "ans "<<decToBinary(decNum)<< endl;
    return 0;
}