#include <stdio.h>
#include <tgmath.h>
#include <string.h>
#include <stdbool.h>
#include <complex.h>
/*#include <Python.h>*/
#include "CoreEvaluate.h"
#include "Graphics.h"
#include "Trig.h"

void myAlert(char *funct, double args[], int n);

/* Check out http://functions.wolfram.com for more formulas and ideas for implementation */

double myNullaryEval(char *funct) {
    if (funct[0] == 'B') {
        if (strcmp(funct, "Beep") == 0) {
            fprintf(stderr, "\a");
            return 0;
        } else {
            return 0;
        }
    } else if (funct[0] == 'Z') {
        return 0;
    } else {
        return 0;
    }
}

double myEvaluate(char *funct, double args[]) {
    /*FILE *file = fopen("external.py", "r");
    Py_Initialize();*/
    
    if (funct[0] == 'A') {
        if (strcmp(funct, "Abs") == 0) {
            myAlert(funct, args, 1);
            return fabs(args[0]);
        } else if (strcmp(funct, "And") == 0) {
            double result = true;
            for (int i=0; args[i]; i++) {
                result = result && args[i];
            }
            return result;
        } else if (strcmp(funct, "ArcCos") == 0) {
            myAlert(funct, args, 1);
            return myArcCos(args[0]);
        } else if (strcmp(funct, "ArcCosh") == 0) {
            myAlert(funct, args, 1);
            return acosh(args[0]);
        } else if (strcmp(funct, "ArcCot") == 0) {
            myAlert(funct, args, 1);
            return atan(1/args[0]);
        } else if (strcmp(funct, "ArcCoth") == 0) {
            myAlert(funct, args, 1);
            return atanh(1/args[0]);
        } else if (strcmp(funct, "ArcCsc") == 0) {
            myAlert(funct, args, 1);
            return asin(1/args[0]);
        } else if (strcmp(funct, "ArcCsch") == 0) {
            myAlert(funct, args, 1);
            return asinh(1/args[0]);
        } else if (strcmp(funct, "ArcSec") == 0) {
            myAlert(funct, args, 1);
            return acos(1/args[0]);
        } else if (strcmp(funct, "ArcSech") == 0) {
            myAlert(funct, args, 1);
            return acosh(1/args[0]);
        } else if (strcmp(funct, "ArcSin") == 0) {
            myAlert(funct, args, 1);
            return myArcSin(args[0]);
        } else if (strcmp(funct, "ArcSinh") == 0) {
            myAlert(funct, args, 1);
            return asinh(args[0]);
        } else if (strcmp(funct, "ArcTan") == 0) {
            myAlert(funct, args, 1);
            return atan(args[0]);
        } else if (strcmp(funct, "ArcTanh") == 0) {
            myAlert(funct, args, 1);
            return atanh(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'B') {
        if (strcmp(funct, "BooleanQ") == 0) {
            myAlert(funct, args, 1);
            return (args[0] == 0 || 1) ? 1: 0;
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'C') {
        if (strcmp(funct, "Ceiling") == 0) {
            myAlert(funct, args, 1);
            return ceil(args[0]);
        } else if (strcmp(funct, "Cos") == 0) {
            myAlert(funct, args, 1);
            return myCos(args[0]);
        } else if (strcmp(funct, "Cosh") == 0) {
            myAlert(funct, args, 1);
            return cosh(args[0]);
        } else if (strcmp(funct, "Cot") == 0) {
            myAlert(funct, args, 1);
            return myCot(args[0]);
        } else if (strcmp(funct, "Coth") == 0) {
            myAlert(funct, args, 1);
            return 1/tanh(args[0]);
        } else if (strcmp(funct, "Csc") == 0) {
            myAlert(funct, args, 1);
            return myCsc(args[0]);
        } else if (strcmp(funct, "Csch") == 0) {
            myAlert(funct, args, 1);
            return 1/sinh(args[0]);
        } else if (strcmp(funct, "CubeRoot") == 0) {
            myAlert(funct, args, 1);
            return cbrt(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'D') {
        return 0;
    } else if (funct[0] == 'E') {
        if (strcmp(funct, "Erf") == 0) {
            myAlert(funct, args, 1);
            return erf(args[0]);
        } else if (strcmp(funct, "Erfc") == 0) {
            myAlert(funct, args, 1);
            return erfc(args[0]);
        } else if (strcmp(funct, "Exp") == 0) {
            myAlert(funct, args, 1);
            return exp(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'F') {
        if (strcmp(funct, "Factorial") == 0) {
            myAlert(funct, args, 1);
            return tgamma(creal(args[0]) + 1);
        } else if (strcmp(funct, "Floor") == 0) {
            myAlert(funct, args, 1);
            return floor(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'G') {
        if (strcmp(funct, "Gamma") == 0) {
            myAlert(funct, args, 1);
            return tgamma(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'H') {
        if (strcmp(funct, "Haversine") == 0) {
            return 0.5*(myCos(args[0])-1);
        }
        return 0;
    } else if (funct[0] == 'I') {
        return 0;
    } else if (funct[0] == 'J') {
        return 0;
    } else if (funct[0] == 'K') {
        return 0;
    } else if (funct[0] == 'L') {
        if (strcmp(funct, "Log") == 0) {
            myAlert(funct, args, 2);
            if (args[1])
                return log(args[1])/log(args[0]);
            else
                return log(args[0]);
        } else if (strcmp(funct, "Log2") == 0) {
            myAlert(funct, args, 1);
            return log2(args[0]);
        } else if (strcmp(funct, "Log10") == 0) {
            myAlert(funct, args, 1);
            return log10(args[0]);
        } else {
            return 0;
        }
    } else if (funct[0] == 'M') {
        if (strcmp(funct, "Max") == 0) {
	    double benchmark;
            for (int i=0; args[i]; i++) {
		if (args[i] >= benchmark)
		    benchmark = args[i];
	    }
	    return benchmark;
	} else if (strcmp(funct, "Min") == 0) {
	    double benchmark;
	    for (int i=0; args[i]; i++) {
		if (args[i] <= benchmark)
		    benchmark = args[i];
	    }
	    return benchmark;
	} else {
	    return 0;
	}
    } else if (funct[0] == 'N') {
        if (strcmp(funct, "Nor") == 0) {
            for (int i=0; args[i]; i++) {
                if (args[i] == true) {
                    return false;
                }
            }
            return true;
        } else if (strcmp(funct, "Not") == 0) {
            myAlert(funct, args, 1);
            return !args[0];
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'O') {
        return 0;
    } else if (funct[0] == 'P') {
        if (strcmp(funct, "Plus") == 0) {
            double result = 0;
            for (int i=0; args[i]; i++) {
                result += args[i];
            }
            return result;
        } else if (strcmp(funct, "Power") == 0) {
            myAlert(funct, args, 2);
            return pow(args[0], args[1]);
        } else if (strcmp(funct, "Print") == 0) {
            return args[0];
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'Q') {
        return 0;
    } else if (funct[0] == 'R') {
        if (strcmp(funct, "Round") == 0) {
            myAlert(funct, args, 1);
            return round(args[0]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'S') {
        if (strcmp(funct, "Sec") == 0) {
            myAlert(funct, args, 1);
            return mySec(args[0]);
        } else if (strcmp(funct, "Sech") == 0) {
            myAlert(funct, args, 1);
            return 1/cosh(args[0]);
        } else if (strcmp(funct, "Sign") == 0) {
            myAlert(funct, args, 1);
            return mySign(args[0]);
        } else if (strcmp(funct, "Sin") == 0) {
            myAlert(funct, args, 1);
            return mySin(args[0]);
        } else if (strcmp(funct, "Sinc") == 0) {
            myAlert(funct, args, 1);
            if (args[0] != 0)
                return mySin(args[0])/args[0];
            else
                return 1;
        } else if (strcmp(funct, "Sinh") == 0) {
            myAlert(funct, args, 1);
            return sinh(args[0]);
        } else if (strcmp(funct, "Sqrt") == 0) {
            myAlert(funct, args, 1);
            return sqrt(args[0]);
        } else if (strcmp(funct, "Surd") == 0) {
            myAlert(funct, args, 2);
            return pow(args[0], 1/args[1]);
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'T') {
        if (strcmp(funct, "Tan") == 0) {
            myAlert(funct, args, 1);
            return myTan(args[0]);
        } else if (strcmp(funct, "Tanh") == 0) {
            myAlert(funct, args, 1);
            return tanh(args[0]);
        } else if (strcmp(funct, "Times") == 0) {
            double result = 1;
            for (int i=0; args[i]; i++) {
                result *= args[i];
            }
            return result;
        } else {
            return 0;
        }
        
    } else if (funct[0] == 'U') {
        return 0;
    } else if (funct[0] == 'V') {
        return 0;
    } else if (funct[0] == 'W') {
        return 0;
    } else if (funct[0] == 'X') {
        if (strcmp(funct, "Xor") == 0) {
            for (int i=0; args[i]; i++) {
                return NAN;
            }
        } else if (strcmp(funct, "Xtest") == 0) {
            for (int i=0; args[i]; i++) {
                fprintf(stderr, "Args[%d] = %.10g\n", i, args[i]);
            }
            
            return args[1];
        } else {
            return 0;
        }

    } else if (funct[0] == 'Y') {
        if (strcmp(funct, "Yes") == 0) {
            /*PyRun_SimpleFile(file, "external.py");
            Py_Finalize();*/
	    return 0;
        } else {
            return 0;
        }
    } else if (funct[0] == 'Z') {
        return 0;
    } else {
        fprintf(stderr, "Sorry, that isn't a builtin function\n");
        return 0;
    }
    
}

/***************************************************************************/

double myCompToNum(char *funct, double _Complex z) {
    if (funct[0] == 'A') {
        if (strcmp(funct, "Abs") == 0) {
            return sqrt(pow(creal(z),2) + pow(cimag(z),2));
        } else  if (strcmp(funct, "Arg") == 0) {
            double list[1];
            list[0] = (double) creal(z)/myCompToNum("Abs", z);
            return myEvaluate("ArcCos", list);
        } else {
            return 0;
        }
    } else if (funct[0] == 'E') {
        if (strcmp(funct, "Exp") == 0) {
            return exp(z);
        } else {
            return 0;
        }
    } else if (funct[0] == 'I'){
        if (strcmp(funct, "Im") == 0) {
            return cimag(z);
        } else {
            return 0;
        }
    } else if (funct[0] == 'R') {
        if (strcmp(funct, "Re") == 0) {
            return creal(z);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

/***************************************************************************/

double mySpecialEval(char *funct, char *args, double *list) {
    if (funct[0] == 'P') {
        if (strcmp(funct, "Plot") == 0) {
            myPlot(args, list);
            return 0;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

/***************************************************************************/

double myListToNum(char *funct, double args[]) {
    if (funct[0] == 'L') {
        if (strcmp(funct, "Length") == 0) {
            int count = 0;
            for (int i=0; args[i]; i++) {
                count = i+1;
            }
            return (double)count;
        } else {
            return 0;
        }
    } else if (funct[0] == 'M') {
        if (strcmp(funct, "Max") == 0) {
            double benchmark = args[0];
            for (int i=0; args[i]; i++) {
                if (args[i] > benchmark) {
                    benchmark = args[i];
                }
            }
            return benchmark;
        } else if (strcmp(funct, "Mean") == 0) {
            return myListToNum("Total", args)/myListToNum("Length", args);
        } else if (strcmp(funct, "Min") == 0) {
            double benchmark = args[0];
            for (int i=0; args[i]; i++) {
                if (args[i] < benchmark) {
                    benchmark = args[i];
                }
            }
            return benchmark;
        } else {
            return 0;
        }
    } else if (funct[0] == 'S') {
        if (strcmp(funct, "StandardDeviation") == 0) {
            return sqrt(myListToNum("Variance", args));
        } else {
            return 0;
        }
    } else if (funct[0] == 'T') {
        if (strcmp(funct, "Total") == 0) {
            double result = 0;
            for (int i=0; args[i]; i++) {
                result += args[i];
            }
            return result;
        } else {
            return 0;
        }
    } else if (funct[0] == 'V') {
        if (strcmp(funct, "Variance") == 0) {
            double mean = myListToNum("Mean", args);
            double length = myListToNum("Length", args);
            double result = 0;
            for (int i=0; args[i]; i++) {
                result += (args[i] - mean)*(args[i] - mean);
            }
            return result/(length-1);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

/***************************************************************************/

double *myListEval(char *funct, double args[]) {
    
    static double *output;
    
    for (int i=0; i<10; i++) {
        output[i] = args[i];
    }
    
    if (funct[0] == 'A') {
        if (strcmp(funct, "Arrange") == 0) {
            return output;
        } else {
            return args;
        }
    } else  if (funct[0] == 'R') {
        if (strcmp(funct, "Reverse") == 0) {
            for (int i = 10, j=0; i >= 0; i--, j++) {
                output[j] = args[i];
            }
            return output;
        } else {
            return args;
        }
    } else {
        return args;
    }
}

/***************************************************************************/
/***************************************************************************/
/***************************************************************************/
/***************************************************************************/

void myDisplay(int n, double d) {
    fprintf(stderr, "\nOut[%d]:= %.10g\n\n", n, d);
}

/***************************************************************************/

void myComplexDisplay(int n, double _Complex d) {
    
    if (cimag(d) < 0) {
        fprintf(stderr, "\nOut[%d]:= %.10g - %.10g I\n\n", n, creal(d), -cimag(d));
    } else if (cimag(d) == 0) {
        fprintf(stderr, "\nOut[%d]:= %.10g\n\n", n, creal(d));
    } else if (cimag(d) == 1) {
        fprintf(stderr, "\nOut[%d]:= %.10g + I\n\n", n, creal(d));
    } else {
        fprintf(stderr, "\nOut[%d]:= %.10g + %.10g I\n\n", n, creal(d), cimag(d));
    }
}

/***************************************************************************/

void myListDisplay(int n, double *list) {
    
    fprintf(stderr, "\nOut[%d]:= {%.10g", n, list[0]);
    
    for (int i=1; i<10; i++) {
        fprintf(stderr, ", %.10g", list[i]);
    }
    
    fprintf(stderr, "}\n\n");
}

/***************************************************************************/

void myArrayDisplay(int n, double array[10][10]) {
    fprintf(stderr, "\nOut[%d]:= \n", n);
    
    fprintf(stderr, "{");
    for (int i=0; i<10; i++) {
        fprintf(stderr, "{%.10g", array[i][0]);
        for (int j=1; j<10; j++) {
            fprintf(stderr, ", %.10g", array[i][j]);
        }
        fprintf(stderr, "}\n");
    }
    fprintf(stderr, "}\n\n");
}

/***************************************************************************/

void myAlert(char *funct, double args[], int n) {
    if (args[n]) {
        if (n == 1) {
            fprintf(stderr, "\nError, \"%s\" only takes %d argument\n", funct, n);
        } else {
            fprintf(stderr, "\nError, \"%s\" only takes %d arguments\n", funct, n);
        }
    }
}
