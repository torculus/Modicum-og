#include "Graphics.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double myPlot(char *funct, double *bounds) {
    
    for (int i=0; funct[i]; i++) {
        funct[i] = tolower(funct[i]);
        
        if (funct[i] == '[') {
            funct[i] = '(';
        } else if (funct[i] == ']') {
            funct[i] = ')';
        } else if (funct[i] == '^') {
            funct[i] = '*';
        }
    }
    
    FILE *gplot = popen("gnuplot -persist", "w");
    
    fprintf(gplot, "set terminal wxt\n");
    fprintf(gplot, "set title \'%s\'\n", funct);
    fprintf(gplot, "set xrange [%f:%f]\n", bounds[0], bounds[1]);
    fprintf(gplot, "plot %s lw 3.5 linecolor rgb '0x4C6CA6'\n", funct);
    fflush(gplot);
    
    return 0;
}

double myGraphics(char *options, char *color) {
    
    for (int i=0; color[i]; i++) {
        color[i] = tolower(color[i]);
    }
    
    FILE *gplot = popen("gnuplot -persist", "w");
    fprintf(gplot, "set terminal wxt\n");
    
    if (strcmp(options, "Disk") == 0) {
        fprintf(gplot, "set object 1 circle at 0,0 size 5 fc rgb \"%s\" fill solid 1.0\n", color);
        fprintf(gplot, "plot 0\n");
    } else if (strcmp(options, "Circle") == 0) {
        fprintf(gplot, "set object 1 circle at 0,0 size 5\n");
        fprintf(gplot, "plot 0\n");
    }
    
    fflush(gplot);
    
    return 0;
}