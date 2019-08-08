#ifndef SHADER_SKYBOX_HPP
#define SHADER_SKYBOX_HPP

#define GLFW_INCLUDE_GLEXT
#ifdef __APPLE__
#define GLFW_INCLUDE_GLCOREARB
#else
#include <GL/glew.h>
#endif
#include <GLFW/glfw3.h>

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

GLuint LoadSkybox(const char * vertex_file_path,const char * fragment_file_path);

#endif
