#include <iostream>
using namespace std;
class Distance {
private:
    int km;
    int m;
public:
    Distance() {
        km = 0;
        m = 0;
    }
   Distance(int kilometer, int meter) {
      km = kilometer;
       m = meter;
   }
   
void setDistance(int kilometer, int meter) {
        km = kilometer;
        m = meter;
        }
  void displayDistance() {
        cout << km << " km and " << m << " m" << endl;
    }
void addDistance(Distance d1, Distance d2) {
        
        m = d1.m + d2.m;
        km = d1.km + d2.km;
        if (m >= 1000) {
            km += m / 1000;
            m = m % 1000;
        }
    }
};
int main() {
     Distance d1(190, 500); 
     Distance d2(750, 200); 
Distance d3;
cout << "Indore to Bhopal: ";
    d1.displayDistance();
    
    cout << "Bhopal to Delhi: ";
    d2.displayDistance();
d3.addDistance(d1, d2);
cout << "-----------------------------------" << endl;
cout << "Total Distance (Indore-Bhopal-Delhi): ";
d3.displayDistance();
cout << "-----------------------------------" << endl;
return 0;
}
