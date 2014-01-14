#include <QtCore/QCoreApplication>
#include <vector>
#include <string>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    vetcor<vector<int> > ProfileMatrix;
    string ConsensusString;
    vector <string> InputStrings;


    return a.exec();
}
