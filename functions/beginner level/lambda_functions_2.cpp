#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int x = 5, y = 10;

    auto lambda = [x, &y](int z) mutable -> int
    {
        x += z;
        y += z;

        if(x+y > 50)
        {
            throw runtime_error("Result exceed 50!");
        }

        return x + y;
    };

    try{
        int res = lambda(10);
        cout << "Result: " << res << '\n';
    }catch(const runtime_error &e){
        cerr << "Error message: " << e.what();
    }

    cout << "Value of X: " << x << " Value of Y: " << y << endl;
}