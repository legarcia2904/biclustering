#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>

const std::string FILE_TO_READ = "A.txt";
extern double **data; // Genetic expression matrix
const int ROWS = 42;
const int COLS = 3;

const int POPULATION_SIZE = 50;
const int NEIGHBORHOOD_SIZE =20;
const int LIMIT = 5; // maximal number of solutions updated
const int GENERATIONS = 300;
const int RUNS = 1;

const double MUTATION_PROB = 0.4;
const double CROSSOVER_PROB = 1.0;          // DON'T CHANGE THIS
const double RND_CHILD_1_SELECT_PROB = 0.5; // Child 2 prob is (this - 1)
const double MUTATE_GENES_PROB = 0.8;

extern double *idealpoint; // Ideal point used in decomposition method

#endif // GLOBAL_H
