#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //Leer Archivo linea por linea
    ifstream file1("ejemplo.txt");
    string line;

    //Si es que el archivo esta abierto:
    if(file1.is_open()){
        while(getline(file1, line)){
            cout << line <<endl;
        }
        file1.close();
    }

    //Leer archivo string a string
    ifstream file2("ejemplo.txt");
    string str;

    //Si es que el archivo esta abierto:
    if(file2.is_open()){ 
        while(file2>>str){
            cout << str << " ";
        }
        cout << endl;
        file2.close();
    }

    //Escribir en archivo
    ofstream file3("ejemplo2.txt");

    //Si es que el archivo esta abierto:
    if(file3.is_open()){ 
        file3 << "Este es un ejemplo\nEsto es un salto de linea\tAhora un tab\nOtra linea";
        file3.close();
    }

    //Leer file char a char
    fstream file4 ("ejemplo.txt", ios::in);
    char ch;
    if (file4.is_open()) {
        while (file4 >> noskipws >> ch) {
            cout << ch << " ";
        }
        file4.close();
    }
    cout << endl;
    return 0;
}