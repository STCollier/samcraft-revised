#version 410 core

layout (location = 0) in vec4 vertex;
layout (location = 1) in float color;

out vec2 TexCoords;
out vec4 TextColor;

uniform mat4 projection;

vec4 unpackRGBA(float packed) {
    int p = int(packed);
    return vec4(
        (p & 0xff),
        (p >> 8) & 0xff,
        (p >> 16) & 0xff,
        (p >> 24) & 0xff
    ) / 255.0;
}

void main() {
    TexCoords = vertex.zw;
    TextColor = unpackRGBA(color);
    
    gl_Position = projection * vec4(vertex.xy, 0.0, 1.0);
}  