#include "Horario.hpp"


bool Horario::validar(std::string valor){
    if(valor[2]==':'){
        std::string hhStr = valor.substr(0,2);
        std::string mmStr = valor.substr(3,2);


        int hh = std::stoi(hhStr);
        int mm = std::stoi(mmStr);

        if((hh>=0 && hh<=23) && (mm>=0 &&mm<=59)){
            return true;
        }
    }

}

bool Horario::setValor(std::string valor){
    if(!validar(valor)){
        return false;
    }else{
        this->valor = valor;
        return true;
    }
}
