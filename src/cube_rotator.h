#ifndef CUBE_ROTATOR_H
#define CUBE_ROTATOR_H

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>

namespace godot {

class CubeRotator : public Node3D {
    GDCLASS(CubeRotator, Node3D);

protected:
    static void _bind_methods();

public:
    CubeRotator();
    ~CubeRotator();

    void _process(double delta);
};

}

#endif // CUBE_ROTATOR_H