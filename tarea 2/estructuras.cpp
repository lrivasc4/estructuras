//
//  main.cpp
//  tarea 2
//
//  Created by Luis Rivas on 21/02/24.
//

#include <iostream>
using namespace std;

/*
int main(){
    int num=0;
    cout<<"Ingrese el numero: ";
    cin>>num;
    if(num>0){
        cout<<"Positivo"<<endl;
    }
    else{
        if(num==0){
            cout<<"Neutro"<<endl;
        }else{
            cout<<"Negativo"<<endl;
        }
        
        return 0;
    }
}



int main(){
    string pais= "";
    cout<<"Ingrese el pais; ";
    cin>>pais;
    if(pais=="guatemala"){
        cout<<" yo soy de "<<pais<<" mi pais"<<endl;
    }else{
        cout<<pais<<endl;
    }
}
///

int main(){
    int num=0;
    cout<<"Ingrese Numero: ";
    cin>>num;
    
    if ((num%2)==0){
        cout<<"Par"<<endl;
    }else{
        cout<<"Impar"<<endl;
    }
    
}


int main(){
    
    char lapiz,lapicero,cuaderno;
    
    cout<<"trae lapiz (s/n):";
    cin>>lapiz;
    cout<<"trae lapicero (s/n):";
    cin>>lapicero;
    cout<<"trae cuaderno (s/n):";
    cin>>cuaderno;
    
    if((lapiz=='s' || lapicero=='s') && cuaderno =='s'){
        cout<<"Ingresa"<<endl;
        
    }
    else{
        cout<<"Losiento no puede ingresar"<<endl;
        
    }
    return 0;
}

int main(){
    int codigo=0;
    cout<<"ingrese codigo de area:";
    cin>>codigo;
    switch(codigo){
        case 502 :
            cout<<"Guatemala"<<endl;
            break;
        case 501 :
            cout<<"Belice"<<endl;
            break;
        case 503 :
            cout<<"El Salvador"<<endl;
            break;
        case 504 :
            cout<<"Honduras"<<endl;
            break;
        case 505 :
            cout<<"Nicaragua"<<endl;
            break;
        case 506 :
            cout<<"Costa Rica"<<endl;
            break;
        case 507 :
            cout<<"Panama"<<endl;
            break;
        default :
            cout<<"Este codigo no es de centroamerica"<<endl;
    }
    return 0;
}
//*///
