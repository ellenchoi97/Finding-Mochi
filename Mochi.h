#ifndef MOCHI_H
#define MOCHI_H

#define GLFW_INCLUDE_GLEXT
#ifdef __APPLE__
#define GLFW_INCLUDE_GLCOREARB
#else
#include <GL/glew.h>
#endif
#include <GLFW/glfw3.h>

#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <math.h>   // include math functions, such as sin, cos, M_PI

#include "stb_image.h"

using namespace std;

class Mochi
{
private:
std::vector<glm::vec3> vertices;
std::vector<glm::vec3> normals;
std::vector<glm::vec2> textures;
std::vector<int> faces;
std::vector<int> n_indices;
std::vector<int> t_indices;
glm::mat4 toWorld;
glm::vec3 lastTranslation;

public:
	Mochi(const char* filepath);
    ~Mochi();
    
    glm::mat4 getModel();
    int getFurthest();
    
	void parse(const char* filepath);
    void draw(GLuint);
    void center();
    void reset();
    void scale(float s);
    void translate(float x, float y, float z);
    void loadTexture();
    void randomize();
    
    // These variables are needed for the shader program
    GLuint VBO, VAO, EBO, VBON, VBOT;
    
};

#endif
