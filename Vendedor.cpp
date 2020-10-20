#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
  double quotaMensalVendas; 
   

  public:
  	
  double getquotaMensalVendas ()const{return quotaMensalVendas;}
  void setquotaMensalVendas(double quota_mensal){this->quotaMensalVendas=quota_mensal;}

  double quotaTotalAnual(){
  	
       return getquotaMensalVendas() *12;
}
};
  	
	


