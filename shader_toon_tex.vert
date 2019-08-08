#version 330 core

layout (location = 0) in vec3 position; //vertices array bound
layout (location = 1) in vec3 normal;   //normal array bound
layout (location = 2) in vec2 tex;

// Uniform variables can be updated by fetching their location and passing values to that location
uniform mat4 projection;
uniform mat4 modelview;
//uniform mat4 model;
//uniform mat4 view;

//uniform vec3 lightPos;
//uniform vec3 lightColor;


out vec3 fragVert;//position
out vec3 fragNormal; //normal
out vec2 fragTexCoord; //texture coordinate

void main()
{
    gl_Position =  projection * modelview  * vec4(position.x, position.y, position.z, 1.0);
    
    fragVert = position;
    fragNormal = normal;
    fragTexCoord = tex;
}


