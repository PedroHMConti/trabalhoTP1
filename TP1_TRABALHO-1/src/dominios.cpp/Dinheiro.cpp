#include "Dinheiro.hpp"

bool Dinheiro::validar(double valor){
    if(valor>=0.0 && valor<=200000.00){
        return true;
    }
}

bool Dinheiro::setValor(double valor){
    if(!validar(valor)){
        return false;
    }else{
        this->valor=valor;
        return true;
    }
}
