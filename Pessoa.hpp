#pragma once
#include <string>

class Pessoa{
    protected:
        std::string cpf;
        std::string nome;
    public:
        Pessoa(std::string cpf, std::string nome);
    private:
        void verifica_tamanho_nome();
};