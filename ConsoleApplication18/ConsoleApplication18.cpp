

#include <iostream>
using namespace std;

//              /*TAPSIRIQ-1*/
 
//float cube(float num) {
//    return num * num * num;
//}
//int main()
//{
//    cout << cube(10) << endl;
//
//    return 0;
//}

               /*TAPSIRIQ-2*/

float find(float num1, float num2) 
{
    return (num1 > num2) ? num1 : num2;
}

int main() {
    
    cout << find(10,20) << endl;

    return 0;
} 
              /*TAPSIRIQ-3*/
//float Positive(float num) {
//    return (num > 0);
//}
//
//int main() {
//    float number;
//    cout << "Eded daxil edin:";
//    cin >> number;
//
//    if (Positive(number)) {
//        cout << "Daxil edilen eded musbetdir." << endl;
//    }
//    else {
//        cout << "Daxil edilen eded menfidir." << endl;
//    }
//
//    return 0;
//}
              /*TAPSIRIQ-5*/
//void Square(float Length) {
//    int rows = static_cast<int>(Length); 
//    float fractional = Length - rows; 
//
//    
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < rows; j++) {
//            std::cout << "* ";
//        }
//        std::cout << std::endl;
//    }
//
//   
//    if (fractional > 0) {
//        int fractionalC = static_cast<int>(Length * fractional);
//
//        
//        for (int i = 0; i < fractionalC; i++) {
//            std::cout << "* ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//int main() {
//    float side;
//    std::cout << "Kvadratın tərəf uzunluğunu daxil edin: ";
//    std::cin >> side;
//
//    Square(side);
//
//    return 0;
//}
           /*TAPSIRIQ-8*/
//float quvvet(float base, float exponent) {
//    return pow(base, exponent);
//}
//
//int main() {
//    float num1,num2;
//
//    cout << "esası  daxil edin: ";
//    cin >> num1;
//    cout << "quvveti  daxil edin: ";
//    cin >> num2;
//
//    float netice = quvvet(num1, num2);
//    cout << "Netice: " << netice << endl;
//
//    return 0;
//}
