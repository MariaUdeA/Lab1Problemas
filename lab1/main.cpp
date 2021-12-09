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
    short int vabA;
    short int vabB;
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
/*//Ej 5 A/B con redondeo (arreglar para negativos)
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
    if(abs(fmod(divi,1))>= 0.5){
        cout<<vabA<<"/"<<vabB<<"="<<ceil(divi)<<endl;
    }
    else{
        cout<<vabA<<"/"<<vabB<<"="<<floor(divi)<<endl;
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
