#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    // cout << "Learning c++\n";
    // cout << "basics practice" << endl;

    // int x = 10;
    // cout << x;
    // int value;
    // cin >> value;
    // cout << "Your Value : " << value << "\n";

    // int num1 , num2;
    // cin >> num1 >> num2;
    // cout << num1 << "\t" << num2 << endl;
    // cout << "sum : " << num1 + num2;

    // cout << "Name : Alex\n" << "Age : 20";

    // int num = 5;
    // cout << num  << "\n" << num << endl;

    // cout << double(3.14);

    // char a = 'A';
    // cout << a << endl;

    // int square_num;
    // cin >> square_num;
    // cout << square_num * square_num << endl;

    // int my_num;
    // cin >> my_num;
    // if (my_num > 3){
    //     cout << "Done!" << endl;
    // }

    // double d = 5.75;
    // cout << d;

    // char g = 'A';
    // cout << int(g);

    // int v = 5,  e = 2;
    // cout << v/e << endl;

    // double pi = 3.14;
    // cout << fixed << setprecision(4) << pi << endl;

    // float f = 10.9;
    // cout << int(f) << endl;

    // long long y = 232487.2345;
    // cout << y << endl;

    // ---------------STL -------------------
    vector <int> v1;
    v1.push_back(23) ; v1.emplace_back(78);
    for (auto x : v1) cout << x << " ";
    cout << endl;

    int n1;
    cin>> n1;
    vector <int> v2(n1);

    for (int i = 0; i < n1; ++i){
        cin >> v2[i];
    }

    for (int i =0 ; i < v2.size(); ++i) cout << v2[i] <<  " ";

    cout << endl;

    cout << "size : " << v2.size();
     cout << endl;
    cout << "last elemnt" << v2[n1-1];
    cout << endl;

    int k;
    cin >> k;

    try {
        cout << v2.at(k) << endl; // safe access
    } catch (out_of_range &e) {
        cout << "Out of bounds" << endl;
    }

    int m;
    cin >> m;

    vector <int> v3;
    v3.reserve(100);

    for (int i = 0 ; i < m ; ++i){
        cin >> v3[i];
    }
    cout << v3.capacity() << " " << v3.size() << endl;

    return 0;
}