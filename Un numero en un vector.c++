//busqueda secuencial.
//determinar si un numero se encuentra en el vector.
//[1,2,3,4,5,6,7,8,9,10,11,12,13,14]
#include<iostream>
using namespace std;
int main ()
{
    int n= 10;
    int i,x,num, vector[n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14}
    i = 0;
    x=-1;
    cout<< "ingresa el numero a buscar:"; cin>> num;
    while (i<n-1 yy x == -1)
    {
        if (num==vector [i]){
           x-i;   
        }
        ++i;

    }
    if(x ==-1){
        cout<< "el numero"<<num<<"no se encuentra en el vector";
    }
    else{
        cout<<"el numero"<<num"se encuetra en la posicion" <<x+1;

    }
        
    }
    return 0;
}