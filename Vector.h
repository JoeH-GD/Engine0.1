#pragma once
class Vector3D {
public:

	//поля класса
	double x;
	double y;
	double z;

	//конструкто по умолчанию
	Vector3D();

	//деструктор
	~Vector3D();

	//перегрузка конструктора с ненулевыми значениями координат
	Vector3D(double xCoord, double yCoord, double zCoord);

	//конструктор копирования
	//& защищает копируемый вектор от изменений
	Vector3D(const Vector3D& v);

	//перегрузка оператора присваивания = 
	//rhs  right hand side 
	Vector3D& operator= (const Vector3D& rhs);


	//перегрузки операторов +, -, * с сигнатурой friend 
	friend Vector3D operator+ (const Vector3D& lhs, const Vector3D& rhs);
	friend Vector3D operator-(const Vector3D& lhs, const Vector3D& rhs);
	friend Vector3D operator*(const Vector3D& lhs, const double& rhs);
	friend Vector3D operator*(const double& lhs, const Vector3D& rhs);
	

private:

};