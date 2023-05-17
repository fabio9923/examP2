#pragma once
#ifndef CAMARA_H
#define CAMARA_H

#include <DirectXMath.h>

using namespace DirectX;

class Camara
{
public:
    Camara();
    ~Camara();

    void SetEye(float x, float y, float z);
    void SetAt(float x, float y, float z);
    void SetUp(float x, float y, float z);

    XMVECTOR GetEye() const;
    XMVECTOR GetAt() const;
    XMVECTOR GetUp() const;

private:
    XMVECTOR Eye;
    XMVECTOR At;
    XMVECTOR Up;
};

#endif  // CAMARA_H