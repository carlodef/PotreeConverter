
#ifndef POINT_H
#define POINT_H

#include "Vector3.h"

#include <iostream>

using std::ostream;

class Point{
public:
	float x;
	float y;
	float z;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;

	Point(float x, float y, float z, unsigned char r, unsigned char g, unsigned char b){
		this->x = x;
		this->y = y;
		this->z = z;
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = 255;
	}

	Point(float x, float y, float z){
		this->x = x;
		this->y = y;
		this->z = z;
		this->r = 255;
		this->g = 255;
		this->b = 255;
		this->a = 255;
	}

	float distanceTo(const Point &p){
		return Vector3(x-p.x, y-p.y, z-p.z).length();
	}

	friend ostream &operator<<( ostream &output,  const Point &value ){ 
		output << "[" << value.x << ", " << value.y << ", " << value.z << "]" ;
		return output;            
	}

};


#endif