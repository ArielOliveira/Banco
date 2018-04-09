#ifndef CONTA_H
#define CONTA_H

#include "movimentacao.h"

#include <vector>
using std::vector;

#include <ostream>
using std::ostream;

class Conta {
	private:
		int agencia;
		int numero;

		float saldo;
		float limite;

		bool status;

		vector<Movimentacao> *movimentacoes;

	public:
		Conta(int agencia, int numero, float saldo, float limite, bool status);
		Conta();
		~Conta();

		void setAgencia(int agencia);
		int getAgencia();

		void setNumero(int numero);
		int getNumero();

		void setSaldo(float saldo);
		float getSaldo();

		void setLimite(float limite);
		float getLimite();

		void setStatus(bool status);
		bool getStatus();

		friend ostream& operator<< (ostream &o, Conta const _conta);

};

#endif