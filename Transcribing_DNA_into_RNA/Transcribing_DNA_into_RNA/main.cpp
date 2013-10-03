#include <QtCore/QCoreApplication>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ifstream FileToBeOpen;
    ofstream OutputFile;
        string FileName;
        string StrFromFile;


        cout<< "Please, input the name of a file, containing DNA"<<endl;
        cin>>FileName;
        FileToBeOpen.open(FileName.c_str(), ifstream::in);
        FileToBeOpen >> StrFromFile;
        FileToBeOpen.close();


        OutputFile.open("Output.txt");
        for(string::const_iterator iter = StrFromFile.begin(); iter != StrFromFile.end(); iter++)
            if (*iter == 'T')
            {
                OutputFile<<'U';
            }
            else
            {
                OutputFile<<*iter;
            }
        OutputFile.close();


    return a.exec();
}
