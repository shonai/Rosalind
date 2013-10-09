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
        for(string::const_reverse_iterator iter = StrFromFile.rbegin(); iter != StrFromFile.rend(); iter++)
            if (*iter == 'T')
            {
                OutputFile<<'A';
            }
            else
            {
                if(*iter == 'A')
                    OutputFile<<'T';
                else
                {
                    if (*iter == 'C')
                        OutputFile<<'G';
                    else
                        OutputFile<<'C';
                }
            }
        OutputFile.close();


    return a.exec();
}
