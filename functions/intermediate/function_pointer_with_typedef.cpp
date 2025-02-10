#include<iostream>
using namespace std;

typedef int (*operation_t)(int,int);

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mult(int a, int b){
    return a * b;
}
int division(int a, int b){
    return a / b;
}

int main(){
    operation_t op1 = add;
    operation_t op2 = sub;
    operation_t op3 = mult;
    operation_t op4 = division;

    cout << "Add: " << op1(10, 5) << " Sub: " << op2(10, 5) << " Mult: " << op3(10, 5) << " Div: " << op4(10, 5) << '\n';
}