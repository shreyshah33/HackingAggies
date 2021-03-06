#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Pizza.h"
using namespace std;

Pizza input_get(const string& name) {
    

}

int main(int argc, const char* argv[]) {
    if (argc != 1) {
        cout << "g++ main <input_file_name> <output_file_name>\n";
    }
    else{
        string input ="../b_small.in";
        ifstream in (input);
        if(in.is_open()){
            int rows, cols, min, max;
            in >> rows >> cols >> min >> max;
            cout<<rows<<" "<<cols<<" "<<min<<" "<<max << endl;
            Pizza pizza(rows,cols);
            for(int i=0; i<rows; i++){
                for(int j=0; j<cols; j++){
                    char ingredient;
                    in>>ingredient;
                    if(ingredient=='M'){
                        pizza.cells.at(i).at(j).isMushroom=true;
                        cout<<"M";
                    } 
                    else{
                        pizza.cells.at(i).at(j).isMushroom=false;
                        cout<<"T";
                    } 
                }
                cout<<endl;
            }
        }        
    }

}