#ifndef _FENCE_H
#define _FENCE_H

#include "Game.h"
#include "Camera.h"
#include "GraphicHandler.h"
#include "ObjectVoxel.h"
#include <SOIL.h>
#include <SDL.h>
#include <string>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

using namespace glm;

class Fence :
	public ObjectVoxel
{
public:
	Fence();
	~Fence();

	void BuildObject();
	void DrawObject(vec3 Position, Camera camera, vec3 lightPos, unsigned int screenWidthchar, unsigned int screenHeightchar);
	void UpdateObject(Camera camera, vec3 lightPos);
};

#endif // !_FENCE_H