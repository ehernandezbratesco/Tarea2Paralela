#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string frase;
    int suma=0;
    ifstream ficheroEntrada;
    ficheroEntrada.open("utem.csv");
    while(getline(ficheroEntrada, frase)){
      suma=suma+1;
    }
    ficheroEntrada.close();
    suma= suma-1;
    cout << "La cantidad de lineas del fichero es: "<< suma << endl;
    return 0;
}
