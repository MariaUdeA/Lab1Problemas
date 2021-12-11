#include <iostream>
using namespace std;
//Hecho por María del Mar Arbeláez
//Diciembre 2021
/*//Ej 1 Residuo A/B
int main()
{
    short int vabA;
    short int vabB;
    cout << "Ingrese un numero A: " <<endl;
    cin >> vabA;
    cout << "Ingrese un numero B: " <<endl;
    cin >> vabB;
    cout<<"El residuo de A/B es: "<<vabA % vabB<<endl;
    return 0;
}
*/
/*//Ej 3 Mayor entre A y B
int main()
{
    int vabA;
    int vabB;
    cout << "Ingrese un numero A: " <<endl;
    cin >> vabA;
    cout << "Ingrese un numero B: " <<endl;
    cin >> vabB;
    if (vabA>vabB){
        cout<<"El mayor es: "<<vabA<<endl;
    }
    else {
        cout<<"El mayor es: "<<vabB<<endl;
    }

    return 0;
}
*/
/*//Ej 5 A/B con redondeo
int main()
{
    float vabA;
    float vabB;
    float divi;
    cout << "Ingrese un numero A: " <<endl;
    cin >> vabA;
    cout << "Ingrese un numero B: " <<endl;
    cin >> vabB;
    divi=vabA/vabB;
    if(abs(fmod(divi,1))>= 0.5 && divi>=0){
        cout<<vabA<<"/"<<vabB<<"="<<ceil(divi)<<endl;
    }
    else if(fmod(divi,1)<0.5 && divi>=0){
        cout<<vabA<<"/"<<vabB<<"="<<floor(divi)<<endl;
    }
    else if(abs(fmod(divi,1))>= 0.5 && divi<0){
        cout<<vabA<<"/"<<vabB<<"="<<floor(divi)<<endl;
    }
    else if ((abs(fmod(divi,1)))< 0.5 && divi<0){
        cout<<vabA<<"/"<<vabB<<"="<<ceil(divi)<<endl;
    }
    return 0;
}*/
/*//Ej 7 Sumatoria de 0 a A
int main()
{
    unsigned int num;
    unsigned int suma=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        suma+=i;
    }
    cout<<"La sumatoria de 0 hasta "<<num<<" es "<<suma<<endl;
return 0;
}*/
/*//Ej 9 Area y perimetro del radio A
int main()
{
    float num;
    float area;
    float permt;
    cout<<"Ingrese un radio: "<<endl;
    cin>>num;
    area=3.1416*pow(num,2);
    permt=3.1416*2*num;
    cout<<"Area: "<<area<<endl;
    cout<<"Perimetro: "<<permt<<endl;

return 0;
}*/
/*//Ej 11 Tabla de multiplicar hasta 10
int main()
{
    int num;
    int prod;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for(int i=0;i<=10;i++)
    {
        prod=i*num;
        cout<<num<<"x"<<i<<"="<<prod<<endl;

    }
return 0;
}*/
/*//Ej 13 Divisores de N
int main()
{
    unsigned int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    cout<<num<<endl;
    for(int i=num/2;i>0;i--)
       {
       if (num%i==0){
           cout<<i<<endl;
       }
    }
return 0;
}*/
/*//Ej 15 Sumatoria de numeros ingresados
int main(){
    int suma=0;
    int actual=-1;
    while (actual!=0)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>actual;
        suma+=actual;

    }
    cout<<"La suma de los numeros es: "<<suma<<endl;
return 0;
}*/
/*//Ej 17 Numero Mayor de numeros ingresados
int main(){
    int mayor=0;
    int actual=-32768;
    while (actual!=0)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>actual;
        if (actual>mayor){
            mayor=actual;
        }
        ;

    }
    cout<<"El mayor de los numeros es: "<<mayor<<endl;
return 0;
}*/
/*//Ej 19 Primo o no
int main(){
    unsigned int num;
    unsigned int prim=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    for(int i=num/2;i>0;i--)
       {
       if (num%i==0){
           prim++;
        }
    }
    if (prim==1){
        cout<<num<<" es un numero primo"<<endl;
    }
    else{
        cout<<num<<" no es un numero primo"<<endl;
    }

return 0;
}*/
/*//Ej 21 Mayus a minus, minus a Mayus
//Tambien se puede utilizar tolower y toupper(!!)
int main(){
    char letra;
    cout<<"Ingrese una letra: "<<endl;
    cin>>letra;
    if (letra>=65 && letra<=90){
        letra=letra+32;
        cout<<"Letra convertida: "<< letra <<endl;
    }
    else{
        letra=letra-32;
        cout<<"Letra convertida: "<<letra<<endl;
    }

}*/
/*//Ej 23 Minimo comun multiplo entre A y B
//Se utiliza la ecuación mcm=(A*B)/MCD(A,B)
int main(){
    int vabA;
    int vabB;
    int mcd;
    cout << "Ingrese un numero A: " <<endl;
    cin >> vabA;
    cout << "Ingrese un numero B: " <<endl;
    cin >> vabB;
    for (int i=1;i<=vabA/2 || i<=vabB/2 ;i++){
        if (vabA % i==0 && vabB % i==0){
            mcd=i;
        }
    }
    mcd=(vabA*vabB) / mcd;
    cout<<"El minimo comun multiplo entre "<<vabA<<" y "<<vabB<<" es "<<mcd<<endl;

}*/
/*//Ej 25 Numero de digitos
int main(){
    int num;
    int digits=0;
    int num2;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>num;
    for (num2=num;num2!=0;num2=num2/10){
        digits ++;
    }
    cout<<"El numero "<<num<<" tiene "<<digits<<" digitos"<<endl;
return 0;
}*/
/*//Ej 27 calculadora +-/x
int main(){
    float num1;
    float num2;
    char op;
    float res;
    cout<<"Ingrese el primer numero:"<<endl;
    cin>>num1;
    cout<<"Ingrese una operacion:"<<endl;
    cin>>op;
    cout<<"Ingrese otro numero:"<<endl;
    cin>>num2;
    res=(op=='+')?num1+num2:(op=='-')?num1-num2:(op=='x')?num1*num2:(op=='/')?num1/num2:0;
    //si la operacion no es correcta, se pone que el resultado es cero
    cout<<num1<<op<<num2<<'='<<res<<endl;

return 0;
}*/
/*//Ej 29 Maquina adivina un numero
int main(){
    int abajo=0;
    int arriba=100;
    char sign='n';
    while (sign!='='){
        cout<<"Es el numero igual mayor o menor a "<<(abajo+arriba)/2<<endl;
        cin>>sign;
        if (sign=='<'){
            arriba=(arriba+abajo)/2;
        }
        else if (sign=='>'){
            abajo=(arriba+abajo)/2;
        }
    }
    cout<<"Su numero es el "<<(arriba+abajo)/2<<endl;
return 0;
}*/
