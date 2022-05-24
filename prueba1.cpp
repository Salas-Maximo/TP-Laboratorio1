#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
int main()
{
    int stop = 1;
    int vidas= 3;
    int numpregunta = 1;
    string nomusuario;
    string pregunta;
    int puntos = 0;
    char respuesta;
    char rtusuario;
    ifstream p1;
    ifstream nombres;
    int rtint;
    int usint;
    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
    while (getline(p1, pregunta, '?'))
    {
    cout << numpregunta <<". " << pregunta << endl;
        while (vidas>0)
        {
            getline(p1, pregunta, '-');
            cout << numpregunta <<". " << pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
        }
    }
}