#include<iostream>
using namespace std;

int subtract(int a, int b = 0);

int main(){
    cout << subtract(20, 10);
}

int subtract(int a, int b){
    return a - b;
}

/*
give the default value in the declaration period not in the definition.Also we can give default value if we write the function definition in the place of function declaration
*/