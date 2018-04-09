#include "conta.h"

Conta::Conta(int agencia, int numero, float saldo, float limite, bool status) {
	this->agencia = agencia;
	this->numero = numero;
	this->saldo = saldo;
	this->limite = limite;
	this->status = status;
}

Conta::Conta() {
	agencia = 0;
	numero = 0;
	saldo = 0;
	limite = 0;
	status = -1;
}

Conta::~Conta() {}

void Conta::setAgencia(int agencia) {this->agencia = agencia;}
int Conta::getAgencia() {return agencia;}

void Conta::setNumero(int numero) {this->numero = numero;}
int Conta::getNumero() {return numero;}

void Conta::setSaldo(float saldo) {this->saldo = saldo;}
float Conta::getSaldo() {return saldo;}

void Conta::setLimite(float limite) {this->limite = limite;}
float Conta::getLimite() {return limite;}

void Conta::setStatus(bool status) {this->status = status;}
bool Conta::getStatus() {return status;}

ostream& operator<< (ostream &o, Conta const _conta) {
	o << _conta.agencia << "-" << _conta.numero << "\n"
	  << _conta.saldo << "\n";
	if (_conta.status) {
		o << _conta.limite << "\n"
		  << _conta.status << "\n";
	}
	o << "Número de movimentações: " << _conta.movimentacoes->size() << "\n";
	for (std::vector<Movimentacao>::iterator it = _conta.movimentacoes->begin(); it != _conta.movimentacoes->end(); it++) {
		o << *it << "\n";
	}

	return o;
}