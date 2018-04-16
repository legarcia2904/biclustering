#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "global.h"
#include <LEDA/core/random.h>
#include <iostream>
#include <math.h>
#include <vector>

class Individual {
public:
  Individual();
  virtual ~Individual();

  leda::random_source R;
  std::vector<int> Genes;
  std::vector<int> Conditions;
  std::vector<std::vector<double>> bicl;
  int r, c;
  double f1_MSR;
  int f2_size;
  double delta;
  bool dominated;

  void rnd_init();
  void generateRandom();
  void shuffle(std::vector<int> &vec, const int limit);
  void evaluate();
  double MSR();
  int size();
  bool isFeasible();
  Individual *makeCopy();
  void update();

  // dominance
  bool operator<(const Individual &y);


  void operator=(const Individual &ind2);

  bool operator==(const Individual &ind2);
};

#endif // INDIVIDUAL_H
