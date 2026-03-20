#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>

using namespace std ;

void exercises20250320IN(){

}

/*
Funktionens uppgift är att stoppa in ett tal x på en viss plats i en befintlig c-array. Vissa av
arrayens befintliga element måste först skiftas ett steg åt höger för att skapa plats åt x.
*/

void insertX(float x, float* pX, float* pBegin, float* pEnd){
    while(pEnd > pX){
        *pEnd = *(pEnd-1);
        pEnd -= 1;
    }
    *pEnd = x;
}
