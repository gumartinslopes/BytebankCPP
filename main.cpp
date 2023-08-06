#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Conta.hpp"
#include "Gerente.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

void mostrar_infos(Conta& c){
  cout << c.to_string() << endl;
} 

void login(Gerente &gerente_logando){
  if(gerente_logando.autentica("123 CPP")){
    cout << "Login realizado com sucesso" << endl;
  }
  else{
    cout << "Senha ou usuario invalido :(" << endl;
  }
}

int main(){
  // ContaPoupanca cp("123", Titular("Bob","123456789-02"));
  // ContaCorrente cc("321", Titular("Greg","123456789-03"));
  // cp.depositar(700);
  // cc.depositar(700);
  // cc.transfere(cp, 500);
  // mostrar_infos(cp);
  // mostrar_infos(cc);
  Gerente joe("Joe", "16113111102", 8000, "123 CPP",DiaDaSemana::Sexta);
  cout<< joe.get_bonificacao()<< endl;
  login(joe);
}