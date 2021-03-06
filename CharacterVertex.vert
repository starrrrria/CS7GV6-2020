#version 330 core
layout (location = 0) in vec3 pos; // <vec2 pos, vec2 tex>
layout (location = 1) in vec2 uv;
out vec2 TexCoords;

uniform mat4 projection;

void main()
{
    gl_Position = projection * vec4(pos, 1.0f);
    TexCoords = uv;
}

