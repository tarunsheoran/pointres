#include <iostream>
using namespace std;
 int main()
 {
    int a=3;
    int* b =&a;
    cout<<"The adress of a is "<<b<<endl;
    cout <<"The addres of a is "<<&a<<endl;
    cout<<"The value at adress b is "<<*b<<endl;
    return 0;
 }
 


