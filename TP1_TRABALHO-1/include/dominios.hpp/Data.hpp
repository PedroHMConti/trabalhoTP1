#ifndef DATA_HPP
#define DATA_HPP
#include <string>


class Data{
    private:
        std::string valor;
        bool validar(std::string);

    public:
        bool setValor(std::string);
        std::string getValor()const;
};
inline  std::string Data::getValor()const{
    return valor;
}

#endif // DATA_HPP
