#include <iostream>
#include <cmath>
#include "Overdamped.hpp"
#include "Criticallydamped.hpp"
#include "Underdamped.hpp"
using namespace std;

int main(){
    bool state = 1;
    while(state == 1){
        string R = "";
        string C = "";
        string L = "";
        string sp = "";
        //gets the R C and L values
        cout << "please state the connection type as p or s and or d for done:" << endl;
        cin >> sp;
        cin.ignore();
        cin.clear();
        
        //gets the correct function depending on p or s
        if(sp == "p" || sp == "P"){
            //par case
            cout << "this is the Par case\n";
            cout << "what is R?:" << endl;
            cin >> R;
            cin.ignore();
            cin.clear();
            cout << "what is C?:" << endl;
            cin >> C;
            cin.ignore();
            cin.clear();
            cout << "what is L?:" << endl;
            cin >> L;
            cin.ignore();
            cin.clear();
            cout << " R:"<< R <<  " C:" << C << " " << " L: " << L << endl;
            double rPass = stod(R);
            double cPass = stod(C);
            double lPass = stod(L);
            
            double  alpha = (1 / (2*rPass*cPass));
            cout << "alpha value is " << alpha << endl;
            double wo = 1/ sqrt(lPass * cPass);
            cout << "the omega value is " << wo << endl;
            if(alpha > wo){
                cout << "the case is overdamped " << endl;
                functionOverDampedPar(rPass, lPass, cPass, alpha, wo);
            }
            if(alpha == wo){
                cout << "the case is critically damped" << endl;
                functionCritDampedPar(rPass, lPass, cPass, alpha, wo);
            }
            if(wo > alpha){
                cout << "the case is underdamped" << endl;
               functionUnderDampedPar(rPass, lPass, cPass, alpha, wo);
            }
            cin.get();
        }
        else if(sp == "s" || sp == "S"){
            cout << "this is the Series case\n";
            cout << "what is R?:" << endl;
            cin >> R;
            cin.ignore();
            cin.clear();
            cout << "what is C?:" << endl;
            cin >> C;
            cin.ignore();
            cin.clear();
            cout << "what is L?:" << endl;
            cin >> L;
            cin.ignore();
            cin.clear();
            cout << " R:"<< R <<  " C:" << C << " " << " L: " << L << endl;
            double rPass = stod(R);
            double cPass = stod(C);
            double lPass = stod(L);
            
            double  alpha = (rPass / (2 * lPass));
            cout << "alpha value is " << alpha << endl;
            double wo = 1 / sqrt((lPass * cPass));
            cout << "the omega value is " << wo << endl;
            if(alpha > wo){
                cout << "the case is overdamped " << endl;
                functionOverDampedSeries(rPass, lPass, cPass, alpha, wo);
            }
            if(alpha == wo){
                cout << "the case is critically damped" << endl;
                functionCritDampedSeries(rPass, lPass, cPass, alpha, wo);
            }
            if(wo > alpha){
                cout << "the case is underdamped" << endl;
                functionUnderDampedSeries(rPass, lPass, cPass, alpha, wo);
            }
            cin.get();
        }
        else if(sp == "d" || sp == "D"){
            state = 0;
            cout << "thank you have a nice rest of your day!\n";
            cout << "press enter to exit:";
            cin.get();
        }
        else{
            continue;
        }
        //compares the values and gives a function that gives the values
        
        //the values are printed inside the function and calcuated depending on the values needed
        // asks if there is need to do the action once again
        //concludes exuction and completes program
    }
    return 0;
}
