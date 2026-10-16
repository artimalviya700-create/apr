
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    double salary ;

    public:
    Teacher(){
        dept="CS";
    }
string name ;
string dept;
string subject;

void changeDept(string newDept){
    dept= newDept;
}
// setter  for getting private menm[ber of class
void setSalary(double s){
    salary =s;

}
double  getSalary(){
    return  salary; 
}  


};int main(){
    Teacher t1;// constructor caller
    Teacher t2;
    t1.name ="shraddha";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary();
    cout<<t1.dept<<endl;
    return 0;
    
}
    


