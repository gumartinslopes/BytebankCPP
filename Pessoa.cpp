#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(std::string nome, std::string cpf):
    nome(nome),
    cpf(cpf)
{
    verifica_tamanho_nome();
};

void Pessoa::verifica_tamanho_nome(){
    if (this->nome.size() < 1){
        std::cout << "Tamanho de nome invalido!" << std::endl;
        exit(1);
    }
}