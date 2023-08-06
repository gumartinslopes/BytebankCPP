#include "Funcionario.hpp"
#include <string>

Funcionario::Funcionario(std::string nome, std::string cpf, float salario, DiaDaSemana dia_pagamento):
    Pessoa(nome, cpf),
    dia_pagamento(dia_pagamento),
    salario(salario)
{
    
};

float Funcionario::get_salario()const{
    return this->salario;
}