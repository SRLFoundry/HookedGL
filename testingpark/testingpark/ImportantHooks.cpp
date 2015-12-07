#include "ImportantHooks.h"

void __stdcall GLHook_glActiveTextureARB(GLenum texture)
{
	ptr_glActiveTextureARB(texture);
}

void __stdcall GLHook_glBindBufferARB(GLenum target, GLuint buffer)
{

	ptr_glBindBufferARB(target, buffer);
}

void __stdcall GLHook_glBindTexture(GLenum target, GLuint texture)
{

	ptr_glBindTexture(target, texture);
}

void __stdcall GLHook_glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{

	ptr_glBufferDataARB(target, size, data, usage);
}

void __stdcall GLHook_glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{

	ptr_glBufferSubDataARB(target, offset, size, data);
}

void __stdcall GLHook_glCallList(GLuint list)
{

	ptr_glCallList(list);
}

void __stdcall GLHook_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{

	ptr_glColor4ub(red, green, blue, alpha);
}

void __stdcall GLHook_glDeleteBuffersARB(GLsizei n, const GLuint* buffers)
{
	
	ptr_glDeleteBuffers(n, buffers);
}

void __stdcall GLHook_glDeleteLists(GLuint list, GLsizei range)
{
	
	ptr_glDeleteLists(list, range);
}

void __stdcall GLHook_glDeleteTextures(GLsizei n, const GLuint *textures)
{
	
	ptr_glDeleteTextures(n, textures);
}

void __stdcall GLHook_glDisable(GLenum cap)
{
	ptr_glDisable(cap);
}

void __stdcall GLHook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{

	ptr_glDrawElements(mode, count, type, indices);
}

void __stdcall GLHook_glEnable(GLenum cap)
{
	ptr_glEnable(cap);
}

void __stdcall GLHook_glEnd(void)
{
	OutputDebugStringA("glEnd");
	ptr_glEnd();
}

void __stdcall GLHook_glEndList(void)
{
	ptr_glEndList();
}

GLuint __stdcall GLHook_glGenLists(GLsizei range)
{
	return ptr_glGenLists(range);
}

void __stdcall GLHook_glGenTextures(GLsizei n, GLuint *textures)
{
	ptr_glGenTextures(n, textures);
}

void __stdcall GLHook_glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	ptr_glMultiTexCoord2fARB(target, s, t);
}

void __stdcall GLHook_glNewList(GLuint list, GLenum mode)
{
	ptr_glNewList(list, mode);
}

void __stdcall GLHook_glPixelStorei(GLenum pname, GLint para)
{
	ptr_glPixelStorei(pname, para);
}

void __stdcall GLHook_glPopMatrix(void)
{
	ptr_glPopMatrix();
}

void __stdcall GLHook_glTexCoord2f(GLfloat s, GLfloat t)
{
	ptr_glTexCoord2f(s, t);
}

void __stdcall GLHook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels)
{
	ptr_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void __stdcall GLHook_glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glTranslatef(x, y, z);
}

void __stdcall GLHook_glVertex2f(GLfloat x, GLfloat y)
{
	ptr_glVertex2f(x, y);
}

void __stdcall GLHook_glVertex2i(GLint x, GLint y)
{
	ptr_glVertex2i(x, y);
}

void __stdcall GLHook_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glVertexPointer(size, type, stride, pointer);
}

PROC __stdcall GLHook_wglGetProcAddress(LPCSTR lpszProc)
{

	std::string FunctionCalled(lpszProc);
	if (FunctionCalled == "glActiveTextureARB")
	{
		xDetour(ptr_glActiveTextureARB, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glActiveTextureARB);
	}
	else if (FunctionCalled == "glBindBufferARB")
	{
		xDetour(ptr_glBindBufferARB, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glBindBufferARB);
	}
	else if (FunctionCalled == "glBufferDataARB")
	{
		xDetour(ptr_glBufferDataARB, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glBufferDataARB);
	}
	else if (FunctionCalled == "glBufferSubDataARB")
	{
		xDetour(ptr_glBufferSubDataARB, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glBufferSubDataARB);
	}
	else if (FunctionCalled == "glDeleteBuffersARB")
	{
		xDetour(ptr_glDeleteBuffers, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glDeleteBuffersARB);
	}
	else if (FunctionCalled == "glDeleteLists")
	{
		xDetour(ptr_glDeleteLists, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glDeleteLists);
	}
	else if (FunctionCalled == "glDeleteTextures")
	{
		xDetour(ptr_glDeleteTextures, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glDeleteTextures);
	}
	else if (FunctionCalled == "glMultiTexCoord2fARB")
	{
		xDetour(ptr_glMultiTexCoord2fARB, ptr_wglGetProcAddress(lpszProc));
		return reinterpret_cast<PROC>(GLHook_glMultiTexCoord2fARB);
	}
	return ptr_wglGetProcAddress(lpszProc);
}

BOOL __stdcall GLHook_wglSwapBuffers(HDC hdc)
{
	OutputDebugStringA("wglSwapBuffers");
	return ptr_wglSwapBuffers(hdc);
}