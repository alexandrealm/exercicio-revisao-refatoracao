#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;
    std::string nome;
    
  public:
  	double getsalarioHora()const{return salarioHora;}
  	void setsalarioHora(double salario){this->salarioHora=salario;}
  	
  	std::string getnome()const{return nome;}
    void setnome(std::string Nome) {this->nome = Nome;}
  	
    double pagamentoMes(double horasTrabalhadas) {
    double tempo = horasTrabalhadas;
	  
	   	 //Calculo de hora extra (+50% se horasTrabalhadas > 8)
	  
  		 if (horasTrabalhadas > 8) {
      	
  	   double hora_extra = horasTrabalhadas - 8;
        
        tempo += hora_extra * pagamento_extra;
}
      
	  return tempo * getsalarioHora();
}
    double const pagamento_extra=0.5;
};
	
#endif