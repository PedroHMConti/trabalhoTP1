#ifndef DURACAO_HPP
#define DURACAO_HPP

class Duracao{
    private:
        int valor;
        bool validar(int);
    public:
        bool setValor(int);
        int getValor() const;
};

inline int Duracao::getValor() const{
    return valor;
}

#endif // DURACAO_HPP
