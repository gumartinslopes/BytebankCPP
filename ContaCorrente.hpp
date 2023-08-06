#pragma once
#include "Conta.hpp"
#include "Titular.hpp"
#include <string>

class ContaCorrente final: public Conta{
    public: 
        ContaCorrente(std::string numero, Titular titular);
        void sacar(float valor_saque) override;
        float get_taxa_saque()const;
        void transfere(Conta& destinatario,float valor);
};  