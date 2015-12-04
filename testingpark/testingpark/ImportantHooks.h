#pragma once
#include <Windows.h>
#include <gl\GL.h>
#include <gl\glext.h>
#include <string>
#include "Export.h"

template <class T1, class T2>
void xDetour(T1 ptr, T2 ptr2) {
	ptr = (T1)ptr2;
}

extern "C" void __stdcall GLHook_glActiveTextureARB(GLenum texture);

extern "C" void __stdcall GLHook_glBindBufferARB(GLenum target, GLuint buffer);

extern "C" void __stdcall GLHook_glBindTexture(GLenum target, GLuint texture);

extern "C" void __stdcall GLHook_glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);

extern "C" void __stdcall GLHook_glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);

extern "C" void __stdcall GLHook_glCallList(GLuint list);

extern "C" void __stdcall GLHook_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);

extern "C" void __stdcall GLHook_glDeleteBuffersARB(GLsizei n, const GLuint* buffers);

extern "C" void __stdcall GLHook_glDeleteLists(GLuint list, GLsizei range);

extern "C" void __stdcall GLHook_glDeleteTextures(GLsizei n, const GLuint *textures);

extern "C" void __stdcall GLHook_glDisable(GLenum cap);

extern "C" void __stdcall GLHook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);

extern "C" void __stdcall GLHook_glEnable(GLenum cap);

extern "C" void __stdcall GLHook_glEnd(void);

extern "C" void __stdcall GLHook_glEndList(void);

extern "C" GLuint __stdcall GLHook_glGenLists(GLsizei range);

extern "C" void __stdcall GLHook_glGenTextures(GLsizei n, GLuint *textures);

extern "C" void __stdcall GLHook_glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);

extern "C" void __stdcall GLHook_glNewList(GLuint list, GLenum mode);

extern "C" void __stdcall GLHook_glPixelStorei(GLenum pname, GLint para);

extern "C" void __stdcall GLHook_glPopMatrix(void);

extern "C" void __stdcall GLHook_glTexCoord2f(GLfloat s, GLfloat t);

extern "C" void __stdcall GLHook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels);

extern "C" void __stdcall GLHook_glTranslatef(GLfloat x, GLfloat y, GLfloat z);

extern "C" void __stdcall GLHook_glVertex2f(GLfloat x, GLfloat y);

extern "C" void __stdcall GLHook_glVertex2i(GLint x, GLint y);

extern "C" void __stdcall GLHook_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern "C" PROC __stdcall GLHook_wglGetProcAddress(LPCSTR lpszProc);

extern "C" BOOL __stdcall GLHook_wglSwapBuffers(HDC hdc);
