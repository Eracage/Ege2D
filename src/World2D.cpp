#include <Ege2D/World2D.hpp>

using namespace ege;

World2D::World2D()
	: m_gravity(0),
	  m_time(0.f),
	  m_timestep(0.1f)
{}
	  
World2D::~World2D()
{}

void World2D::setGravity(const Vector2& Gravity)
{
	m_gravity = Gravity;
}

void World2D::setTimeStep(const float TimeStep)
{
	m_timestep = TimeStep;
}
void World2D::update(float dt)
{
	for (auto it = m_gameObjects.begin();it != m_gameObjects.end(); ++it)
	{

	}
}