#include <QtCore/QCoreApplication>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>


int factorial(int value)
{
    int result = 1;
    for (int i = 1; i<=value; ++i)
        result *=i;
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    int HighestValue;
    std::vector <int> vPermutations;
    std::ofstream OutputFile("c:/games/output.txt");

    std::cout << "Input a number of numbers :) for permutations: ";
    std::cin >> HighestValue;

    for (int i = 1; i<= HighestValue; i++)
        vPermutations.push_back(i);

    OutputFile << factorial(HighestValue) << std::endl;
    do {
        std::copy(vPermutations.begin(), vPermutations.end(), std::ostream_iterator<int>(OutputFile, " "));
        OutputFile<<std::endl;
    } while(std::next_permutation(vPermutations.begin(), vPermutations.end()));

    OutputFile.close();
    return a.exec();
}
