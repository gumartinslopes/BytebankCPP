#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente:public Funcionario, public Autenticavel{
    private:
        float bonificacao;
    public:
        Gerente(std::string nome, std::string cpf, float salario, std::string senha, DiaDaSemana dia_pagamento);
        float get_bonificacao() const;
};