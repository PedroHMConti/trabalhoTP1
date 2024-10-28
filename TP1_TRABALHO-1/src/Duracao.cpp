#include "Duracao.hpp"


bool Duracao::validar(int valor){
    if(valor>=0 && valor<=360){
        return true;
    }
}

bool Duracao::setValor(int valor){
    if(!validar(valor)){
        return false;
    }else{
        this->valor = valor;
        return true;
    }

}
