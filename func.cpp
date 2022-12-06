//
// Created by mathis on 06/12/22.
//

// Renvoie si un nombre est premier ou non
bool isPrime(int n) {
    for(int i = 1; i < n; i++) {
        if(n % i == 0 && (i != 1)) {
            return false;
        }
    }

    return true;
}

// Renvoie la valeur absolue d'un float
float absf(float a) {
    // VERSION ULTRA COMPACTE :
    //return a < 0 ? -a : a;

    //VERSION LONGUE
    if(a < 0) {
        return -a;
    } else {
        return a;
    }
}

// Cherche la plus grande distance à zero d'un nombre
float max_dist(float* array, int array_size) {
    float max = array[0];

    for(int i = 0; i < array_size; i++) {
        if(absf(max) < absf(array[i])) {
            max = array[i];
        }
    }

    return max;
}