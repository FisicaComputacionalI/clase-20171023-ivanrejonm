//Numeros
//Iván Rejón
//23-oct-17
#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int N=0;
  cout<<"Escribe un número natural: "<<endl;
  cin>>N;
  for(int i=0; i<=N; i++){
    sum=sum+i;
  }
  cout<<"La suma de los N numeros naturales es: "<<sum<<endl;
  return 0;
}
