#ifndef _OBJECT_VOXEL_H
#define _OBJECT_VOXEL_H

#include "Game.h"
#include "Camera.h"
#include "GraphicHandler.h"
#include <SOIL.h>
#include <SDL.h>
#include <string>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

using namespace glm;

class ObjectVoxel {

public:
	ObjectVoxel(){}
	~ObjectVoxel(){}

	vec3 charPosition;
	float radius;
protected:
	GLuint VAOChar;
	GLuint shaderChar;
	Camera cameraChar;
	GraphicHandler graphHandler;
	vec3 lightPosChar;
	char* pathObj;
	char* pathMaterial;
	unsigned int screenWidth, screenHeight;
	virtual void BuildObject() {}
	virtual void DrawObject(vec3 Position, Camera camera, vec3 lightPos) {}
	virtual void UpdateObject(Camera camera, vec3 lightPos, unsigned int screenWidth, unsigned int screenHeight) {}
};

#endif // !_OBJECT_VOXEL_H
