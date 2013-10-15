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

    std::string::iterator SecondIter = SecondString.begin();
    for (std::string::iterator FirstIter = FirstString.begin(); FirstIter != FirstString.end(); ++FirstIter)
    {
        if ( *FirstIter != *SecondIter )
        {
            ++HamingDistance;
        }
        ++SecondIter;
    }

    std::cout<< HamingDistance << std::endl;

    return a.exec();
}
