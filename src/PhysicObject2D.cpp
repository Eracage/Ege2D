#include <Ege2D/PhysicObject2D.hpp>

using namespace ege;

PhysicObject2D::PhysicObject2D()
	: m_velocity(0),
	m_position(0),
	m_radius_Pow2(0),
	m_shape(NO_SHAPE)
{}
PhysicObject2D::PhysicObject2D()
	: m_velocity(0),
	m_position(0),
	m_radius_Pow2(0),
	m_shape(NO_SHAPE)
{}
PhysicObject2D::~PhysicObject2D()
{}

void PhysicObject2D::setConstantForce(const Vector2& Force, bool enable)
{
	if (enable)
		m_hasConstant = m_constants[0].enabled || 
		m_constants[1].enabled || m_constants[2].enabled;
}
void PhysicObject2D::CreateImpulse(const Vector2& Force, const float Time)
{}
void PhysicObject2D::ApplyForce(const Vector2& Force)
{}

void PhysicObject2D::setConstantPosition(const Vector2& Position, bool enable)
{}
void PhysicObject2D::MoveTo(const Vector2& Position, const float Time)
{}
void PhysicObject2D::Teleport(const Vector2& Position)
{}

void PhysicObject2D::setConstantVelocity(const Vector2& Velocity, bool enable)
{}
void PhysicObject2D::AccelerateTo(Vector2& Velocity, const float Time)
{}
void PhysicObject2D::SetVelocity(const Vector2& Velocity)
{}


void PhysicObject2D::UpdateSize()
{}

void PhysicObject2D::PreUpdate(float)
{}
void PhysicObject2D::PostUpdate(float)
{}


void PhysicObject2D::Update(float dt)
{}
