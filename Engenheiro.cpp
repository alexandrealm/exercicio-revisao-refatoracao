#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
      
	int projetos;	


  public:
  	int getprojetos ()const{return projetos;}
    void setprojetos(int proj){this->projetos=proj;}

};