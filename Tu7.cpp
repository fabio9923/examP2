//--------------------------------------------------------------------------------------
// File: Tu7.cpp
//
// This application demonstrates texturing
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------

#include "lib.h"
#include "estr.h"
#include "camara.cpp"

int main()
{
    // Crear un objeto de la clase Camara
    Camara camara;

    // Obtener los vectores de la cámara
    XMVECTOR eye = camara.GetEye();
    XMVECTOR at = camara.GetAt();
    XMVECTOR up = camara.GetUp();

    // Crear una matriz de vista utilizando los vectores de la cámara
    XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, at, up);

    return 0;
}

