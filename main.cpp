/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 19-04-2021
* METODO DE ORDENAMIENTO SELECCIÓN
*/

#include<iostream>
using namespace std;
int main()
{

    int t,pos,aux;
    cout<<"ORDENAMIENTO METODO DE INSERCION"<<endl;
    cout<<endl;
    cout<<"TAMANIO: ";
    cin>>t;
    cout<<endl;
    int n[t];
    for(int i=0;i<t;i++)
    {
        cout<<"POSICION:"<<"["<<i<<"]"<<":";
        cin>>n[i];
    }
    cout<<"\n i" << "\tnum" << "\ta" << "\tlista[j]"<< "\tnum"<< "\tlista[a+1]"<< "\tLista" <<endl;
    for(int i=1;i<t;i++)
    {
        cout<< " " <<i;
        aux=n[i];
        cout<<"\t"<<aux;
        pos=i-1;
        cout<< "\t" << pos;
        cout<< "\t" << n[pos];
        cout<< "\t\t" << aux;
        cout<< "\t  " << n[pos+1];
        cout<< "\t\t" ;
        while(pos>=0 && n[pos]>aux){
            n[pos+1]=n[pos];
            pos--;
        }
        n[pos+1]=aux;
        for(int i=0;i<t;i++){
            cout<< n[i] << "-";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Resultado :"<<endl;

    cout<<"[";
    for(int i=0;i<t;i++)
    {
        cout<<" "<<n[i];
    }
    cout<<" ]";
    cout<<endl;

}
