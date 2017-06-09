#ifndef DEMO_H
#define DEMO_H


#include <SOIL.h>

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

#include "Game.h"

#define NUM_FRAMES 8
#define FRAME_DUR 80

using namespace glm;

class Demo :
	public Engine::Game
{
public:
	Demo();
	~Demo();
	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render();
private:
	GLuint VBO, VAO, EBO, texture, program;
	float frame_dur = 0, frame_width = 0, xpos = 0;
	unsigned int frame_idx = 0;
	void BuildSprite();
	void DrawSprite();
	void UpdateSprite(float deltaTime);
	void MoveSprite(float deltaTime);
};
#endif

