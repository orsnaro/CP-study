#include <iostream>
#include <fstream>

using namespace std;




int main()
{


ofstream fileio ("text.txt",ios::out | ios::app );

while(fileio.is_open())
{
string line ;

fileio<< "\tmy name is omar\t";
fileio<< "\tmy name is omar\t";

ifstream("text.txt");

while ( getline( fileio ,line))
cout << line ;



}


cout<< "file is bad ";




fileio.close();

    return 0;
}
                        