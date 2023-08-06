#include "Autenticavel.hpp"
#include <string>

Autenticavel::Autenticavel(std::string senha):
    senha(senha)
{
};

bool Autenticavel::autentica(std::string senha_entrada){
    return  senha_entrada == this->senha;
}