#ifndef SENHA_HPP
#define SENHA_HPP
#include<string>

class Senha
{
    private:
       std::string valor;
       bool validar(std::string);
    public:
        bool setValor(std::string);
        std::string getValor() const;
};
inline std::string Senha::getValor() const{
    return valor;
}

#endif // SENHA_HPP
