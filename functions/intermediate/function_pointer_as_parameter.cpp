#include<iostream>
using namespace std;

int addTwoNums(int a, int b){
    return a + b;
}

int (*add)(int, int);
void execute(int (*func)(int, int)) {

    int result = func(5, 3);

    cout << result << '\n';
}
int main(){
    add = addTwoNums;

    execute(add);
}