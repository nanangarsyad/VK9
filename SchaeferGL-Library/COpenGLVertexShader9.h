//========= Copyright Valve Corporation, All rights reserved. ============//
//                       TOGL CODE LICENSE
//
//  Copyright 2011-2014 Valve Corporation
//  All Rights Reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
// dxabstract.h
//
//==================================================================================================

/*
 * Code from ToGL has been modified to fit the design.
 */
 
#ifndef COPENGLVERTEXSHADER9_H
#define COPENGLVERTEXSHADER9_H

#include "IDirect3DVertexShader9.h" // Base class: IDirect3DVertexShader9
#include "COpenGLResource9.h"

class COpenGLVertexShader9 : public IDirect3DVertexShader9,COpenGLResource9
{
public:
	COpenGLVertexShader9();
	~COpenGLVertexShader9();

	CGLMProgram				*m_vtxProgram;
	uint					m_vtxHighWater;		// count of active constant slots referenced by shader.
	uint					m_vtxHighWaterBone;
	unsigned char			m_vtxAttribMap[16];	// high nibble is usage, low nibble is usageindex, array position is attrib number
	uint					m_maxVertexAttrs;

public:
	//virtual HRESULT GetDevice(IDirect3DDevice9** ppDevice);
	//virtual HRESULT GetFunction(void* pData, UINT* pSizeOfData);
};

#endif // COPENGLVERTEXSHADER9_H