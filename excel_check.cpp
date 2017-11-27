#include<bits/stdc++.h>
using namespace std;

int main()
{
	ofstream MyExcelFile;
MyExcelFile.open("test.csv" , ofstream::in | ofstream::out | ofstream::app);
 
MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
MyExcelFile << "Michael, Jackson, B." << endl;
MyExcelFile << "Michael, Jackson, C." << endl;
MyExcelFile << "Michael, 123, D." << endl;
MyExcelFile << "1111111, 333, 55" << endl;
string a = "abs" ;
string b = "def";
MyExcelFile << a<<", "<<b<<", "<<" 4646"<< endl;

MyExcelFile.close();
return 0;
}
