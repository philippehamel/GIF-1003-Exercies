/*
 * principal.cpp
 *
 *  Created on: 2018-02-27
 *      Author: etudiant
 */

#include "fonctions.h"
#include <iostream>

using namespace std;

int main() {
	int matA[MAX_CASES][MAX_CASES];
	int matB[MAX_CASES][MAX_CASES];
	int matC[MAX_CASES][MAX_CASES];

	cout<<"Programme qui additionne les matrices A et B."<<endl;

	saisir_matrice(matA, matB);
	somme(matA, matB, matC);
	affiche(matC);

	return 0;
}

