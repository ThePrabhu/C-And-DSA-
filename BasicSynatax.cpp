#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Learning c++\n";
    cout << "basics practice" << endl;

    int x = 10;
    cout << x;
    int value;
    cin >> value;
    cout << "Your Value : " << value << "\n";

    int num1 , num2;
    cin >> num1 >> num2;
    cout << num1 << "\t" << num2 << endl;
    cout << "sum : " << num1 + num2;

    cout << "Name : Alex\n" << "Age : 20";

    int num = 5;
    cout << num  << "\n" << num << endl;

    cout << double(3.14);

    char a = 'A';
    cout << a << endl;

    int square_num;
    cin >> square_num;
    cout << square_num * square_num << endl;

    int my_num;
    cin >> my_num;
    if (my_num > 3){
        cout << "Done!" << endl;
    }

    double d = 5.75;
    cout << d;

    char g = 'A';
    cout << int(g);

    int v = 5,  e = 2;
    cout << v/e << endl;

    double pi = 3.14;
    cout << fixed << setprecision(4) << pi << endl;

    float f = 10.9;
    cout << int(f) << endl;

    long long y = 232487.2345;
    cout << y << endl;

}