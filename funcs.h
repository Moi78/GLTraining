//
// Created by mathis on 06/12/22.
//

#ifndef DEMONILS_FUNCS_H
#define DEMONILS_FUNCS_H

bool isPrime(int n);

float abs(float a);

float max_dist(float* array, int arra_size); // Permet l'utilisation de tableau de taille non-connue
// On pourrait parfaitement déclarer la fonction comme ça:
// float max_dist(float array[CONSTANTE];
// e.g: float max_dist(float array[7]); prendra un tableau de 7 valeurs

#endif //DEMONILS_FUNCS_H
