#include "Nome.hpp"
bool Nome::validar(std::string valor){
    if(valor.size()<= 30){
        return true;
    }
}

bool Nome::setValor(std::string valor){
    if(!validar(valor)){
        return false;
    }else{
        this->valor=valor;
        return true;
    }

}
