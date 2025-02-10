#include<iostream>
using namespace std;

struct Adder{
    int value;
    Adder(int x) : value(x) {}

    int operator()(int x){
        return x + value;
    }
};

int main(){
    Adder v(5);

    cout << v(10) << '\n';
}