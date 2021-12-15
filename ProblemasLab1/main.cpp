//Diciembre, 2021
//Hecho por Maria del Mar Arbelaez
//Problemas lab1
#include <iostream>

using namespace std;
/*//Problema 1 Consonantes vs vocales vs otro
int main()
{
    char letra;
    cout << "Ingrese una caracter:" << endl;
    cin>>letra;
    letra=tolower(letra);
    if (letra==97 || letra==101 || letra==105 || letra==111 || letra==117){ //Vocales
        cout<<"Es una vocal"<<endl;
    }
    else if (letra>=97 && letra<=122){ //Consonantes
        cout<<"Es una consonante"<<endl;
    }
    else { //Otros
        cout<<"No es una letra."<<endl;
    }

    return 0;
}*/
//Problema 3 Fechas válidas
int main(){
    unsigned short int mes;
    unsigned short int dia;
    cout<<"Ingrese un mes:"<<endl;
    cin>>mes;
    cout<<"Ingrese un dia:"<<endl;
    cin>>dia;
    if (mes>12){
        cout<<mes<<" es un mes invalido"<<endl;
    }
    else if (mes==0 || dia==0){
        cout<<dia<<'/'<<mes<<" no es una fecha valida."<<endl;
    }
    else if (mes<=7 && mes%2!=0 && dia>31){
        cout<<dia<<'/'<<mes<<" no es una fecha valida."<<endl;
    }
    else if (mes>7 && mes %2==0 && dia>31){
        cout<<dia<<'/'<<mes<<" no es una fecha valida."<<endl;
    }
    else if ((mes==4||mes==6||mes==9||mes==11)&&dia>30){
        cout<<dia<<'/'<<mes<<" no es una fecha valida."<<endl;
    }
    else if (mes==2){
        if (dia>29){
            cout<<dia<<'/'<<mes<<" no es una fecha valida."<<endl;
        }
        else if (dia==29)
            cout<<dia<<'/'<<mes<<" es una fecha valida en bisiesto."<<endl;
    }
    else{
       cout<<dia<<'/'<<mes<<" es una fecha valida."<<endl;
    }
    return 0;
}
