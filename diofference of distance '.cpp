#include<iostream>
using namespace std;

class Distance {
public:
    int km, m;
    void setDistance(int k, int mt) {
        km = k;
        m = mt;
    }
     Distance getDifference(Distance d2) {
        Distance d3;
        int t1 = (km * 1000) + m;
        int t2 = (d2.km * 1000) + d2.m;
        int diff = (t1 > t2) ? (t1 - t2) : (t2 - t1);

        d3.km = diff / 1000;
        d3.m = diff % 1000;
        return d3;
    }
     void display() {
        cout << km << "kilometer, " << m << " meter" << endl;
    }
};
int main() {
    Distance d1, d2, d3;
d1.setDistance(194, 0);  
    d2.setDistance(774, 0);  
 d3 = d1.getDifference(d2);
cout << "indore - bhopal "; d1.display();
    cout << "bhopal-delhi "; d2.display();
    cout << "difference of distance "; d3.display();

    return 0;
}
