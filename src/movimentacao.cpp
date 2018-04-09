#include "movimentacao.h"

Movimentacao::Movimentacao(string descricao, float valor, bool tipo) {
	this->descricao = descricao;
	this->valor = valor;
	this->tipo = tipo;
}

Movimentacao::Movimentacao() {
	descricao = "";
	valor = 0;
	tipo = -1;
}

Movimentacao::~Movimentacao() {}

void Movimentacao::setDescricao(string descricao) {this->descricao = descricao;}
void Movimentacao::setValor(float valor) {this->valor = valor;}
void Movimentacao::setTipo(bool tipo) {this->tipo = tipo;}

string Movimentacao::getDescricao() {return descricao;}
float Movimentacao::getValor() {return valor;}
bool Movimentacao::getTipo() {return tipo;}

ostream& operator<< (ostream &o, Movimentacao const _movimentacao) {
	o << _movimentacao.descricao << "\n"
	  << _movimentacao.valor << "\n"
	  << _movimentacao.tipo << "\n";

	return o;
}