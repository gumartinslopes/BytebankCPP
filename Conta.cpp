#include "Conta.hpp"
#include "Titular.hpp"
#include <iostream>


// //construtor feito de forma padrão
// Conta::Conta(std::string numero, std::string cpf_titular, std::string nome_titular){
//     this->numero = numero;
//     this->cpf_titular = cpf_titular;
//     this->nome_titular = nome_titular;
//     this->saldo = 0;
// }

int Conta::quantidade_contas = 0;

// construtor utilizando initialization list
Conta::Conta(std::string numero, Titular titular):
    numero(numero),
    titular(titular),
    saldo(0)
{
    quantidade_contas++;
}

// Metodo destrutor
Conta::~Conta(){
    quantidade_contas--;
}

void Conta::sacar(float valor_saque){
    if (valor_saque < 0){
        std::cout << "Valor invalido de saque" << std::endl;
        return;
    }

    else if(valor_saque > saldo){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valor_saque;
}

std::string Conta::to_string(){
    std::string conta_str = "Numero: " + this->numero + "\n";
    conta_str += "Nome: " + this->titular.get_nome() + "\n";
    conta_str += "Saldo: " + std::to_string(this->saldo) + "\n";

    return conta_str; 
}

void Conta::depositar(float valor_deposito){
    this->saldo += valor_deposito;
}

std::string Conta::get_numero(){
    return this->numero;
}

Titular Conta::getTitular(){
    return this->titular;
}

float Conta::get_saldo(){
    return this->saldo;
}

int Conta::get_quantidade_conta(){
    return quantidade_contas;
}