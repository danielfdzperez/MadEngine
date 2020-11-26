#if !defined ( _VECTOR3_H_ )
#define _VECTOR3_H_

class Vector3
{
    //Attributes
    private:
	float x;
	float y;
	float z;

    //Methods
    public:
	//Constructors
	Vector3(float x,float y ,float z);

	//Get vector components
	float GetX();
	float GetY();
	float GetZ();

	//Set vector components
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	void Set(Vector3 vector);
	void Set(float x,float y ,float z);


};




#endif //_VECTOR3_H_
