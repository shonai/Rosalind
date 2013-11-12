#include <QtCore/QCoreApplication>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<double> vBincoeff;
    vBincoeff.push_back(1);
    long long N=32;//2^k
    for (long i=1;i<=N;i++)
    {
        double X=0;
        X=vBincoeff[i-1]*(N-i+1)/(i);
        vBincoeff.push_back(X);
    }
    for (long long i=0;i<N;i++)
    {
        for (long long j=0;j<=i;j++)
        {
            vBincoeff[j]=vBincoeff[j]*0.75;
        }
        for (long long j=N;j>i;j--)
        {
            vBincoeff[j]=vBincoeff[j]*0.25;
        }
    }
    double prob=0.0;
    for (long long i=0;i<6/*N-1*/;i++)
    {
        prob+=vBincoeff[i];
        std::cout<<i<<" "<<vBincoeff[i]<<std::endl;
    }
    std::cout<<1-prob<<std::endl;


    
    return a.exec();
}
