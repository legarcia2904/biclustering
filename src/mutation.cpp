#include "mutation.h"
#include "global.h"
#include <algorithm>

Mutation::Mutation(double pm) { this->pm = pm; }

void Mutation::compute(Individual &child) {
  double rnd;
  R >> rnd;

  if (rnd <= pm) {

    double rnd2;
    R >> rnd2;

    // muta genes
    if (rnd2 <= MUTATE_GENES_PROB) {
      int gen;
      R.set_range(0, ROWS - 1);
      R >> gen;

      std::vector<int>::iterator it;
      it = std::find(child.Genes.begin(), child.Genes.end(), gen);

      if (it != child.Genes.end()) {
        // std::cout << gen << " already in child\n";
        child.Genes.erase(it);

        // si se queda vacio se agrega uno aleatorio
        if (child.Genes.empty()) {
          R >> gen;
          child.Genes.push_back(gen);
        }
      } else {
        child.Genes.push_back(gen);
      }
    }

    // muta condiciones
    else {
      int cond;
      R.set_range(0, COLS - 1);
      R >> cond;

      std::vector<int>::iterator it;
      it = std::find(child.Conditions.begin(), child.Conditions.end(), cond);

      if (it != child.Conditions.end()) {
        child.Conditions.erase(it);

        // si se queda vacio agrega uno aleatorio
        if (child.Conditions.empty()) {
          R >> cond;
          child.Conditions.push_back(cond);
        }
      } else {
        child.Conditions.push_back(cond);
      }
    }
  }
}
