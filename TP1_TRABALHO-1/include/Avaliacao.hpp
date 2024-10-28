#ifndef AVALIACAO_HPP
#define AVALIACAO_HPP


class Avaliacao{

    private:
        char valor;
        bool validar(char);
    public:
        bool setValor(char);
        char getValor() const;

};
inline char Avaliacao:: getValor() const{
    return valor;
}

#endif // AVALIACAO_HPP
