#include "Criticallydamped.hpp"
void functionCritDampedPar(double Rth, double L, double C, double alpha, double omega){
    //par case critical
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
    double B1 = iI -iF;
    double B2 = (((1/L) * vL) + (alpha*(iI -iF)));
    cout << "Value of B1: " << B1 << " B2 " << B2 << endl;
    //double B1B2 = B1 + B2;
    double al = -1* alpha;
    cout << "iL(t) = " << B1 << " + " << B2 << "t e^( " << al << "t) + " << iF << endl;
    cout << "press enter when done\n";
}
void functionCritDampedSeries(double Rth, double L, double C,double alpha, double omega){
    //series case
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
    double B1 = (vO - vF);
    double B2 = (((1/C)* iC)  + (alpha * (vO - vF)));
    cout << "values B1: " << B1 << " B2: " << B2 << endl;
    cout << endl;
    cout << "The equation is the following\n";
    //double B1B2 = B1+ B2;
    double al = -1* alpha;
    cout << "vc(t) = ( " << B1 << "+" << B2 << "t)e^( "  << al << " t) + " << vF << endl;
    cout << "press enter when done\n";
}
