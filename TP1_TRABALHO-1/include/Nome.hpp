#ifndef NOME_HPP
#define NOME_HPP
#include <string>


class Nome{
    private:
      std::string valor;
      bool validar(std::string);
    public:
        bool setValor(std::string);
        std::string getValor() const;
};
inline std::string Nome::getValor() const{
    return valor;
}

#endif // NOME_HPP
