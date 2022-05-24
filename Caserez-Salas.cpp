#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

void mostrarMenu(int numenu)
{
    cout << "1. Empezar juego" << endl
         << "2. Posiciones generales" << endl
         << "3. Puntaje propio" << endl
         << "4. salir" << endl;
    cin >> numenu;
}

void empezarjuego(string nomusuario, string pregunta, int puntos, char respuesta, char rtusuario, ifstream p1, ifstream nombres)
{
    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
    while (getline(p1, pregunta, '6')){
        if (rtusuario == respuesta){
            puntos = puntos + 3;
        }
    }

    while (getline(p1, pregunta, ',')){
        if (rtusuario == respuesta){
            puntos++;
        }
    }
}
void agregarpuntuacion(int puntosObtenidos, string nombre, int puntaje, bool respuesta_correcta, int vidas)
{
    vidas = 3;
    puntaje = 0;
    if (respuesta_correcta = true)
    {
        puntaje++;
    }
    else
    {
        puntaje--;
        vidas--;
    }
    
    //return puntaje;
}

void posicionesgenerales()
{
}

int puntajepropio(string nombre, bool respuesta_correcta)
{
    int puntaje = 0;
    if (respuesta_correcta = true)
    {
        puntaje++;
    }
    

    return puntaje;
}

int vidasrestantes(string nombre)
{
    int vidas = 3;
    ofstream nomout;
    ifstream nombres;
    string nomusuario;
    nombres.open("nombres.txt");
    while (getline(nombres, nomusuario, '-')){
      if (nomusuario==nombre){
        cout<<"bienvenido devuelta"<< nomusuario<<endl;
        cout<<"sus vidas son"<<vidas;
      }
      else{
        vidas=3;
        cout<<"bienvenido"<< nomusuario<<endl;
        nomout<<nomusuario<<"tiene: "<<vidas<<"vidas"<<":"<<endl;
      }
      
       
    }
    return vidas;
}

int main()
{
    bool respuesta_correcta = true;
    int stop = 1;
    int vidas= 3;
    string nomusuario;
    string pregunta;
    int puntos = 0;
    char respuesta;
    char rtusuario;
    ifstream nombres;
    int rtint;
    int usint;
    cin >> nomusuario;
    int numenu;
    int numpregunta = 1;
    ifstream p1;
    ifstream p2;
    ifstream p3;
    ifstream p4;

    switch (numenu)
    {
    case 1:
        // empezarjuego();
        break;
    case 2:
        // archivo.open()
        break;
    case 3:
        // archivo.open()
        break;

    case 4:
        // loop = false;
        break;
    default:
        // cout<<"ingrese una opcion valida"<<endl;
        break;
    }    
    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
        while (getline(p1, pregunta, '?'))
        {
            while (vidas =! 0 ){
            cout << numpregunta <<pregunta  <<". "<< "?" << endl;
            getline(p1, pregunta, '-');
            cout << pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                 cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 67;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
             puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 66;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;           
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 67;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 66;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            getline(p1, pregunta, '-');
            numpregunta++;
            cout << numpregunta <<". "<< pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint){
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else{
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            if (vidas =! 0){
                p1.close();
            }
            stop++;
            }
    }
}