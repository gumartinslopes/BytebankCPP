#include "Titular.hpp"
#include <string>
#include <iostream>

Titular::Titular(std::string nome, std::string cpf):Pessoa(nome, cpf)
{
};


std::string Titular::to_string(){
    std::string titular_str = "Nome: " + this->nome + "\n cpf: " + this->cpf;
    return titular_str;
}

std::string Titular::get_nome(){
    return this->nome;
}

std::string Titular::get_cpf(){
    return this->cpf;
}