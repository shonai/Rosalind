#include <QtCore/QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    int Months;
    int ProductionRate;
    long long int Fn, Fn_1, Fn_2;

    std::cout<< "Input a number of months: ";
    std::cin>> Months;
    std::cout<< "Input rabbits' production rate: ";
    std::cin>> ProductionRate;

    Fn_1 = 1;
    Fn_2 = 1;

    for (int i = 3; i <= Months; i++)
    {
        Fn = Fn_1 + ProductionRate * Fn_2;
        Fn_2 = Fn_1;
        Fn_1 = Fn;
    }

    std::cout<< "Total rabbit domination achuieved! Result is: " << Fn << std::endl;

    return a.exec();
}
