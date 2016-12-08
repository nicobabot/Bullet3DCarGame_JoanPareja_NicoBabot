#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	
	//--
	cub1.size.x = 8;
	cub1.size.z = 200;
	bodcub1 = App->physics->AddBody(cub1, 1000);
	bodcub1->SetPos(1, 0, 2);

	cub2.size.x = 8;
	cub2.size.z = 200;
	bodcub2 = App->physics->AddBody(cub2, 1000);
	bodcub2->SetPos(8, 0, 2);

	cub5.size.x = 8;
	cub5.size.z = 200;
	bodcub5 = App->physics->AddBody(cub5, 1000);
	bodcub5->SetPos(94.5, 0, 2);

	cub6.size.x = 8;
	cub6.size.z = 200;
	bodcub6 = App->physics->AddBody(cub6, 1000);
	bodcub6->SetPos(102.5, 0, 2);

//------

	cub3.size.x = 110;
	cub3.size.z = 8;
	bodcub3 = App->physics->AddBody(cub3, 1000);
	bodcub3->SetPos(51.5, 0, 105.5);

	cub4.size.x = 110;
	cub4.size.z = 8;
	bodcub4 = App->physics->AddBody(cub4, 1000);
	bodcub4->SetPos(51.5, 0, 113.5);

	cub7.size.x = 110;
	cub7.size.z = 8;
	bodcub7 = App->physics->AddBody(cub7, 1000);
	bodcub7->SetPos(51.5, 0, -102);

	cub8.size.x = 110;
	cub8.size.z = 8;
	bodcub8 = App->physics->AddBody(cub8, 1000);
	bodcub8->SetPos(51.5, 0, -110);
	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update
update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();
	bodcub1->GetTransform(&cub1.transform);
	cub1.Render();
	bodcub2->GetTransform(&cub2.transform);
	cub2.Render();
	bodcub3->GetTransform(&cub3.transform);
	cub3.Render();
	bodcub4->GetTransform(&cub4.transform);
	cub4.Render();
	bodcub5->GetTransform(&cub5.transform);
	cub5.Render();
	bodcub6->GetTransform(&cub6.transform);
	cub6.Render();
	bodcub7->GetTransform(&cub7.transform);
	cub7.Render();
	bodcub8->GetTransform(&cub8.transform);
	cub8.Render();
	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

