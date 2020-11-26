#include "Vector3.h"


Vector3::Vector3(float x, float y, float z): x(x), y(y), z(z) {};

float Vector3::GetX()
{
    return x;
}
float Vector3::GetY()
{
    return y;
}
float Vector3::GetZ()
{
    return z;
}

void Vector3::SetX(float x){
    this->x = x;
}
void Vector3::SetY(float y){
    this->y = y;
}
void Vector3::SetZ(float z){
    this->z = z;
}
void Vector3::Set(Vector3 newVector){
    x = newVector.GetX();
    y = newVector.GetY();
    z = newVector.GetZ();

}
void Vector3::Set(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}
