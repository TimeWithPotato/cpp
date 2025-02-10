#include <iostream>
#include <functional>
using namespace std;

int maxNum(int *a, int *b)
{

    return *a > *b ? *a : *b;
}

void execute(function<int(int *, int *)> func, int *x, int *y)
{
    cout << func(x, y) << '\n';
}

void executeAdd(function<int(int, int)> func)
{
    cout << func(5, 10);
}
int main()
{

    int *p1, *p2;
    int a, b;

    p1 = &a;
    p2 = &b;

    cout << "Enter the two Numbers: " << '\n';
    cin >> *p1 >> *p2;
    execute(maxNum, p1, p2);

    executeAdd([](int a, int b) -> int
               { return a + b; });
}
