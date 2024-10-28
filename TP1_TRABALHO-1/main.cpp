#include <iostream>
#include "Nome.hpp"

using namespace std;

int main()
{
    Nome din;

    if(din.setValor("10:20")){
        cout<<"Valor= "<<din.getValor()<<endl;
    }else{
        cout<<"valor invalido"<<endl;
    }


    if(din.setValor("0000000000000000000000000000000000000000000000000000000000000000000")){
        cout<<"Valor= "<<din.getValor()<<endl;
    }else{
        cout<<"valor invalido"<<endl;
    }

    return 0;
}


