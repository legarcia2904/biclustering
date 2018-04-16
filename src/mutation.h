#ifndef MUTATION_H
#define MUTATION_H

#include "individual.h"

class Mutation {
public:
  Mutation(double pm);
  void compute(Individual &child);

  double pm;
  leda::random_source R;
};

#endif // MUTATION_H
