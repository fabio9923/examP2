#include "camara.h"

Camara::Camara()
{
    Eye = XMVectorSet(0.0f, 3.0f, -6.0f, 0.0f);
    At = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);
    Up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);
}

Camara::~Camara()
{
}

void Camara::SetEye(float x, float y, float z)
{
    Eye = XMVectorSet(x, y, z, 0.0f);
}

void Camara::SetAt(float x, float y, float z)
{
    At = XMVectorSet(x, y, z, 0.0f);
}

void Camara::SetUp(float x, float y, float z)
{
    Up = XMVectorSet(x, y, z, 0.0f);
}

XMVECTOR Camara::GetEye() const
{
    return Eye;
}

XMVECTOR Camara::GetAt() const
{
    return At;
}

XMVECTOR Camara::GetUp() const
{
    return Up;
}