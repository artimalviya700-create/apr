#include <iostream>
#include <string> // Required for using strings
 using namespace std;
 class student {
    private:
    string name ;
    string  enrollement ;
    int roll;
    int theory [5],practical [5];
     char grade[5];
     static int count;
     public:
     student (){
        roll=++count ;

     } student (string n,string e){
        name= n;
        enrollement=e;
        roll =++count ;
     }
     void calculateGrade(){
        for(int i=0;i<5;i++){
            int total =theory [i]+practical [i];
            if (total>=90){
                grade;
            }
        }
     }

 };
int main() {
string name;
    int age;

    

    return 0;
}