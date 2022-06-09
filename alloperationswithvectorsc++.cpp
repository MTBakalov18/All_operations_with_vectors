#include<iostream>
#include<math.h>
using namespace std;
class Vector3D
{
public:
    float x;
    float y;
    float z;
    Vector3D()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vector3D(float x1 = 0, float y1 = 0, float z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    // Имената на всичките методи
    Vector3D(const Vector3D& vec);
    Vector3D operator+(const Vector3D& vec);
    Vector3D& operator+=(const Vector3D& vec);
    Vector3D operator-(const Vector3D& vec);
    Vector3D& operator-=(const Vector3D& vec);
    Vector3D operator*(float value);
    Vector3D& operator*=(float value);
    Vector3D operator/(float value);
    Vector3D& operator/=(float value);
    Vector3D& operator=(const Vector3D& vec);
    Vector3D VectorMultiplication(const Vector3D& vec);
    float ScalarMultiplication(const Vector3D& vec);
};
// Събиране с + и +=
Vector3D Vector3D::operator+(const Vector3D& vec)
{
    return Vector3D(x + vec.x, y + vec.y, z + vec.z);
}
Vector3D& Vector3D::operator+=(const Vector3D& vec)
{
    x += vec.x;
    y += vec.y;
    z += vec.z;
    return *this;
}
// Изваждане с - и -=
Vector3D Vector3D::operator-(const Vector3D& vec)
{
    return Vector3D(x - vec.x, y - vec.y, z - vec.z);
}
Vector3D& Vector3D::operator-=(const Vector3D& vec)
{
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
    return *this;
}
// Произведение с * и *=
Vector3D Vector3D::operator*(float value)
{
    return Vector3D(x * value, y * value, z * value);
}
Vector3D& Vector3D::operator*=(float value)
{
    x *= value;
    y *= value;
    z *= value;
    return *this;
}
// Деление с / и /=
Vector3D Vector3D ::operator/(float value)
{
    return Vector3D(x / value, y / value, z / value);
}
Vector3D& Vector3D ::operator/=(float value)
{
    x /= value;
    y /= value;
    z /= value;
    return *this;
}
// Пресвояване с =
Vector3D& Vector3D::operator=(const Vector3D& vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
    return *this;
}
// Намиране на векторно произведение
Vector3D Vector3D::VectorMultiplication(const Vector3D& vec)
{
    float red1 = y * vec.z - z * vec.y;
    float red2 = z * vec.x - x * vec.z;
    float red3 = x * vec.y - y * vec.x;
    return Vector3D(red1, red2, red3);
}
// Намиране на скаларно произведение
float Vector3D::ScalarMultiplication(const Vector3D& vec)
{
    return x * vec.x + vec.y * y + vec.z * z;
}