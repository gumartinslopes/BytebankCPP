#pragma once
#include "Pessoa.hpp"
#include <string>
class Titular:public Pessoa{
    public:
        Titular(std::string nome,std::string cpf);
        std::string to_string();
        std::string get_nome();
        std::string get_cpf();
    private:
        void verifica_tamanho_nome();
};