#include <iostream>
// LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>
using namespace std;

// TRABAJO GRUPAL
int main()
{
    int e;
    string nombre;
    string apellido;
    char r;
    int op;
    
    ofstream archivoUno;
    string nombreArchivo;

    cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
    getline(cin,nombreArchivo);
    archivoUno.open(nombreArchivo.c_str(),ios::app);
    do
    {
        cout<<"\tINGRESE EL NOMBRE: ";
        getline(cin,nombre,'\n');

        cout<<"\tINGRESE EL APELLIDO: ";
        getline(cin,apellido,'\n');

        cout<<"\tINGRESA LA EDAD:";
        cin>>e;

        archivoUno<<nombre<<" "<<apellido<<" "<<e<<"\n";
        cout<<"DESEA AGREGAR OTRO CONTACTO s/n: ";
        cin>>r;
        cin.ignore();

    }
    while(r=='s');

    archivoUno.close();

    
    /*ifstream archivoLectura ("hola.txt");
    string texto;
        while(!archivoLectura.eof())
        {
            archivoLectura>>nombre>>apellido>>e;
            if (!archivoLectura.fail())
                {
                    getline(archivoLectura,texto);
                    cout<<"**********************"<<endl;
                    cout<<"El nombre es: "<<nombre<<endl;
                    cout<<"El apellido es: "<<apellido<<endl;
                    cout<<"La edad es: "<<e<<endl;
                    cout<<"**********************"<<endl;
                }
        }
    archivoLectura.close();*/


    fstream archivo("hola.txt");
    string linea;
    cout<<endl;
    cout<<"**********************"<<endl;
    cout<<"* 1- LEER REGISTRO   *"<<endl;
    cout<<"* 2- SALIR           *"<<endl;
    cout<<"**********************"<<endl;
    cout<<"Digite su opción: ";
    cin >>op;
    cout<<endl;
    if (op==1)
    {
      if(!archivo.is_open())
      archivo.open("hola.txt",ios::in);

      while(getline(archivo,linea))
      cout<<linea<<"\n";

      archivo.close();
    }

    return 0;
}
