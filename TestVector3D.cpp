
#include <iostream>
#include <cassert>
#include "TestVector3D.h"

//Функция проверки работы конструктора по умолчанию (проверка создания нулевого вектора)
void test_default_vector3d_ctor() {
    //лог вызова фунции, который печатает название функции
    std::cout << __func__ << std::endl;

    //эта строка вызовет лог вызова конструктора нулевого вектора и оператора присвоения
    Vector3D defaultVector = Vector3D();

    //проверяем, что значения полей соответствуют нашим ожиданиям - мы ожидаем увидеть 0
    assert(defaultVector.x == 0);
    assert(defaultVector.y == 0);
    assert(defaultVector.z == 0);

    // печатаем пустую строку после теста
    std::cout << "\n";
}

void test_vector3d_ctor() {
    // c++ название функции можно рапечатать через __func__
    std::cout << __func__ << std::endl;

    Vector3D v = Vector3D(10, 11, 12);

    assert(v.x == 10);
    assert(v.y == 11);
    assert(v.z == 12);

    std::cout << "\n";
}


void test_vector3d_assigment_operator() {
    std::cout << __func__ << std::endl;
    Vector3D v1 = Vector3D();
    Vector3D v2 = Vector3D(10, 11, 12);

    
    assert(v1.x == 0);
    assert(v1.y == 0);
    assert(v1.z == 0);

    // тут вызвается оператор присваивания и теперь значения 
    // вектора v1 равны значениям вектора v2
    v1 = v2;

    assert(v1.x == 10);
    assert(v1.y == 11);
    assert(v1.z == 12);

    std::cout << "\n";
}

void test_vector3d_copy_ctor() {
    std::cout << __func__ << std::endl;
    Vector3D sourceVector = Vector3D(10, 11, 12);
    Vector3D v(sourceVector);

    assert(v.x == 10);
    assert(v.y == 11);
    assert(v.z == 12);

    std::cout << "\n";
}

void test_math_vector3d() {
    std::cout << __func__ << std::endl;
    Vector3D v1 = Vector3D(1, 1, 1);
    Vector3D v2 = Vector3D(2, 2, 2);
    Vector3D v3 = v1 + v2;

    //проверка предполагаемых значений координат
    assert(v3.x == 3);
    assert(v3.y == 3);
    assert(v3.z == 3);

    std::cout << "\n";
}