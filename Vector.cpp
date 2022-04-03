#include "Vector.h" 

//Создает нам вектор с нулевыми координатами 
Vector3D::Vector3D() :
	x(0),
	y(0),
	z(0)
{

}

Vector3D::~Vector3D()
{
}

//Конструктор для вектора с ненулевыми координатами
Vector3D::Vector3D(double xCoord, double yCoord, double zCoord):
x(xCoord),
y(yCoord),
z(zCoord)
{

}

Vector3D::Vector3D(const Vector3D& v):
x(v.x),
y(v.y),
z(v.z)

{
}

Vector3D& Vector3D::operator=(const Vector3D& rhs)
{
	if (this != &rhs)
		//этот код выполнится только если условие соблюдается
	{
		//переписали координаты по указанному адресу (this -> x) и пр.
		this->x = rhs.x;
		this->y = rhs.y;
		this->z = rhs.y;
	}

	//* нужна чтобы получить значение по адресу а не сам адрес 
	//мы вернем именно вектор и его новые координаты
	return *this;
}

Vector3D operator+(const Vector3D& lhs, const Vector3D& rhs)
{
	//переменная для хранения данных
	Vector3D sum = Vector3D();

	//перезапись полей вектора sum
	sum.x = lhs.x + rhs.x;
	sum.y = lhs.y + rhs.y;
	sum.z = lhs.z + rhs.z;

	//возвращаем значение вектора sum
	return sum;
}

Vector3D operator-(const Vector3D& lhs, const Vector3D& rhs)
{
	Vector3D diff = Vector3D();

	diff.x = lhs.x - rhs.x;
	diff.y = lhs.y - rhs.y;
	diff.z = lhs.z - rhs.z;

	return diff;
}

Vector3D operator*(const Vector3D& lhs, const double& rhs)
{
	Vector3D mul = Vector3D();

	mul.x = lhs.x * rhs;
	mul.y = lhs.y * rhs;
	mul.z = lhs.z * rhs;

	return mul;
}

Vector3D operator*( const double& lhs, const Vector3D& rhs)
{
	return rhs * lhs;
}