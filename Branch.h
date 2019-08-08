#ifndef _BRANCH_H_
#define _BRANCH_H_

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#include <OpenGL/glext.h>
#else
#include <GL/glew.h>
#endif

#include <GLFW/glfw3.h>

#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Branch
{
public:
	glm::mat4 toWorld;
	int rescursionNum;
	glm::vec3 plantPoints[2];
	glm::vec3 P0, P1, P2, P3, nextP0;

	Branch(glm::vec3 pastPoint, glm::vec3 pointBeforeThat);
	~Branch();

	void draw(GLuint shader, float greenScale);

	glm::vec3 drawInRandomUpDirection(glm::vec3 p, glm::vec3 dirBranch);
	void rotateLeft(glm::vec3 pos);

	// These variables are needed for the shader program
	GLuint VBO, VAO, EBO;
	GLuint uProjection, uModelview;
};

#endif

