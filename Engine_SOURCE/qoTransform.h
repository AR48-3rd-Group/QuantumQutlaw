#pragma once
#include "qoComponent.h"

namespace qo
{
	class Transform : public Component
	{
	public:
		Transform();
		~Transform();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void LateUpdate() override;
		virtual void Render() override;

		void SetConstantBuffer();

		void SetPosition(Vector3 position) { mPosition = position; }
		void SetRotation(Vector3 rotation) { mRotation = rotation; }
		void SetScale(Vector3 scale) { mScale = scale; }

		void SetPosition(float x, float y, float z) { mPosition = Vector3(x, y, z); }
		void SetRotation(float x, float y, float z) { mRotation = Vector3(x, y, z); }
		void SetScale(float x, float y, float z) { mScale = Vector3(x, y, z); }

		Vector3 GetPosition() { return mPosition; }
		Vector3 GetRotation() { return mRotation; }
		Vector3 GetScale() { return mScale; }


		void SetColor(math::Vector4 color) { mColor = color; }

		// New function to set position in pixels
		void SetPositionInPixels(float xPixels, float yPixels, float z);
		void SetScaleInPixels(float widthInPixels, float heightInPixels, float z);

		void SetAffectedCamera(bool affectedcamera) { mbAffectedCamera = affectedcamera; }

	private:
		Vector3 mPosition;
		Vector3 mRotation;
		Vector3 mScale;

		// 상수버퍼에 전달해줄 Color 값
		Vector4 mColor;

		// Camera Affected
		bool mbAffectedCamera;
	};
}
