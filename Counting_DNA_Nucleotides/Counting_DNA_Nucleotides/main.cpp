#include <QtCore/QCoreApplication>
#include <QtCore>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ifstream FileToBeOpen;
    string FileName;
    string StrFromFile;
    int ACounter,
        CCounter,
        GCounter,
        TCounter;

    cout<< "Please, input the name of a file, containing DNA"<<endl;
    cin>>FileName;
    FileToBeOpen.open(FileName.c_str(), ifstream::in);
    FileToBeOpen >> StrFromFile;

    ACounter = count(StrFromFile.begin(), StrFromFile.end(), 'A');
    CCounter = count(StrFromFile.begin(), StrFromFile.end(), 'C');
    GCounter = count(StrFromFile.begin(), StrFromFile.end(), 'G');
    TCounter = count(StrFromFile.begin(), StrFromFile.end(), 'T');

    cout<<"ACounter = "<<ACounter<<endl
        <<"CCounter = "<<CCounter<<endl
        <<"GCounter = "<<GCounter<<endl
        <<"TCounter = "<<TCounter<<endl;
    FileToBeOpen.close();

    return a.exec();
}
