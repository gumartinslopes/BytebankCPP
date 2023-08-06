#pragma once
#include "Pessoa.hpp"
#include "DiaDaSemana.hpp" 
#include <string>
class Funcionario: public Pessoa{
    private:
        float salario;
        DiaDaSemana dia_pagamento;
    public:
        Funcionario(std::string nome, std::string cpf, float salario, DiaDaSemana dia_pagamento);
        float get_salario() const;
};