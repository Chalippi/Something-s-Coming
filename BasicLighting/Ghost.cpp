#pragma once
#include "Ghost.h"

Ghost::Ghost(char* pathObject, char* pathMaterial) {
	this->pathObj = pathObject;
	this->pathMaterial = pathMaterial;
	graphHandler = GraphicHandler();
	defaultPos = vec3(0.0f, 4.0f, 0.0f);
	pos = defaultPos;
	rotate = 90.0f;
}

Ghost::~Ghost(){}

void Ghost::BuildObject() {
	graphHandler.BuildObject("object.vert", "object.frag", this->pathObj, this->pathMaterial);
	this->VAOChar = graphHandler.VAO;
	this->shaderChar = graphHandler.shader;
}

void Ghost::DrawObject(vec3 Position, Camera camera, vec3 lightPos, unsigned int screenWidthchar, unsigned int screenHeightchar) {
	this->cameraChar = camera;
	this->defaultPos += Position;
	this->pos += Position;
	this->lightPosChar = lightPos;
	this->screenWidth = screenWidthchar;
	this->screenHeight = screenHeightchar;
	graphHandler.DrawObject(pos, this->cameraChar, this->lightPosChar, this->screenWidth, this->screenHeight);
	this->pos = vec3(0.0f);
}

void Ghost::MoveCharacter(float deltaTime) {

}

