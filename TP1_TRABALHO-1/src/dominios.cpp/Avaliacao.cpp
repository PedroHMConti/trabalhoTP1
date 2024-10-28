#include "Avaliacao.hpp"
bool Avaliacao::validar(char valor){

    char caracteres[] = {'0','1','2','3','4','5'};

    for(int i = 0;i<sizeof(caracteres);i++){
        if(valor==caracteres[i]){
            return true;
        }
    }
}
bool Avaliacao::setValor(char valor){

    if(!validar(valor)){
        return false;
    }
    this->valor = valor;
    return true;
}

