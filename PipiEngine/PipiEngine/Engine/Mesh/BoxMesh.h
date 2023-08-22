#pragma once
#include "Core/Mesh.h"

class FBoxMesh : public FMesh
{
	typedef FMesh Super;
public:
	virtual void Init();

	virtual void BuildMesh(const FMeshRenderingData* InMeshRenderingData);

	virtual void Draw(float DeltaTime);

	static FBoxMesh* CreateMesh();
};