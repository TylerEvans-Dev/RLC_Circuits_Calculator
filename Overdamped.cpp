#include "Overdamped.hpp"
void functionOverDampedPar(double Rth, double L, double C, double alpha, double omega){
    //this is the par case  equation
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
    double s1 = (-1 * alpha) + sqrt(((alpha* alpha) - (omega * omega)));
    double s2 = (-1 * alpha) - sqrt(((alpha* alpha) - (omega * omega)));
    cout << "values, vl(0): " << vL << " iL(0): " << iI << " i(oo): "<< iF << endl;
    cout << "S1: " << s1 << " S2: " << s2 << endl;
    
    double A1 = ((((1/L) * vL) - (s2 * ( iI -iF))) / (s1-s2));
    double A2 = ((((1/L) * vL) - (s2 * (iI - iF))) / (s2 - s1));
    cout << "A1: " << A1 << " A2: " << A2 << endl;
    cout << endl;
    cout << "the final equation is" << endl;
    cout << A1 << " e^( " << s1 << " t) +" << A2 << " e^( " << s2 << "t) + " << iF << endl;
    cout << "press enter when done\n";
    
    
    
    
    
}



void functionOverDampedSeries(double Rth, double L, double C, double alpha,double omega){
    // the series focus is upon capacitor value
    double iC;
    double vO;
    double vF;
    string iCpass;
    string vOpass;
    string vFpass;
    cout << "what is the current at the capacitor at 0 or the ic(0) val?: ";
    cin >> iCpass;
    cin.ignore();
    cin.clear();
    cout << "what is the what is the value of the voltage at capcator when time = 0 or v0c val?: ";
    cin >> vOpass;
    cin.ignore();
    cin.clear();
    cout << "what is the final voltage at capacitor or vFc val?: ";
    cin >> vFpass;
    cin.ignore();
    cin.clear();
    iC = stod(iCpass);
    vO = stod(vOpass);
    vF = stod(vFpass);
    double s1 = (-1 * alpha) + sqrt((alpha* alpha) - (omega * omega));
    double s2 = (-1 * alpha) - sqrt((alpha* alpha) - (omega * omega));
    double A1 = ((((1/C) * iC) - (s2 * (vO - vF)))/ (s1-s2));
    double A2 = ((((1/C) * iC) - (s1 * (vO - vF))) / (s2 -s1));
    
    cout << "A1: "  << A1 << " A2: " << A2 << " S1: " << s1 << " S2: " << s2 << endl;
    cout << "this gives the equation \n";
    cout << endl;
    cout << A1 << " e^( " << s1 << " t) " << " + " << A2 << " e^( " << s2 << " t)" << "+" << vF << endl;
    cout <<" press enter once done\n";
    
}
