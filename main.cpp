#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    int a;
    char eil[10];
    string vardas;
    int metai;
    fin >> a;
    fin.ignore(80,'\n');
    for (int i=0; i<a; i++) {
        fin.get(eil,10);
        vardas = eil;
        fin >> metai;
        fin.ignore(80,'\n');
        cout << vardas << " " << metai << endl;
    }

    return 0;
}
