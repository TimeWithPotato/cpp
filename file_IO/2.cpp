// using fstream class
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    string line;

    fio.open("sample_2.txt", ios::trunc | ios::in | ios::out);

    while(fio)
    {
        getline(cin, line);
        
        if(line == "-1")
            break;

        fio << line << endl;
    }

    fio.seekg(0, ios::beg);

    while(!fio.eof())
    {
        getline(fio, line);

        cout << line;
    }

    fio.close();

    return 0;
}