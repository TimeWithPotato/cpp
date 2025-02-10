#include<iostream>
using namespace std;

int add(int a, int b); // function declaration

int main(){
    cout << add(5, 5);
}

int add(int a, int b){
    return a + b;
}
