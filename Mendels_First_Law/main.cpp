#include <QtCore/QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    int k,m,n;
    float denom;
    float result;

    cout << "Please, input a number of homozygous dominant (k): ";
    cin  >> k;
    cout << "Please, input a number of heterozygous (m): ";
    cin  >> m;
    cout << "Please, input a number of homozygous recessive (n): ";
    cin  >> n;

    denom = 1./((k+m+n)*(k+m+n-1));
    result = 1 - denom * (0.25 * m * (m-1) + m * n + n * (n-1) );

    cout << "Result is: " << result;
    return a.exec();
}
