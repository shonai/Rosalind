#include <QtCore/QCoreApplication>
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

        cout<< "Please, input the name of a file, containing DNA"<<endl;
        cin>>FileName;
        FileToBeOpen.open(FileName.c_str(), ifstream::in);

        FileToBeOpen >> StrFromFile;

        // TODO: probably, loop can be used to
        // go through all the string, replacing
        // symbols, using string::replace
        // with pos = string.find(symbol)

    return a.exec();
}
