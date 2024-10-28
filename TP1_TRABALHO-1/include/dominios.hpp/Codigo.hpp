#ifndef CODIGO_HPP
#define CODIGO_HPP
#include<string>

class Codigo
{
    private:
        std::string valor;
        bool validar(std::string);
    public:
        bool setValor(std::string);
        std::string getValor() const;

};
inline std::string Codigo::getValor()const{
    return valor;
}
#endif // CODIGO_HPP
