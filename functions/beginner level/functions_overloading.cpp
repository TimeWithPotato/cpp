#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

float subtract(int a, int b){
    return b - a;
}
float subtract(float a, float b){
    return b - a;
}

int main(){
    cout << "First add: " << add(5, 5) << '\n'
         << "Second add: " << add(5, 5, 5) << '\n';

    cout << "First subtract: " << subtract(5, 10) << '\n'
         << "Second subtract: " << subtract(5.2f, 10.5f) << '\n'; // here we need to suffix the value with f, otherwise compiler will treat them as double
}