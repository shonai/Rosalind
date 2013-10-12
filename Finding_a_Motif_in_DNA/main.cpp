#include <QtCore/QCoreApplication>
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string FirstString;
    std::string SecondString;
    std::ifstream InputFile("C:/games/input.txt");
    int HamingDistance = 0;
    std::getline(InputFile, FirstString);
    std::getline(InputFile, SecondString);

    for (int i = 0; i != (int)FirstString.length(); i++ )
    {
        if(FirstString[i] == SecondString[i])
        {
            HamingDistance++;
        }
    }
    std::cout << HamingDistance << endl;

    return a.exec();
}
