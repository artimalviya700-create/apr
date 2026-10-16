// #include<iostream>
// using namespace std ;
// void pointArray(int arr[],int n){
//     int i;
//     cout<<"array:";
//     for(i=0;i<n;i++){
//     cout<<arr[i]<<" " ;
//     }
//     cout<<endl;
//     cin>>i;
//     cout<<"element at this index  : "<<i<<" is "<<arr[i];
// }
// int main(){
//     int arr[]={4,5,7,8,9};
//     pointArray(arr,5);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={4,7,4,8,9};
//     int count =0;
//     for(int i=0;i<5;i++){
//         if(a[i]%2==0)
//         count= count +1;

//     }
//     cout<<"total even element is :"<<count;
// }
///reverse an array
// #include<iostream>
// using namespace std ;
// int main(){
//     int a[5]={3,5,6,7,9};
//     int b[5];
//     int j=0;
//     for(int i=4;i>=0;i--){
//         b[j]=a[i];
//         j=j+1;

//     }
//     for(int i=0;i<5;i++){
//         cout<<b[i]<<" ";
//     }

// }
// int a[5]={2,4,5,6,7};
// int n=sizeof(a)/sizeof(a[0]);
// int l=0;
// int r=n-1;
// while(l<r){
//     // int temp=a[l];
//     // a[l]=a[r];
//     // a[r]=temp;
//     swap(a[l],a[r]);
//     l++;
//     r--;
// }
// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// }
// ///selection sort 
// #include<iostream>
// using namespace std;
// void selection_sort(int a[],int n){
//     cout<<"the array before the sorting ";
// for(int i =0; i<n;i++){
//     cout<<a[i]<<",";
    
// }
// for(int i=0;i<n-1;i++){
//     int min=a[i];
//     int idx=i;
//     for(int j=i+1;j<n;j++){
// if(a[j]<min){
//     min=a[j];
//     // idx=j;
// // }
// //     }
// // int temp=a[i];
//     // a[i]=a[idx];
//     // a[idx]=temp;
//     swap(a[i],a[j]);
//     }
//     }
// }
// cout<<"sorted aRRay"<<" : ";
// for(int i=0;i<n;i++){
//     cout<<a[i]<<",";

// }
// }
// int main(){
//     int a[]={4,5,2,8,9,6,7};
//     int n =sizeof(a)/sizeof(a[0]);
//     selection_sort(a,n);
//     return 0;
// }
//++BUBBLE SORT 
// #include<iostream>
// using namespace std ;
// void bubble_sort(int a[],int n){
// cout<<"before bubble sort array";
// for(int i=0;i<n;i++){
//     cout<<a[i]<<",";

// }
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(a[j]>a[j+1]){
//             swap(a[j],a[j+1]);
//         }
    
//     }
// }

// cout <<"after bubble sort "<<" ";
// for(int i=0;i<n;i++){
//     cout<<a[i]<<",";

// }
// }
// int main(){
//     int a[]={2,5,6,9,4,-1,7};
//     int n=sizeof(a)/sizeof(a[0]);
//     bubble_sort(a,n);
//     return 0;
// }
/////INSERT SORT //
