
#include <iostream>
#include <glut.h>
#include "Vector.h"
#include "TestVector3D.h"


//точка входа
int main()
{
  
    std::cout << "Start Vector3D tests\n\n";

    test_default_vector3d_ctor();

    test_vector3d_ctor();

    test_vector3d_assigment_operator();

    test_vector3d_copy_ctor();

    test_math_vector3d();

    std::cout << "\nEnd Vector3D tests\n";
  
    return 0;
}

