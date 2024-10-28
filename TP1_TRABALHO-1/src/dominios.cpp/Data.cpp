#include "Data.hpp"


//recebe data da seguinte forma :dd-mm-aa


//separar a string em substrings usando "valor".substr()
bool Data::validar(std::string valor){
    std::string diaStr = valor.substr(0,2);
    std::string mesStr = valor.substr(3,2);
    std::string anoStr = valor.substr(6,2);

    //transformando string em int para validar

    int dia = std::stoi(diaStr);
    int mes = std::stoi(mesStr);
    int ano = std::stoi(anoStr);

    //definir ano bisexto
    std::string anosBissextos[] = {"00", "04", "08", "12", "16", "20", "24", "28", "32", "36", "40", "44", "48", "52", "56", "60", "64", "68", "72", "76", "80", "84", "88", "92", "96"}
;
    if(ano>=0 && ano<=99){     //valida ano
        if((mes==1 || mes == 3 || mes == 5 || mes == 7 || mes==8 ||mes == 10 || mes==12) &&(dia>=1 &&dia<=31)){
          return true;
        }
        else if((mes==4 || mes == 6 || mes == 9 || mes == 11) &&(dia>=1 &&dia<=30)){
            return true;
        }
        else if(mes==2){
            for(int i=0;i<sizeof(anosBissextos);i++){
                if(anoStr==anosBissextos[i] && (dia>=1 && dia<=29)){
                    return true;
                }else if(dia>=1 &&dia<=28){
                    return true;
                }
            }
        }
    }
}

bool Data::setValor(std::string valor){
    if(!validar(valor)){
        return false;
    }
    this->valor=valor;
    return true;

}

