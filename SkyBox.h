#ifndef SKYBOX_H
#define SKYBOX_H

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
#include <math.h>   // include math functions, such as sin, cos, M_PI

#include "stb_image.h"

using namespace std;


class SkyBox
{
private:
//std::vector<glm::vec3> vertices;
//std::vector<int> faces;

glm::mat4 toWorld;
GLuint cubemapTexture;

// These variables are needed for the shader program
GLuint VBO, VAO;
GLuint uProjection, uModelview;


//void makeBox();
GLuint loadCubemap();
unsigned char* loadPPM(const char* filename, int& width, int& height);

public:
    SkyBox();
    ~SkyBox();
    
    void draw(GLuint);


};

//const GLuint indices[6][6] = {
//    // Front face
//    {0, 1, 2, 2, 3, 0},
//    // Top face
//    {1, 5, 6, 6, 2, 1},
//    // Back face
//    {7, 6, 5, 5, 4, 7},
//    // Bottom face
//    {4, 0, 3, 3, 7, 4},
//    // Left face
//    {4, 5, 1, 1, 0, 4},
//    // Right face
//    {3, 2, 6, 6, 7, 3}
//};


#endif

