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
/*//Problema 3 Fechas validas
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
}*/
/*//Problema 5 Patron diamante
int main(){
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=0;i<(num/2)+1;i++){ // parte de arriba
        for (int c=num/2-i;c>0;c--){ //Espacios
            cout<<" ";
        }
        for (int c=0;c<(i*2)+1;c++){ //Asteriscos
            cout<<"*";
        }
        cout<<endl;

    }
    for (int i=(num/2)-1;i>=0;i--){ //Parte de abajo
        for (int c=num/2-i;c>0;c--){ //Espacios
            cout<<" ";
        }
        for (int c=0;c<(i*2)+1;c++){ //Asteriscos
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}*/
/*//Problema 7 Fibonacci suma de pares
int main(){
    unsigned int pares=0;
    unsigned int actual1=1;
    unsigned int actual2=1;
    unsigned int num;
    cout<<"Ingresar un numero:";
    cin>>num;
    while (actual2<num){
        actual2=actual1+actual2;
        actual1=actual2-actual1;
        if (actual2%2==0 && actual2<=num){
            pares+=actual2;
        }
    }
    cout<<"El resultado de la suma es: "<<pares<<endl;
}*/
//Problema 8 Cifras al cuadrado
int main(){
    int suma=0;
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=num;i>0;i=i/10){
        suma+=pow(i%10,i%10);
    }
    cout<<"El resultado de la suma es de "<<suma<<endl;
return 0;
}
