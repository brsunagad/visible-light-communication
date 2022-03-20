/*
 * text_char.cpp
 *
 *  Created on: 02-Oct-2018
 *      Author: Manav
 */
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ofstream fout("dummyBin.txt");

void convertToBinary(unsigned int n)
            {

                if (n / 2 != 0) {
                    convertToBinary(n / 2);
                }
                cout<<n % 2;
                fout<<n%2;

            }


    int main() {
        //char sum = 0;
        char x;
        ifstream fin("dummy.txt");

        if (!fin) {
            cout << "Unable to open file";
            exit(1);
        }
//        while (x == fin.eof()) {
//
//        	fin>>noskipws>>x;
//           	cout<<"x = "<<x<<endl;
//
//        }
        int y;
        while (fin >> noskipws >> x) {

            y=x;
            cout<<x<<" "<<y<<": ";
            convertToBinary(y);
            cout<<endl;
        }

        fin.close();
        fout.close();


        return 0;
    }
