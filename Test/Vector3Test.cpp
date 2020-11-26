#include <iostream>
#include <stdlib.h>
#include "../src/Math/Vector3.h"


void ShowVector(Vector3 vector);

int main(int argc, char *argv[]){
    
    Vector3 a = Vector3(1,2,3);
    
    ShowVector(a);
      
    Vector3 b = Vector3(10,12,13);
    a.Set(b);
    ShowVector(a);

    a.Set(3,4.5,9);
    ShowVector(a);
    a.SetX(111);
    a.SetY(111);
    a.SetZ(111);
    ShowVector(a);

    return EXIT_SUCCESS;

}

void ShowVector(Vector3 vector){
    std::cout<< vector.GetX() << std::endl;
    std::cout<< vector.GetY() << std::endl;
    std::cout<< vector.GetZ() << std::endl;
  
}



