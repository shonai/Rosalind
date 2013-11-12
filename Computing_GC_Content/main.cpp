#include <QtCore/QCoreApplication>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>


struct FASTA
{
    std::string ID;
    double GCcontent;
    std::string str;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    std::vector<FASTA> vInputs;
    std::ifstream InputFile("C:/games/input.txt");
    FASTA temp;

    while(!EOF)
    {
        std::getline(InputFile, temp.ID);
        temp.ID.erase(0,1);
        std::getline(InputFile, temp.ID);
        vInputs.push_back(temp);
    }
    InputFile.close();

    for(std::vector::iterator<FASTA> iter = vInputs.begin(); iter != vInputs.end(); ++iter)
    {
        for ()
    }

    return a.exec();
}
