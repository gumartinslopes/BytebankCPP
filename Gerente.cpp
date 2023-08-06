#include "Gerente.hpp"
#include <string>
#include "DiaDaSemana.hpp"

Gerente::Gerente(std::string nome, std::string cpf, float salario, std::string senha, DiaDaSemana dia_pagamento):
Funcionario(nome, cpf, salario, dia_pagamento),Autenticavel(senha) 
{
};

float Gerente::get_bonificacao()const{
    return 0.5;
}