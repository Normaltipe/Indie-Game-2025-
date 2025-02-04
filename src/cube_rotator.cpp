#include "cube_rotator.h"

using namespace godot;

void CubeRotator::_bind_methods() {
    
}

CubeRotator::CubeRotator() {
    
}

CubeRotator::~CubeRotator() {
    
}

void CubeRotator::_process(double delta) {
    
    rotate_y(delta);
}