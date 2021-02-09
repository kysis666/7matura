#include <iostream>
#include <vector>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class mergeClass {
	vector <int> tabF,tabS,nums;

    public:
        void enter();
        void push();     
};

void mergeClass::enter() {
	double x,y;
	fstream plik;  
    
    plik.open("tabF.txt", ios::in); 
    if(plik.good()) 
    	while(!plik.eof()) {
            plik >> y;
            tabF.push_back(y);
            x++;
        }
    plik.close();   
                              
    plik.open("tabS.txt", ios::in); 
    if(plik.good()) 
    	while(!plik.eof()) {
            plik >> y;
            tabS.push_back(y);
            x++;
        }
    plik.close();  
                   
    for (int i = 0; i < x; i++) {
        if (i < (x/2)) {
        	nums.push_back(tabF[i]);
		} else {
			for (int i = 0; i <= 6; i++) {
				nums.push_back(tabS[i]);
			}
		}
	}
}

void mergeClass::push() {
	for (int i = 0; i < tabF.size(); i++) {
		cout << tabF[i] << "\n";
		}
		cout << "\n";

		for (int i = 0; i < tabS.size(); i++) {
			cout << tabS[i] << "\n";
		}
		cout << "\n";
		
		for (int i = 0; i < nums.size(); i++) {
			cout << nums[i] << "\n";
		}
}

int main(int argc, char** argv) {
	
	mergeClass start;
    start.enter();
    start.push();
    
    return 0;
}
