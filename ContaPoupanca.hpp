#pragma once
#include "Conta.hpp"
#include "Titular.hpp"
#include <string>

class ContaPoupanca final: public Conta{
    public: 
        ContaPoupanca(std::string numero, Titular titular);
        void sacar(float valorSaque) override;
        float get_taxa_saque()const;
};  