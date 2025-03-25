module;

import Common;
import Math;

export module SolbitEngine.Component.RigidBody2D;

export namespace solbit
{
	extern constexpr FLOAT GRAVITY = 9.8f;
	enum class EBodyType
	{
		Static,
		Dynamic,
	};

	struct RigidBody2D
	{
		EBodyType BodyType;
		Vec2 Velocity;
		Vec2 Acceleration;
		ID PhysicMaterialId;
		FLOAT Mass;
		FLOAT GravityScale;

		RigidBody2D()
			: BodyType(EBodyType::Dynamic)
			, Velocity({ 0.f, 0.f })
			, Acceleration({ 0.f, 0.f })
			, PhysicMaterialId(INVALID_ID)
			, Mass(1.f)
			, GravityScale(1.f)
		{

		}
	};
}