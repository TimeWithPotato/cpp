// Write a program that reads a large list of integers from a file and outputs their sum.
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    fstream fio;
    string line;
    fio.open("task_1.txt", ios::in);

    if(!fio)
    {
        cerr << "Error in opening file\n";
        return -1;
    }

    long long sum = 0;

    while(fio >> line)
    {
        try{
            sum += stoll(line);
        }catch(const invalid_argument& e){
            cerr << "Invalid number found" << endl;
        }
    }

    fio.close();

    cout << sum << "\n";

    return 0;
}