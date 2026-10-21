#include <iostream>

using namespace std;

float areacudrado(float lado){
    return lado*lado;
}
float volumencilindro(float radio, float altura){
    const float pi = 3.14159;
    return pi * radio * radio * altura;
}
float volumenesfera(float radio){
    const float pi = 3.14159;
    return (4.0/3.0) * pi * radio * radio * radio;
}
int main(){
    int opcion;
    cout << "\nCalculadora de figuras geometricas"  << endl;
    cout <<  "\n1.Area del cuadrado: " << endl;
    cout << "\n2.Volumen del cilindro: "<< endl;
    cout << "\n3.Volumen de la esfera: "<< endl;
    cout << "\n4. salir:"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
            float lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "el area del cuadrado es:"<< areacudrado(lado) <<endl;
            break;
        case 2:
            float radio,altura;
            cout <<"ingrese el radio del cilindro:";
            cin >>radio;
            cout <<"ingrese la altura del cilindro:";
            cin >>altura;
            cout <<"el volumen del cilindro es:" << volumencilindro(radio,altura) <<endl;
            break;
        case 3:
            float radioesfera;
            cout << "ingrese el radio de la esfera:";
            cin >> radioesfera;
            cout <<"el volumen de la esfera es:"<< volumenesfera(radioesfera) <<endl;
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    return 0;
}