#include<iostream>
using namespace std;

int (*operation)(int);
int fact(int a){
    if( a == 1){
        return 1;
    }

    return a * fact(a - 1);
}
int main(){

    operation = fact;

    cout << operation(3) << '\n';
}