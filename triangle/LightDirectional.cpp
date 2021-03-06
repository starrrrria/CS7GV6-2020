//
//  LightDirectional.cpp
//  triangle
//
//  Created by 补锌 on 2020/11/17.
//

#include "LightDirectional.hpp"

LightDirectional::LightDirectional(glm::vec3 _position,glm::vec3 _angles,glm::vec3 _color):
    position(_position),
    angles(_angles),
    color(_color)
{
}
LightDirectional::~LightDirectional(){
    
}

void LightDirectional::UpdateDirection(){
    direction = glm::vec3(0,0,1.0f); //pointing to z (forward)
    direction = glm::rotateZ(direction, angles.z);
    direction = glm::rotateZ(direction, angles.x);
    direction = glm::rotateZ(direction, angles.y);
    direction = -1.0f * direction;
}
