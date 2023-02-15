//Primer avance :D, sin validaciones//

#include <iostream>
#include <stdio.h>
using  namespace std;

int main()
{
    char nart[20],g[20],c[10];
    char d[50],con[20];
	int op,item,de;
    float p,i=1.16,t;

    cout << "\t ***MENU DE OPCIONES***" << endl;
        ; // \t es tabulador
    cout<< "1.-Alta" << endl;
    cout<< "2.-Modificacion" << endl;
    cout<< "3-Baja" << endl;
    cout<< "4.-Lista" << endl;
    cout<< "5.-Limpiar Pantalla" << endl;
    cout<< "6.-Salir" << endl;
    std::cin>> op;
    switch(op)
    {
    case 1: //alta
        cout << "Item del articulo"<< endl;
        std::cin >> item;
        cout << "Ingrese el nombre del articulo" << endl;
        std::cin >> nart;
        cout << "Agregue una descripcion" << endl;
        cin >> d;
        cout << "Ingrese el genero" << endl;
        cin >> g;
        cout<< "Ingrese la clasificacion" << endl;
        cin >> c;
        cout<< "Ingrese la consola" << endl;
        cin>>con;
        cout<< "Ingrese el precio" << endl;
        cin>> p;
        t = p * i;
        cout<< "El precio del articulo con impuesto incluido es:"<< endl << t << endl;
        cout<< "¿Quiere agregar otro articulo" << endl << "1.si"<<endl<< "2.no" << endl;
        cin>> de;
        if(de==1)
        {
            system("pause");
            return main();
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        system("cls"); // limpiar pantalla
        return main();
        break;
    case 6:
        cout << "adios :)" << endl;
        exit(1); // cierra la pantalla
        break;
    default:
        cout << "Opcion invalida" << endl;
        system("cls");
            return main();
            break;

    }


}

