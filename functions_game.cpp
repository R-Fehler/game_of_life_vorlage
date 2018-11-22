#include "functions_game.h"

MatrixXi create_field2d(unsigned int nx,unsigned int ny){
}

void init_field2d(MatrixXi &field, const double frac){
}
void make_step(MatrixXi & field,MatrixXi  & field_tmp){
}

void plot_field(MatrixXi const & field, const unsigned int nstep){
  char Dateiname[256];
  ofstream Datei;

  const unsigned int nx = field.rows();
  const unsigned int ny = field.cols();


  sprintf(Dateiname,"field%d.dat",nstep);
  Datei.open(Dateiname);
  for(int i = 0;i<nx;i++){
    for(int j=0;j<ny;j++){
      Datei<<i<<" "<<j<<" "<<field(i,j)<<endl;
    }
    Datei<<endl;
  }
  Datei.close();
}

