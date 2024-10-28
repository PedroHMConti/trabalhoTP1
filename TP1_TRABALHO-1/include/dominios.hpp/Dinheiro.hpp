#ifndef DINHEIRO_HPP
#define DINHEIRO_HPP


class Dinheiro{
    private:
        double valor;
        bool validar(double);
    public:
        bool setValor(double);
        double getValor() const;

};
inline double Dinheiro::getValor()const{
    return valor;
}

#endif // DINHEIRO_HPP
