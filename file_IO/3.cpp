// Q: write a single file handling program in c++ to reading
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    string line;
    fio.open("task_1.txt", ios::trunc | ios::in | ios::out);

    while(getline(cin,line))
    {
        if(line == "-1")
            break;

        fio << line << "\n";
        ;
    }

    fio.seekg(0, ios::beg);
    while(!fio.eof())
    {
        getline(fio, line);

        cout << line << "\n";
    }

    fio.close();
    return 0;
}