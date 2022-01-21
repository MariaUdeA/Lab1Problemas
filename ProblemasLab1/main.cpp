//Diciembre, 2021
//Hecho por Maria del Mar Arbelaez
//Problemas lab1
//#include <iostream>
//using namespace std;

/*//Problema 1 Consonantes vs vocales vs otro
int main()
{
    char letra;
    cout << "Ingrese una caracter:" << endl;
    cin>>letra;
    char letre=tolower(letra);
    if (letre==97 || letre==101 || letre==105 || letre==111 || letre==117){ //Vocales
        cout<<letra<<" es una vocal"<<endl;
    }
    else if (letre>=97 && letre<=122){ //Consonantes
        cout<<letra<<" es una consonante"<<endl;
    }
    else { //Otros
        cout<<letra<<" no es una letra."<<endl;
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
        cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
    }
    else if (mes<=7 && mes%2!=0 && dia>31){
        cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
    }
    else if (mes>7 && mes %2==0 && dia>31){
        cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
    }
    else if ((mes==4||mes==6||mes==9||mes==11)&&dia>30){
        cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
    }
    else if (mes==2){
        if (dia>29){
            cout<<dia<<'/'<<mes<<" es una fecha invalida."<<endl;
        }
        else if (dia==29)
            cout<<dia<<'/'<<mes<<" es una valida en bisiesto."<<endl;
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
    return 0;
}*/
/*//Problema 9 Cifras elevadas a sí mismas
int main(){
    int suma=0;
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=num;i>0;i=i/10){
        suma+=pow(i%10,i%10);
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
return 0;
}*/
/*//Problema 11 MCM de numeros pasados
//Va sacando el mcm entre los numeros anteriores, uno a uno
int mcm(int vabA,int vabB);
int main(){
    int num;
    int mcm1=1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    for (int i=1;i<=num;i++){
        mcm1=mcm(i,mcm1);
    }

    cout<<"El minimo comun multiplo es: "<< mcm1<<endl;
return 0;
}
int mcm(int vabA, int vabB){
    int mcd=1;
    for (int i=1;i<=vabA/2 || i<=vabB/2 ;i++){
        if (vabA % i==0 && vabB % i==0){
            mcd=i;
        }
    }
    mcd=(vabA*vabB) / mcd;
    return mcd;
}*/
/*// Problema 13 Suma de primos menores
int main(){
    int num;
    int divis;
    int suma=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=2;i<=num;i++){
        divis=0;
        for (int c=i/2;c>=1;c--){
            if (i%c==0){
                divis++;
            }
        }
        if (divis==1){
            suma+=i;
        }
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}*/
/*//Problema 15 Patron de numeros (Suma de esquinas)
int main(){
    int num;
    int suma=1;
    int c=0;
    int corner=1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for (int i=1;i<=num/2;i++){
        c+=2;
        for (int w=1;w<=4;w++){
            corner+=c;
            suma+=corner;
        }
    }
    cout<<"En una espiral de "<<num<<"x"<<num<<", la suma es: "<<suma<<endl;
}*/
/*//Problema 17 Divisores de sucesión
int divs(unsigned int num);
int main(){
    unsigned int max;
    unsigned int divisores=0;
    unsigned int c=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>max;
    while (divisores<max){
        c++;
        divisores=divs((c*(c+1))/2);
    }
    cout<<"El numero es: "<<(c*(c+1))/2<<" que tiene "<<divisores<<" divisores"<<endl;
    return 0;
}
int divs(unsigned int num)
{
    unsigned int divis=0;
    for(int i=num/2;i>0;i--)
       {
       if (num%i==0){
           divis++;
       }
    }
return divis+1;
}*/
