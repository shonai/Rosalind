#include <QtCore/QCoreApplication>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    long AA_AA;
    long AA_Aa;
    long AA_aa;
    long Aa_Aa;
    long Aa_aa;
    long aa_aa;

    cout << "Please, input the count of AA-AA couples: ";
    cin  >> AA_AA;
    cout << "Please, input the count of AA-Aa couples: ";
    cin  >> AA_Aa;
    cout << "Please, input the count of AA-aa couples: ";
    cin  >> AA_aa;
    cout << "Please, input the count of Aa-Aa couples: ";
    cin  >> Aa_Aa;
    cout << "Please, input the count of Aa-aa couples: ";
    cin  >> Aa_aa;
    cout << "Please, input the count of aa-aa couples: ";
    cin  >> aa_aa;

    double result = Aa_Aa * 1.5 + AA_AA * 2. + AA_Aa * 2. + AA_aa * 2. + Aa_aa;
    cout << fixed << result;

    return a.exec();
}
