#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
int main(){
    int vidas;
    ofstream nomout;
    ifstream nombres;
    string nombre;
    string nomusuario;
    nombres.open("nombres.txt");
    nomout.open("nombres.txt", ios::app);
    cin>> nomusuario;
    while (getline(nombres, nombre, ':')){
      if (nomusuario==nombre){
        cout<<"bienvenido devuelta"<< nomusuario<<endl;
        cout<<"sus vidas son"<<vidas;
      }
      else{
        vidas=3;
        cout<<"bienvenido "<< nomusuario<<endl;
        nomout<<nomusuario<<" tiene: "<<vidas<<" vidas"<<"-"<<endl;
      }
      
       
    }
}
