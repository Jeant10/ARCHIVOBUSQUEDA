#include <iostream>
using namespace std;
#include <fstream>
int busqueda(int arr[], int t, int dato);
void ingresarElementosArreglo(int arr[], int t);
void imprimirElementosArreglo(int arr[], int t);
int solicitarNumero();


int main() 
{
  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre del archivo:";
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  int a[5]={4,1,2,3,5};
  //cout<<"**************"<<busqueda(a,5,4)<<endl;
  int dato=solicitarNumero();
  
  if(busqueda(a,5,dato)==3)
  {
    archivoprueba<<"ELEMENTO NO ENCONTRADO: ";
    cin.ignore();
  }
  else 
  {
    archivoprueba<<"ELEMENTO ENCONTRADO EN LA POSICION: "<<busqueda(a,5,dato);
    cin.ignore();
  }
archivoprueba.close();
}
int solicitarNumero()
{
  int n;
  cout<<"ingresa el número:";
  cin>>n;
  return n;
}
int busqueda(int arr[], int t, int dato)
{
  int i;

  for( i=0 ; i<5 ; i++)
  {
      
    if(arr[i]==dato)
    {
      return i;
    }
  }
  
  return 3;
}
void ingresarElementosArreglo(int arr[], int t)
{
}
void imprimirElementosArreglo(int arr[], int t)
{

}
