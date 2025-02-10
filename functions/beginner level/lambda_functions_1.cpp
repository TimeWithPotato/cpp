#include<iostream>
#include<stdexcept>
using namespace std;
int main(){

    auto hello = []()
    {
        cout << "Hello from lambda functions..!" << '\n';
    };

    hello();
}