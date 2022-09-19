#include "Underdamped.hpp"
void functionUnderDampedPar(double Rth, double L, double C, double alpha, double omega){
    //par case under
    double vL;
    double iI;
    double iF;
    string vLpass;
    string iIpass;
    string iFpass;
    cout << "what is the voltage at the inductor? or Vl(0): ";
    cin >> vLpass;
    cin.ignore();
    cin.clear();
    cout << "what is the current at i(0)?:";
    cin >> iIpass;
    cin.ignore();
    cin.clear();
    cout << "what is the final current at i infinity i(00) ";
    cin >> iFpass;
    cin.ignore();
    cin.clear();
    vL = stod(vLpass);
    iI = stod(iIpass);
    iF = stod(iFpass);
    double wd = sqrt(((omega*omega) - (alpha * alpha)));
    cout << "the value of omegaW: " << wd << endl;
    double D1 = (iI - iF);
    double D2 = ((((1/L)*vL) + (alpha *(iI -iF))) / wd);
    double al = alpha * -1;
    cout << "the value of D1: " << D1 << " D2:" << D2 << endl;
    cout << endl;
    cout << "the equation " << endl;
    cout << "iL(t) = e^(" << al << "t) * (" << D1 << "* cos( "<< wd <<" t) + " << D2 << " * sin( " << wd << " t) ) + "<< iF <<endl;
    cout << "press enter when done\n";
    
}
void functionUnderDampedSeries(double Rth, double L, double C, double alpha, double omega){
    double iC;
    double vO;
    double vF;
    string iCpass;
    string vOpass;
    string vFpass;
    cout << "what is the ic val?: ";
    cin >> iCpass;
    cin.ignore();
    cin.clear();
    cout << "what is the v0c val?: ";
    cin >> vOpass;
    cin.ignore();
    cin.clear();
    cout << "what is the vFc val?: ";
    cin >> vFpass;
    cin.ignore();
    cin.clear();
    iC = stod(iCpass);
    vO = stod(vOpass);
    vF = stod(vFpass);
    double wd = sqrt(((omega*omega) - (alpha * alpha)));
    cout << "the value of omegaW: " << wd << endl;
    double D1 = (vO-vF);
    double D2 = ((((1/C)* iC) + (alpha * (vO-vF)))/ wd);
    double al = alpha * -1;
    cout << "the value of D1: " << D1 << " D2:" << D2 << endl;
    cout << endl;
    cout << "the equation " << endl;
    cout << "Vc(t) = e^(" << al << "t) * ( " << D1 << "cos( " << wd << "t) + " << D2 << "sin( "<< wd << "t) ) + " << vF << endl;
    cout << "press enter when done\n";
}
