#include<iostream> 
#include<string>
using namespace std;
class Student {
     static int  count;

     int  admno;      
    char sname[20];
    float eng, maths, science;
    float total;
     public :
     float ctotal(){
     return eng +maths +science;

     }
      void Takedata(){
     admno=++count ;

//cout<< "admission no.";
//cin>>admno;
cout<<"enter student name: "; 
cin>>sname;
///cin.ignore();
//cin.getline(sname,20);
cout<<"enter marks for english ,maths and science ";
cin>>eng>> maths>> science;


total=ctotal();



     }
     void Showdata(){
        cout<<"\n admn no."<<admno<<"\n name: "<< sname<< "\ntotal marks:"<<total <<endl;
     }
};
int Student::count=1000;


int main(){
     Student obj;
     obj.Takedata();
     obj.Showdata();
     return 0;
}