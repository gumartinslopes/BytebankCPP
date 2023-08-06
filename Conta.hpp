#pragma once 
#include "Titular.hpp"
#include <string>

class Conta{
    protected:
        std::string numero;
        Titular titular;
        float saldo;
        static int quantidade_contas;

    public: 
        Conta(std::string numero, Titular titular);
        virtual ~Conta();
        virtual void sacar(float valor_saque);
        void depositar(float valor_deposito);

        std::string to_string();
        
        std::string get_numero();
        Titular getTitular();
        float get_saldo();
    
        static int get_quantidade_conta();    
        virtual float get_taxa_saque() const = 0;
    protected:
        void verifica_tamanho_nome();
};