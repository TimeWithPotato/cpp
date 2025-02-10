#include<iostream>
#include<functional>
using namespace std;

int fact(int a){
    if ( a == 1){
        return 1;
    }

    return a * fact(a - 1);
}
int main(){

    
    function<int(int)> lambda = [&lambda](int a) -> int {
            
            if( a == 1){
                return 1;
            }

            return a * lambda(a - 1);
    };

    int res = fact(3);

    cout << "Using general approach: " << res << '\n';
    cout << "Using lambda: " << lambda(3) << '\n';
}