#ifndef MECANICOS_HPP
#define MECANICOS_HPP

#include <iostream>
#include "funcionarios.hpp"
#include "ordem_servico.hpp"
#include "vendedor.hpp"
#include <string>
#include <vector>
using namespace std;
class Vendedor;
class Mecanicos : public Funcionarios{
private:
    string ordemDeServico;
    vector<OrdemServico> ordensDeServico;

public:
    // Construtores
    Mecanicos();
    Mecanicos(string nome, string cpf, string ordemDeServico);

    // Getters e Setters
    
    string getOrdemDeServico() const;
    void setOrdemDeServico(const string& ordemDeServico);
    string getNome() const;
    void setNome(const string& nome);
    string getCpf() const;
    void setCpf(const string& cpf);
    // Outros métodos da classe
    void visualizarOrdensAbertas() const;
    void cadastrarServicosExecutados(int numeroOrdem, const string& servicosRealizados, double valorServicos, const string& pecasUtilizadas, double valorPecas, Vendedor& vendedor);
    void receberOrdemDeServico(OrdemServico& ordem);
    

};

#endif
