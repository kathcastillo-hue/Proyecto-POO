
#include <iostream>
#include "Habitaciones.h"
using namespace std;

    Habitaciones:: Habitaciones(string est, int cant, /*double val*/ int cap, 
    string tipo, string view, bool acces):estado(est), cantidad(cant), 
    capacidad(cap), /*val*/tipo(tip), vista(view), accesibilidad(acces){}
        string getEstado(){
           /* cout<<"Ingrese el estado de la habitación: "<<endl;
            cout<<"1.Disponible."<<"\n 2.Ocupada."<<"\n 3.En limpieza."<<
                "\n 4.En mantenimiento"<<endl;
            cin<<estado;
            switch(estado):
                case 1:
                    cout<<"Habitación disponible";
                    break;
                case 2:
                    cout<<"Habitación ocupada";
                    break;
                case 3:
                    cout<<"Habitación en limpieza";
                    break;
                case 4:
                    cout<<"Habitación en mantenimiento";
                    break;
            */
        }
        int getCantDisp(int num){
            num=3;
            /*if (num>0){
                num=num-1;
            }*/
            /*for (int i=0;i<num;i++){
                num-=i;
            }*/
        }

        double getValor(){}
        void setDescuento(double descuento){}

int main() {


return 0;
    }
