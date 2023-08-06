#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):
    Conta(numero, titular)
{};

void ContaPoupanca::sacar(float valor_saque){
    if (valor_saque < 0){
        std::cout << "Valor invalido de saque" << std::endl;
        return;
    }

    else if(valor_saque > saldo){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    float total_saque = valor_saque + valor_saque * get_taxa_saque();
    saldo -= total_saque;
}

float ContaPoupanca::get_taxa_saque()const{
    return 0.05;
}