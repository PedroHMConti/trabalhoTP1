#include "Codigo.hpp"
bool Codigo::validar(std::string valor){
    std::string caracteresPermitidos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    for(int i = 0;i<6;i++){
        if (caracteresPermitidos.find(valor[i]) == std::string::npos && sizeof(valor)!=6) {
            return false;
        }
    }
}
bool Codigo::setValor(std::string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;

}
