#include<iostream>
using namespace std;

inline int add (int a, int b){
    return a + b;
}

int main(){
    cout << add(10, 20); // here the add() will replace with code of add()
}

/*
inline functions are expanded during compilation rather than having a function call overhead
*/