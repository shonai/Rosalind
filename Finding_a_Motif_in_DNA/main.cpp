#include <QtCore/QCoreApplication>
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string MainString;
    std::string SubString;
    std::size_t index = static_cast<size_t>(0);
    std::ifstream InputFile("C:/games/input.txt");

    std::getline(InputFile, MainString);
    std::getline(InputFile, SubString);


    index = MainString.find(SubString, 0);
    if (index != std::string::npos)
        std::cout << index + static_cast<size_t>(1) << std::endl;
    do{
        index = MainString.find(SubString, index + 1);
        if (index != std::string::npos)
            std::cout << index + static_cast<size_t>(1) << std::endl;
    } while(index != std::string::npos);

    return a.exec();
}
