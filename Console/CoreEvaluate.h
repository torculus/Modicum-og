#ifndef CORE_EVALUATE_H
#define CORE_EVALUATE_H

double myNullaryEval(char *funct);
double myEvaluate(char *funct, double args[]);
double myCompToNum(char *funct, double _Complex z);

void myDisplay(int n, double d);
void myListDisplay(int n, double *list);
void myArrayDisplay(int n, double array[10][10]);
void myComplexDisplay(int n, double _Complex d);

double mySpecialEval(char *funct, char *args, double *list);
double myListToNum(char *funct, double args[]);

double *myListEval(char *funct, double args[]);

#endif