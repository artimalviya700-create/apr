#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n";
cin>>n;

//for(int i =0;i<n;i++){
  //  char ch ='A';

    //for(int j=0;j<n; j++){
     //   cout<<ch<< " ";
      ////  ch =ch +1;
//}} char pattern 
// floyd's triangle
int num =1;
//for(int i=0;i<n;i++){
//    for(int j=0;j<n;j++){
//        cout<<num<<" ";
      //  num++;
///
 ///   } cout<< endl ;

//} 6riangle pattern 
//for(int i= 0;i<n;i++){
  //  for (int j=0; j<i+1; j++){
   //     cout <<i+1 ;   }
   // cout<<endl;
   //floyds triangle
  // char ch ='A';
//for(int i=0; i<n;i++){
  //char ch ='A';

  //for(int j=i+1;j>0;j-- ){
 //   cout<<ch<<" ";
  // ch++;
// }

//} inerted triangle pattern 
for(int i=0;i<n;i++){
 for(int j=0; j<i;j++){
    cout<<" ";
  }
  for(int j=0; j<n-i;j++){
    cout<<(i+1)<<" ";
  }
 cout<<endl;
}

 return 0;
}
