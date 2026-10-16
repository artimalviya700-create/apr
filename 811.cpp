// #include<iostream>
// using namespace std;
// class Date {
//     private:
//     int dd ,mm, yy;
//     public:
//     Date (int d=1,int m=1,int y=2000){
//         dd=d;
//         mm=m;
//         yy=y;
//     }
//     Date& operator++(){
//         dd++;
//         if(dd>30){
//             dd =1;
//         mm++;
//         }
//         if(mm>12){
//             mm=1;
//         yy++;
//         }
//         return *this;

//     }
//     friend istream operator>>(istream& in ,Date& d);
//     friend ostream operator<<(ostream& os , const Date& d);

// };
// istream operator>>(istream& in, Date& d){
//      in<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
//     return os;

// }
// ostream operator<<(ostream& os, Date& d){
//     os <<d.dd<<"/"<<d.mm<<"/"<<d.yy;
//     return is;
    
// }
// int main(){
//     Date d1;
//     cin>>d1;
//     cout<<"original Date"<<d1<<endl;
//     ++d1;
//     cout<<"After increment(++):"<<d1<<endl;
//     return 0;
    
// }
//11////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Time {
// private:
//     int hours;
//     int minutes;

// public:
//     Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

//     friend istream& operator >> (istream& input, Time& t);
//     friend ostream& operator << (ostream& output, const Time& t);
    
    
//     Time operator + (const Time& t) { 
//         Time temp;
//         temp.minutes = minutes + t.minutes;
//         temp.hours = hours + t.hours + (temp.minutes / 60);
//         temp.minutes %= 60;
//         return temp;
//     }
// };



// istream& operator >> (istream& input, Time& t) {
//     cout << "Enter Hours: ";
//     input >> t.hours;
//     cout << "Enter Minutes: ";
//     input >> t.minutes;
//     return input;
// }

// ostream& operator << (ostream& output, const Time& t) {
//     output << t.hours << "h " << t.minutes << "m";
//     return output;
// }

// int main() {
//     Time t1;
//     cout << "Enter time details:\n";
//     cin >> t1;  
//     cout << "You entered: " << t1 << endl; 
//     return 0;
// }

// /////////////////////////////////
