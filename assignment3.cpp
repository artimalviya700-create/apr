//oops

#include<iostream>
#include<string>
using namespace std;

class Flight  {
    private:
    int flightNumber;
    string destination ;
    float distance;
    float fuel;

    void CALFUEL(){
        if(distance<=1000){
            fuel=500;

        }else if (distance>1000 && distance<=2000){
            fuel=1100;

        }else{
            fuel=2200;

        }

    }

public:
Flight(int fNo,string dest,float dist){
    flightNumber= fNo;
    destination =dest;
    distance= dist;
    CALFUEL();
}
void SHOWINFO(){
    cout<<"\n  flight information"<<endl;
    cout<<"flight Number:"<<flightNumber<<endl;
    cout<<"destination:"<<destination<<endl;
    cout<<"Distance: "<<distance  <<"km"<<endl;
    cout<<"fuel required "<<fuel <<"liters"<<endl;
}
};
int main(){
    Flight myFlight(101,"Indore",1500.5);
    myFlight.SHOWINFO();
    return 0;
}