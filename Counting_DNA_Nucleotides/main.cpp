#include <QtCore>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream FileToBeOpen;
    string FileName;
    string StrFromFile;
    int ACounter,
        CCounter,
        GCounter,
        TCounter;

    //cout<< "Please, input the name of a file, containing DNA";
    //cin>>FileName;
    FileToBeOpen.open("file.txt", ifstream::in);//open(FileName.c_str());
    FileToBeOpen >> StrFromFile;
    cout<<FileToBeOpen.gcount();
    FileToBeOpen.close();

    ACounter = count(StrFromFile.begin(), StrFromFile.end(), 'A');
    CCounter = count(StrFromFile.begin(), StrFromFile.end(), 'C');
    GCounter = count(StrFromFile.begin(), StrFromFile.end(), 'G');
    TCounter = count(StrFromFile.begin(), StrFromFile.end(), 'T');

    cout<<"ACounter = "<<ACounter<<endl
        <<"CCounter = "<<CCounter<<endl
        <<"GCounter = "<<GCounter<<endl
        <<"TCounter = "<<TCounter<<endl;

    return 0;
}
