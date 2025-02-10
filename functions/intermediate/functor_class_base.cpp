#include<iostream>
using namespace std;

class Power{
    int exponent;

public:
    Power(int exp) : exponent(exp) {}

    int operator()(int base) const {

        int result = 1;

        for (int i = 0; i < exponent; i++){
            result *= base;
        }

        return result;
    }
};

int main(){
    Power powerOf3(3);

    cout << "2^3: " << powerOf3(2) << '\n';
}