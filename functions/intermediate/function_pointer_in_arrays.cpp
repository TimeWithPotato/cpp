#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int (*operation[])(int, int) = {add, subtract};
int main(){
    cout << "Add: " << operation[0](5, 3) << " Subtract: " << operation[1](10, 5) << '\n';
}