#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"

#define MAX_SNAKE 2

struct PhysBody3D;
struct PhysMotor3D;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();

	void OnCollision(PhysBody3D* body1, PhysBody3D* body2);

public:
	/*
	PhysBody3D* pb_snake[MAX_SNAKE];
	Sphere s_snake[MAX_SNAKE];

	PhysBody3D* pb_snake2[MAX_SNAKE];
	Sphere s_snake2[MAX_SNAKE];
	*/

	PhysBody3D* pb_chassis;
	Cube p_chassis;

	PhysBody3D* pb_wheel;
	Cylinder p_wheel;

	PhysBody3D* pb_wheel2;
	Cylinder p_wheel2;

	PhysMotor3D* left_wheel;
	PhysMotor3D* right_wheel;


	Sphere n;
	PhysBody3D* turret;

	Cube cub1;
	PhysBody3D*bodcub1;
	Cube cub2;
	PhysBody3D*bodcub2;
	Cube cub3;
	PhysBody3D*bodcub3;
	Cube cub4;
	PhysBody3D*bodcub4;
	Cube cub5;
	PhysBody3D*bodcub5;
	Cube cub6;
	PhysBody3D*bodcub6;
	Cube cub7;
	PhysBody3D*bodcub7;
	Cube cub8;
	PhysBody3D*bodcub8;
};
