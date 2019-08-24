#ifndef _BUILDING_H
#define _BUILDING_H

#include <vector>
#include <iostream>
#include <stdio.h>
#include <time.h>

#include "Node.h"

class Building : public Node
{

private:
	//The width and length of the base of the building
	float base_width;
	float base_length;

	//The seed for random number generator
	unsigned int seed;

	GLint shader;

public:
	Building(GLint shaderProgram);
	~Building();

	unsigned int getSeed();

	void drawRect(float length, float width, float height);

	void drawVersion1(glm::mat4 C);
	void drawVersion2(glm::mat4 C);
	void drawVersion3(glm::mat4 C);

	void draw(glm::mat4 C);
	void update();

	GLuint VBO, VAO, VBO2;

};

#endif
