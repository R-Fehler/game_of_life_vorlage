#include "functions_game.h"

MatrixXi create_field2d(unsigned int nx, unsigned int ny) {
  MatrixXi m = MatrixXi::Zero(nx, ny);
}

void init_field2d(MatrixXi &field, const double frac) {
  // solange die summe der koeff. / die anzahl der koeff. kleiner als frac ist
  // setze ein zufalliges feld der matrix = 1
  while (field.sum() / field.size() < frac) {
    field(rand() % field.rows(), rand() % field.cols()) = 1;
  }
  // Z.B. rand()%nx -> zufällige Zahl zwischen 0 und nx-1
}
void make_step(MatrixXi &field, MatrixXi &field_tmp) {
  // aufsummieren der nachbarn ueber schleife. .sum() von .block()
  // geht nicht denke ich da periodische randbedingungen...
  // Regeln des Games hier implementieren.
  // if zelle==1{

  // if anzahl nachbarn <=1 --> Zelle=0
  // if (anzahl nachbarn >=2 AND anzahl nachbarn <=3)
  //
  // if anzahl nachbarn >=4 --> Zelle=0
  //}
  // if zelle ==0 AND anzahl nachbarn==3 ; zelle =1;
}

void plot_field(MatrixXi const &field, const unsigned int nstep) {
  char Dateiname[256];
  ofstream Datei;

  const unsigned int nx = field.rows();
  const unsigned int ny = field.cols();

  sprintf(Dateiname, "field%d.dat", nstep);
  Datei.open(Dateiname);
  for (int i = 0; i < nx; i++) {
    for (int j = 0; j < ny; j++) {
      Datei << i << " " << j << " " << field(i, j) << endl;
    }
    Datei << endl;
  }
  Datei.close();
}
