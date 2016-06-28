#include "Trig.h"
#include <tgmath.h>

double mySin(double x) {
    
    double xMod2Pi = fmod(x, 2*M_PI);
    
    if (xMod2Pi == 0) {
        return 0;
    } else if (xMod2Pi == M_PI/2) {
        return 1;
    } else if (xMod2Pi == M_PI) {
        return 0;
    } else if (xMod2Pi == 3*M_PI/2) {
        return -1;
    } else {
        return sin(x);
    }
}

double myArcSin(double x) {
    
    if (x < -1 || x > 1) {
        return NAN;
    } else {
        return asin(x);
    }
}

double myArcSinh(double x) {
    
    if (x < -1 || x > 1) {
        return NAN;
    } else {
        return asinh(x);
    }
}

double myCsc(double x) {
    
    double xMod2Pi = fmod(x, 2*M_PI);
    
    if (xMod2Pi == 0) {
        return NAN;
    } else if (xMod2Pi == M_PI/2) {
        return 1;
    } else if (xMod2Pi == M_PI) {
        return NAN;
    } else if (xMod2Pi == 3*M_PI/2) {
        return -1;
    } else {
        return 1/sin(x);
    }
}

/************************************************************/

double myCos(double x) {
    
    double xMod2Pi = fmod(x, 2*M_PI);
    
    if (xMod2Pi == 0) {
        return 1;
    } else if (xMod2Pi == M_PI/2) {
        return 0;
    } else if (xMod2Pi == M_PI) {
        return -1;
    } else if (xMod2Pi == 3*M_PI/2) {
        return 0;
    } else {
        return cos(x);
    }
}


double myArcCos(double x) {
    
    if (x < -1 || x > 1) {
        return NAN;
    } else {
        return acos(x);
    }
}


double mySec(double x) {
    
    double xMod2Pi = fmod(x, 2*M_PI);
    
    if (xMod2Pi == 0) {
        return 1;
    } else if (xMod2Pi == M_PI/2) {
        return 0;
    } else if (xMod2Pi == M_PI) {
        return -1;
    } else if (xMod2Pi == 3*M_PI/2) {
        return 0;
    } else {
        return 1/cos(x);
    }
}

/************************************************************/

double myTan(double x) {
    
    double xModPi = fmod(x, M_PI);
    
    if (xModPi == 0) {
        return 0;
    } else if (xModPi == M_PI/2) {
        return NAN;
    } else {
        return tan(x);
    }
}

double myCot(double x) {
    
    double xModPi = fmod(x, M_PI);
    
    if (xModPi == 0) {
        return NAN;
    } else if (xModPi == M_PI/2) {
        return 0;
    } else {
        return 1/tan(x);
    }
}

/* misc functions */

double mySign(double x) {
    if ( x==0 )
        return 0;
    else
        return (x >= 0) ? 1 : -1;
}

