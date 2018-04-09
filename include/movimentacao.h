#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H

#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Movimentacao {
	private:
		string descricao;
		float valor;
		bool tipo;
	public:
		Movimentacao(string descricao, float valor, bool tipo);
		Movimentacao();
		~Movimentacao();

		void setDescricao(string descricao);
		void setValor(float valor);
		void setTipo(bool tipo);

		string getDescricao();
		float getValor();
		bool getTipo();

		friend ostream& operator<< (ostream &o, Movimentacao const _movimentacao);
};

#endif