# biclustering
El nuevo enfoque de interés en el tema de la transcriptómica es la secuenciación masiva y profunda de RNAs, cuya técnica se denomina RNASeq. El principal objetivo de RNASeq es catalogar todos y cada uno de los transcritos (RNA) expresados por una célula en una condición específica. Para la interpretación funcional del gran conjunto de datos generados a través de RNASeq, se necesita un desarrollo paralelo de métodos computacionales. Sobre estos conjuntos de datos, los algoritmos de construcción de biclusters tratan de identificar asociaciones de genes y condiciones experimentales, donde los genes exhiben una alta correlación para cada condición dada. En el presente artículo describimos la utilización del algoritmo genético multi-objetivo, MOEA/D, para la identificación de biclusters significativos en datos de RNASeq.

Lenguaje de Programación	C++ v11

Biblioteca de apoyo utilizada	LEDA v6.3

Instrucciones de compilación utilizando qmake (solamente para incluir la dependencia a la biblioteca LEDA):

$ qmake -project
$ qmake Biclustering.pro
$ make

Ejecutar el programa:
$ ./Biclustering

