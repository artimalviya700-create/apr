#include <iostream>
 using namespace std;

// class Complex {
// private:
//     int real;
//     int imaginary;

// public:
//     Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

//     Complex operator+(const Complex& other) const {
        
//         Complex result;
       
//         result.real = this->real + other.real;
       
//         result.imaginary = this->imaginary + other.imaginary;
        
//         return result;
//     }

   
//     void print() const {
//         cout << real << " + i" << imaginary;
//     }
// };

// int main() {
//     Complex c1(3, 5);
//     Complex c2(2, 4); // Create a complex number 2 + i4

//     // Use the overloaded + operator
//     Complex c3 = c1 + c2; // This is internally translated to c1.operator+(c2)

//     cout << "Sum of c1 and c2 is: ";
//     c3.print(); // Output: Sum of c1 and c2 is: 5 + i9

//     return 
// class Marks{
//     int intmarks;
//     int extmarks;
//     public:
//     Marks(){
//         int intmarks=0;
//         int extmarks=0;
//     } 
//     Marks(int im, int em){
//         intmarks=im;
//         extmarks=em;

// }
// void display(){
//     cout<<intmarks<<endl<<extmarks<<endl;
// }
// Marks operator+(Marks m){
//     Marks temp;
//     temp.intmarks =intmarks +m.intmarks;
//     temp.extmarks =extmarks +m.extmarks;
//     return temp;
// }
// Marks operator-(Marks m );
// };
//  Marks   Marks ::operator-(Marks m){
//     Marks temp;
//     temp.intmarks =intmarks -m.intmarks;
//     temp.extmarks =extmarks  -m.extmarks;
//     return temp;
// }
// int main(){
//     Marks m1(10,45),m2(20,40);
//     Marks m3=m1+m2;
//     Marks m4=m1-m2;
//     m3.display();
//      m4.display();
//     return 0;
// }
// class Marks{
//     int marks;
//     public:
//     Marks(){
//         marks =0;
//     }Marks(int m){
//         marks =m;

//     } void yourMarkPlease(){
//         cout<<"your marks is "<<marks <<endl ;

//     }void operator +=(int bonusmark){
//         marks= marks +bonusmark;
//     }
//     friend void operator -=(Marks &curObj,int redmark);


// }; 
// void operator -=(Marks &curObj,int redmark){
//     curObj.marks-=redmark;
// }

// int main(){
//     Marks anilmark(45);
//      anilmark.yourMarkPlease();
     
//      anilmark+= 20;
//      anilmark.yourMarkPlease();
//      anilmark-= 20;
//      anilmark.yourMarkPlease();
//     return 0;
// }// increment decrement 

// #include <iostream>
// using namespace std;
 
// class Distance {
//    private:
//       int feet;             // 0 to infinite
//       int inches;           // 0 to 12
      
//    public:
//       // required constructors
//       Distance() {
//          feet = 0;
//          inches = 0;
//       }
//       Distance(int f, int i) {
//          feet = f;
//          inches = i;
//       }
//       friend ostream &operator<<( ostream &output, const Distance &D ) { 
//          output << "F : " << D.feet << " I : " << D.inches;
//          return output;            
//       }

//       friend istream &operator>>( istream  &input, Distance &D ) { 
//          input >> D.feet >> D.inches;
//          return input;            
//       }
// };

// int main() {
//    Distance D1(11, 10), D2(5, 11), D3;

//    cout << "Enter the value of object : " << endl;
//    cin >> D3;
//    cout << "First Distance : " << D1 << endl;
//    cout << "Second Distance :" << D2 << endl;
//    cout << "Third Distance :" << D3 << endl;

//    return 0;
//}
#include <iostream>
using namespace std;

class Complex
{
  private:
    int real, imag;

  public:
    Complex(int r = 0, int i = 0) : real(r), imag(i)
    {
    }

    // Overload << and >> as friend functions
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

// Overload << for output
ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real << " + i" << c.imag;
    return out;
}

// Overload >> for input
istream &operator>>(istream &in, Complex &c)
{
    in >> c.real >> c.imag;
    return in;
}

int main()
{
    Complex c1;

    cout << "Enter real and imaginary parts: ";
    cin >> c1;

    cout << "The complex number is: " << c1 << endl;

    return 0;
}