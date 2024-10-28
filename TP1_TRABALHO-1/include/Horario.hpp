#ifndef HORARIO_HPP
#define HORARIO_HPP
#include <string>

class Horario{
    private:
        std::string valor;
        bool validar(std::string);
    public:
        bool setValor(std::string);
        std::string getValor() const;
};
inline std::string Horario::getValor() const{
    return valor;

}

#endif // HORARIO_HPP
