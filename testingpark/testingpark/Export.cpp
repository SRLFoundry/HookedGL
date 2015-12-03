#include "Export.h"
#include "LibLoader.h"

void(__stdcall *ptr_glAccum) (GLenum op, GLfloat value);
void(__stdcall *ptr_glActiveTextureARB) (GLenum texture);
void(__stdcall *ptr_glAlphaFunc) (GLenum func, GLclampf ref);
GLboolean(__stdcall *ptr_glAreTexturesResident) (GLsizei n, const GLuint *textures, GLboolean *residences);
void(__stdcall *ptr_glArrayElement) (GLint index);
void(__stdcall *ptr_glBegin) (GLenum mode);
void(__stdcall *ptr_glBindBufferARB) (GLenum target, GLuint buffer);
void(__stdcall *ptr_glBindTexture) (GLenum target, GLuint texture);
void(__stdcall *ptr_glBitmap) (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
void(__stdcall *ptr_glBlendFunc) (GLenum sfactor, GLenum dfactor);
void(__stdcall *ptr_glBufferDataARB) (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
void(__stdcall *ptr_glBufferSubDataARB) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
void(__stdcall *ptr_glCallList) (GLuint list);
void(__stdcall *ptr_glCallLists) (GLsizei n, GLenum type, const GLvoid *lists);
void(__stdcall *ptr_glClear) (GLbitfield mask);
void(__stdcall *ptr_glClearAccum) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void(__stdcall *ptr_glClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void(__stdcall *ptr_glClearDepth) (GLclampd depth);
void(__stdcall *ptr_glClearIndex) (GLfloat c);
void(__stdcall *ptr_glClearStencil) (GLint s);
void(__stdcall *ptr_glClipPlane) (GLenum plane, const GLdouble *equation);


/**         TYPEDEFS: Colour Functions         **/

void(__stdcall *ptr_glColor3b) (GLbyte red, GLbyte green, GLbyte blue);
void(__stdcall *ptr_glColor3bv) (const GLbyte *v);
void(__stdcall *ptr_glColor3d) (GLdouble red, GLdouble green, GLdouble blue);
void(__stdcall *ptr_glColor3dv) (const GLdouble *v);
void(__stdcall *ptr_glColor3f) (GLfloat red, GLfloat green, GLfloat blue);
void(__stdcall *ptr_glColor3fv) (const GLfloat *v);
void(__stdcall *ptr_glColor3i) (GLint red, GLint green, GLint blue);
void(__stdcall *ptr_glColor3iv) (const GLint *v);
void(__stdcall *ptr_glColor3s) (GLshort red, GLshort green, GLshort blue);
void(__stdcall *ptr_glColor3sv) (const GLshort *v);
void(__stdcall *ptr_glColor3ub) (GLubyte red, GLubyte green, GLubyte blue);
void(__stdcall *ptr_glColor3ubv) (const GLubyte *v);
void(__stdcall *ptr_glColor3ui) (GLuint red, GLuint green, GLuint blue);
void(__stdcall *ptr_glColor3uiv) (const GLuint *v);
void(__stdcall *ptr_glColor3us) (GLushort red, GLushort green, GLushort blue);
void(__stdcall *ptr_glColor3usv) (const GLushort *v);

void(__stdcall *ptr_glColor4b) (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void(__stdcall *ptr_glColor4bv) (const GLbyte *v);
void(__stdcall *ptr_glColor4d) (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void(__stdcall *ptr_glColor4dv) (const GLdouble *v);
void(__stdcall *ptr_glColor4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void(__stdcall *ptr_glColor4fv) (const GLfloat *v);
void(__stdcall *ptr_glColor4i) (GLint red, GLint green, GLint blue, GLint alpha);
void(__stdcall *ptr_glColor4iv) (const GLint *v);
void(__stdcall *ptr_glColor4s) (GLshort red, GLshort green, GLshort blue, GLshort alpha);
void(__stdcall *ptr_glColor4sv) (const GLshort *v);
void(__stdcall *ptr_glColor4ub) (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void(__stdcall *ptr_glColor4ubv) (const GLubyte *v);
void(__stdcall *ptr_glColor4ui) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
void(__stdcall *ptr_glColor4uiv) (const GLuint *v);
void(__stdcall *ptr_glColor4us) (GLushort red, GLushort green, GLushort blue, GLushort alpha);
void(__stdcall *ptr_glColor4usv) (const GLushort *v);
void(__stdcall *ptr_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void(__stdcall *ptr_glColorMaterial) (GLenum face, GLenum mode);
void(__stdcall *ptr_glColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);


/**         TYPEDEFS: Continued         **/


void(__stdcall *ptr_glCopyPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
void(__stdcall *ptr_glCopyTexImage1D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void(__stdcall *ptr_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void(__stdcall *ptr_glCopyTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void(__stdcall *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void(__stdcall *ptr_glCullFace) (GLenum mode);
void(__stdcall *ptr_glDeleteBuffers) (GLsizei n, const GLuint* buffers);
void(__stdcall *ptr_glDeleteLists) (GLuint list, GLsizei range);
void(__stdcall *ptr_glDeleteTextures) (GLsizei n, const GLuint *textures);
void(__stdcall *ptr_glDepthFunc) (GLenum func);
void(__stdcall *ptr_glDepthMask) (GLboolean flag);
void(__stdcall *ptr_glDepthRange) (GLclampd zNear, GLclampd zFar);
void(__stdcall *ptr_glDisable) (GLenum cap);
void(__stdcall *ptr_glDisableClientState) (GLenum array);
void(__stdcall *ptr_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
void(__stdcall *ptr_glDrawBuffer) (GLenum mode);
void(__stdcall *ptr_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
void(__stdcall *ptr_glDrawPixels) (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
void(__stdcall *ptr_glDebugEntry) (DWORD dwArg1, DWORD dwArg2);

/**         TYPEDEFS: EdgeFlag Functions         **/

void(__stdcall *ptr_glEdgeFlag) (GLboolean flag);
void(__stdcall *ptr_glEdgeFlagv) (const GLboolean *flag);
void(__stdcall *ptr_glEdgeFlagPointer) (GLsizei stride, const GLvoid *pointer);


/**         TYPEDEFS: Continued         **/

void(__stdcall *ptr_glEnable) (GLenum cap);
void(__stdcall *ptr_glEnableClientState) (GLenum array);
void(__stdcall *ptr_glEnd) (void);
void(__stdcall *ptr_glEndList) (void);


/**         TYPEDEFS: Eval Coordinate Functions         **/

void(__stdcall *ptr_glEvalCoord1d) (GLdouble u);
void(__stdcall *ptr_glEvalCoord1dv) (const GLdouble *u);
void(__stdcall *ptr_glEvalCoord1f) (GLfloat u);
void(__stdcall *ptr_glEvalCoord1fv) (const GLfloat *u);
void(__stdcall *ptr_glEvalCoord2d) (GLdouble u, GLdouble v);
void(__stdcall *ptr_glEvalCoord2dv) (const GLdouble *u);
void(__stdcall *ptr_glEvalCoord2f) (GLfloat u, GLfloat v);
void(__stdcall *ptr_glEvalCoord2fv) (const GLfloat *u);


/**         TYPEDEFS: Eval Mesh Functions         **/

void(__stdcall *ptr_glEvalMesh1) (GLenum mode, GLint i1, GLint i2);
void(__stdcall *ptr_glEvalMesh2) (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);


/**         TYPEDEFS: Eval Point Functions         **/

void(__stdcall *ptr_glEvalPoint1) (GLint i);
void(__stdcall *ptr_glEvalPoint2) (GLint i, GLint j);


/**         TYPEDEFS: Continued         **/

void(__stdcall *ptr_glFeedbackBuffer) (GLsizei size, GLenum type, GLfloat *buffer);
void(__stdcall *ptr_glFinish) (void);
void(__stdcall *ptr_glFlush) (void);


/**         TYPEDEFS: Fog Functions         **/

void(__stdcall *ptr_glFogf) (GLenum pname, GLfloat param);
void(__stdcall *ptr_glFogfv) (GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glFogi) (GLenum pname, GLint param);
void(__stdcall *ptr_glFogiv) (GLenum pname, const GLint *params);


/**         TYPEDEFS: Continued         **/

void(__stdcall *ptr_glFrontFace) (GLenum mode);
void(__stdcall *ptr_glFrustum) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void(__stdcall *ptr_glGenBuffersARB) (GLsizei n, GLuint *buffers);
GLuint(__stdcall *ptr_glGenLists) (GLsizei range);
void(__stdcall *ptr_glGenTextures) (GLsizei n, GLuint *textures);


/**         TYPEDEFS: Get Functions        **/

void(__stdcall *ptr_glGetBooleanv) (GLenum pname, GLboolean *params);
void(__stdcall *ptr_glGetDoublev) (GLenum pname, GLboolean *params);
void(__stdcall *ptr_glGetFloatv) (GLenum pname, GLboolean *params);
void(__stdcall *ptr_glGetIntegerv) (GLenum pname, GLboolean *params);


/**         TYPEDEFS: Get Functions        **/

void(__stdcall *ptr_glGetClipPlane) (GLenum plane, GLdouble *equation);
GLenum(__stdcall *ptr_glGetError) (void);


/**         TYPEDEFS: Get Light Functions        **/

void(__stdcall *ptr_glGetLightfv) (GLenum light, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetLightiv) (GLenum light, GLenum pname, GLint *params);


/**         TYPEDEFS: Get Map Functions        **/

void(__stdcall *ptr_glGetMapdv) (GLenum target, GLenum query, GLdouble *v);
void(__stdcall *ptr_glGetMapfv) (GLenum target, GLenum query, GLfloat *v);
void(__stdcall *ptr_glGetMapiv) (GLenum target, GLenum query, GLint *v);


/**         TYPEDEFS: Get Material Functions        **/

void(__stdcall *ptr_glGetMaterialfv) (GLenum face, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetMaterialiv) (GLenum face, GLenum pname, GLint *params);


/**         TYPEDEFS: Get PixelMap Functions        **/

void(__stdcall *ptr_glGetPixelMapfv) (GLenum map, GLfloat *values);
void(__stdcall *ptr_glGetPixelMapuiv) (GLenum map, GLuint *values);
void(__stdcall *ptr_glGetPixelMapusv) (GLenum map, GLushort *values);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glGetPointerv) (GLenum pname, GLvoid **params);
void(__stdcall *ptr_glGetPolygonStipple) (GLubyte *mask);
const GLubyte* (__stdcall *ptr_glGetString) (GLenum name);


/**         TYPEDEFS: GetTexENV/GetTexGEN Functions        **/

void(__stdcall *ptr_glGetTexEnvfv) (GLenum target, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetTexEnviv) (GLenum target, GLenum pname, GLint *params);
void(__stdcall *ptr_glGetTexGendv) (GLenum coord, GLenum pname, GLdouble *params);
void(__stdcall *ptr_glGetTexGenfv) (GLenum coord, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetTexGeniv) (GLenum coord, GLenum pname, GLint *params);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glGetTexImage) (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
void(__stdcall *ptr_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params);
void(__stdcall *ptr_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
void(__stdcall *ptr_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
void(__stdcall *ptr_glHint) (GLenum target, GLenum mode);


/**         TYPEDEFS: Index Functions        **/

void(__stdcall *ptr_glIndexd) (GLdouble c);
void(__stdcall *ptr_glIndexdv) (const GLdouble *c);
void(__stdcall *ptr_glIndexf) (GLfloat c);
void(__stdcall *ptr_glIndexfv) (const GLfloat *c);
void(__stdcall *ptr_glIndexi) (GLint c);
void(__stdcall *ptr_glIndexiv) (const GLint *c);
void(__stdcall *ptr_glIndexs) (GLshort c);
void(__stdcall *ptr_glIndexsv) (const GLshort *c);
void(__stdcall *ptr_glIndexub) (GLubyte c);
void(__stdcall *ptr_glIndexubv) (const GLubyte *c);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glIndexMask) (GLuint mask);
void(__stdcall *ptr_glIndexPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
void(__stdcall *ptr_glInitNames) (void);
void(__stdcall *ptr_glInterleavedArrays) (GLenum format, GLsizei stride, const GLvoid *pointer);
GLboolean(__stdcall *ptr_glIsEnabled) (GLenum cap);
GLboolean(__stdcall *ptr_glIsList) (GLuint list);
GLboolean(__stdcall *ptr_glIsTexture) (GLuint texture);


/**         TYPEDEFS: Light Functions        **/

void(__stdcall *ptr_glLightf) (GLenum light, GLenum pname, GLfloat param);
void(__stdcall *ptr_glLightfv) (GLenum light, GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glLighti) (GLenum light, GLenum pname, GLint param);
void(__stdcall *ptr_glLightiv) (GLenum light, GLenum pname, const GLint *params);
void(__stdcall *ptr_glLightModelf) (GLenum pname, GLfloat *param);
void(__stdcall *ptr_glLightModelfv) (GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glLightModeli) (GLenum pname, GLint param);
void(__stdcall *ptr_glLightModeliv) (GLenum pname, const GLint *params);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glLineStipple) (GLint factor, GLushort pattern);
void(__stdcall *ptr_glLineWidth) (GLfloat width);
void(__stdcall *ptr_glListBase) (GLuint base);
void(__stdcall *ptr_glLoadIdentity) (void);
void(__stdcall *ptr_glLoadMatrixd) (const GLdouble *m);
void(__stdcall *ptr_glLoadMatrixf) (const GLfloat *m);
void(__stdcall *ptr_glLoadName) (GLuint name);
void(__stdcall *ptr_glLogicOp) (GLenum opcode);


/**         TYPEDEFS: Map#/Material Functions        **/

void(__stdcall *ptr_glMap1d) (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
void(__stdcall *ptr_glMap1f) (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
void(__stdcall *ptr_glMap2d) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
void(__stdcall *ptr_glMap2f) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
void(__stdcall *ptr_glMapGrid1d) (GLint un, GLdouble u1, GLdouble u2);
void(__stdcall *ptr_glMapGrid1f) (GLint un, GLfloat u1, GLfloat u2);
void(__stdcall *ptr_glMapGrid2d) (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void(__stdcall *ptr_glMapGrid2f) (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void(__stdcall *ptr_glMaterialf) (GLenum face, GLenum pname, GLfloat param);
void(__stdcall *ptr_glMaterialfv) (GLenum face, GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glMateriali) (GLenum face, GLenum pname, GLint param);
void(__stdcall *ptr_glMaterialiv) (GLenum face, GLenum pname, const GLint *params);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glMatrixMode) (GLenum mode);
void(__stdcall *ptr_glMultiTexCoord2fARB) (GLenum target, GLfloat s, GLfloat t);
void(__stdcall *ptr_glMultMatrixd) (const GLdouble *m);
void(__stdcall *ptr_glMultMatrixf) (const GLdouble *m);
void(__stdcall *ptr_glNewList) (GLuint list, GLenum mode);


/**         TYPEDEFS: Normal/Coordinate Functions        **/

void(__stdcall *ptr_glNormal3b) (GLbyte nx, GLbyte ny, GLbyte nz);
void(__stdcall *ptr_glNormal3bv) (const GLbyte *v);
void(__stdcall *ptr_glNormal3d) (GLdouble nx, GLdouble ny, GLdouble nz);
void(__stdcall *ptr_glNormal3dv) (const GLdouble *v);
void(__stdcall *ptr_glNormal3f) (GLfloat nx, GLfloat ny, GLfloat nz);
void(__stdcall *ptr_glNormal3fv) (const GLfloat *v);
void(__stdcall *ptr_glNormal3i) (GLint nx, GLint ny, GLint nz);
void(__stdcall *ptr_glNormal3iv) (const GLint *v);
void(__stdcall *ptr_glNormal3s) (GLshort nx, GLshort ny, GLshort nz);
void(__stdcall *ptr_glNormal3sv) (const GLshort *v);
void(__stdcall *ptr_glNormalPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);

void(__stdcall *ptr_glOrtho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void(__stdcall *ptr_glPassThrough) (GLfloat token);


/**         TYPEDEFS: Pixel Functions        **/

void(__stdcall *ptr_glPixelMapfv) (GLenum map, GLsizei mapsize, const GLfloat *values);
void(__stdcall *ptr_glPixelMapuiv) (GLenum map, GLsizei mapsize, const GLuint *values);
void(__stdcall *ptr_glPixelMapusv) (GLenum map, GLsizei mapsize, const GLushort *values);
void(__stdcall *ptr_glPixelStoref) (GLenum pname, GLfloat param);
void(__stdcall *ptr_glPixelStorei) (GLenum pname, GLint para);
void(__stdcall *ptr_glPixelTransferf) (GLenum pname, GLfloat param);
void(__stdcall *ptr_glPixelTransferi) (GLenum pname, GLint param);
void(__stdcall *ptr_glPixelZoom) (GLfloat xfactor, GLfloat yfactor);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glPointSize) (GLfloat size);
void(__stdcall *ptr_glPolygonMode) (GLenum face, GLenum mode);
void(__stdcall *ptr_glPolygonOffset) (GLfloat factor, GLfloat units);
void(__stdcall *ptr_glPolygonStipple) (const GLubyte *mask);
void(__stdcall *ptr_glPopAttrib) (void);
void(__stdcall *ptr_glPopClientAttrib) (void);
void(__stdcall *ptr_glPopMatrix) (void);
void(__stdcall *ptr_glPopName) (void);
void(__stdcall *ptr_glPrioritizeTextures) (GLsizei n, const GLuint *textures, const GLclampf *priorities);
void(__stdcall *ptr_glPushAttrib) (GLbitfield mask);
void(__stdcall *ptr_glPushClientAttrib) (GLbitfield mask);
void(__stdcall *ptr_glPushMatrix) (void);
void(__stdcall *ptr_glPushName) (GLuint name);


/**         TYPEDEFS: Raster Functions        **/

void(__stdcall *ptr_glRasterPos2d) (GLdouble x, GLdouble y);
void(__stdcall *ptr_glRasterPos2dv) (const GLdouble *v);
void(__stdcall *ptr_glRasterPos2f) (GLfloat x, GLfloat y);
void(__stdcall *ptr_glRasterPos2fv) (const GLfloat *v);
void(__stdcall *ptr_glRasterPos2i) (GLint x, GLint y);
void(__stdcall *ptr_glRasterPos2iv) (const GLint *v);
void(__stdcall *ptr_glRasterPos2s) (GLshort x, GLshort y);
void(__stdcall *ptr_glRasterPos2sv) (const GLshort *v);
void(__stdcall *ptr_glRasterPos3d) (GLdouble x, GLdouble y, GLdouble z);
void(__stdcall *ptr_glRasterPos3dv) (const GLdouble *v);
void(__stdcall *ptr_glRasterPos3f) (GLfloat x, GLfloat y, GLfloat z);
void(__stdcall *ptr_glRasterPos3fv) (const GLfloat *v);
void(__stdcall *ptr_glRasterPos3i) (GLint x, GLint y, GLint z);
void(__stdcall *ptr_glRasterPos3iv) (const GLint *v);
void(__stdcall *ptr_glRasterPos3s) (GLshort x, GLshort y, GLshort z);
void(__stdcall *ptr_glRasterPos3sv) (const GLshort *v);
void(__stdcall *ptr_glRasterPos4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void(__stdcall *ptr_glRasterPos4dv) (const GLdouble *v);
void(__stdcall *ptr_glRasterPos4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void(__stdcall *ptr_glRasterPos4fv) (const GLfloat *v);
void(__stdcall *ptr_glRasterPos4i) (GLint x, GLint y, GLint z, GLint w);
void(__stdcall *ptr_glRasterPos4iv) (const GLint *v);
void(__stdcall *ptr_glRasterPos4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void(__stdcall *ptr_glRasterPos4sv) (const GLshort *v);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glReadBuffer) (GLenum mode);
void(__stdcall *ptr_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);


/**         TYPEDEFS: Rect/Render/Rotate/Scale Functions        **/

void(__stdcall *ptr_glRectd) (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void(__stdcall *ptr_glRectdv) (const GLdouble *v1, const GLdouble *v2);
void(__stdcall *ptr_glRectf) (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void(__stdcall *ptr_glRectfv) (const GLfloat *v1, const GLfloat *v2);
void(__stdcall *ptr_glRecti) (GLint x1, GLint y1, GLint x2, GLint y2);
void(__stdcall *ptr_glRectiv) (const GLint *v1, const GLint *v2);
void(__stdcall *ptr_glRects) (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void(__stdcall *ptr_glRectsv) (const GLshort *v1, const GLshort *v2);
GLint(__stdcall *ptr_glRenderMode) (GLenum mode);
void(__stdcall *ptr_glRotated) (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void(__stdcall *ptr_glRotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void(__stdcall *ptr_glScaled) (GLdouble x, GLdouble y, GLdouble z);
void(__stdcall *ptr_glScalef) (GLfloat x, GLfloat y, GLfloat z);


/**         TYPEDEFS: Continued        **/

void(__stdcall *ptr_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
void(__stdcall *ptr_glSelectBuffer) (GLsizei size, GLuint *buffer);
void(__stdcall *ptr_glShadeModel) (GLenum mode);
void(__stdcall *ptr_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
void(__stdcall *ptr_glStencilMask) (GLuint mask);
void(__stdcall *ptr_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);


/**         TYPEDEFS: Tex Functions        **/

void(__stdcall *ptr_glTexCoord1d) (GLdouble s);
void(__stdcall *ptr_glTexCoord1dv) (const GLdouble *v);
void(__stdcall *ptr_glTexCoord1f) (GLfloat s);
void(__stdcall *ptr_glTexCoord1fv) (const GLfloat *v);
void(__stdcall *ptr_glTexCoord1i) (GLint s);
void(__stdcall *ptr_glTexCoord1iv) (const GLint *v);
void(__stdcall *ptr_glTexCoord1s) (GLshort s);
void(__stdcall *ptr_glTexCoord1sv) (const GLshort *v);
void(__stdcall *ptr_glTexCoord2d) (GLdouble s, GLdouble t);
void(__stdcall *ptr_glTexCoord2dv) (const GLdouble *v);
void(__stdcall *ptr_glTexCoord2f) (GLfloat s, GLfloat t);
void(__stdcall *ptr_glTexCoord2fv) (const GLfloat *v);
void(__stdcall *ptr_glTexCoord2i) (GLint s, GLint t);
void(__stdcall *ptr_glTexCoord2iv) (const GLint *v);
void(__stdcall *ptr_glTexCoord2s) (GLshort s, GLshort t);
void(__stdcall *ptr_glTexCoord2sv) (const GLshort *v);
void(__stdcall *ptr_glTexCoord3d) (GLdouble s, GLdouble t, GLdouble r);
void(__stdcall *ptr_glTexCoord3dv) (const GLdouble *v);
void(__stdcall *ptr_glTexCoord3f) (GLfloat s, GLfloat t, GLfloat r);
void(__stdcall *ptr_glTexCoord3fv) (const GLfloat *v);
void(__stdcall *ptr_glTexCoord3i) (GLint s, GLint t, GLint r);
void(__stdcall *ptr_glTexCoord3iv) (const GLint *v);
void(__stdcall *ptr_glTexCoord3s) (GLshort s, GLshort t, GLshort r);
void(__stdcall *ptr_glTexCoord3sv) (const GLshort *v);
void(__stdcall *ptr_glTexCoord4d) (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void(__stdcall *ptr_glTexCoord4dv) (const GLdouble *v);
void(__stdcall *ptr_glTexCoord4f) (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void(__stdcall *ptr_glTexCoord4fv) (const GLfloat *v);
void(__stdcall *ptr_glTexCoord4i) (GLint s, GLint t, GLint r, GLint q);
void(__stdcall *ptr_glTexCoord4iv) (const GLint *v);
void(__stdcall *ptr_glTexCoord4s) (GLshort s, GLshort t, GLshort r, GLshort q);
void(__stdcall *ptr_glTexCoord4sv) (const GLshort *v);
void(__stdcall *ptr_glTexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void(__stdcall *ptr_glTexEnvf) (GLenum target, GLenum pname, GLfloat param);
void(__stdcall *ptr_glTexEnvfv) (GLenum target, GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glTexEnvi) (GLenum target, GLenum pname, GLint param);
void(__stdcall *ptr_glTexEnviv) (GLenum target, GLenum pname, const GLint *params);
void(__stdcall *ptr_glTexGend) (GLenum coord, GLenum pname, GLdouble param);
void(__stdcall *ptr_glTexGendv) (GLenum coord, GLenum pname, const GLdouble *params);
void(__stdcall *ptr_glTexGenf) (GLenum coord, GLenum pname, GLfloat param);
void(__stdcall *ptr_glTexGenfv) (GLenum coord, GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glTexGeni) (GLenum coord, GLenum pname, GLint param);
void(__stdcall *ptr_glTexGeniv) (GLenum coord, GLenum pname, const GLint *params);
void(__stdcall *ptr_glTexImage1D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLint format, GLenum type, const GLvoid *pixels);
void(__stdcall *ptr_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels);
void(__stdcall *ptr_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
void(__stdcall *ptr_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
void(__stdcall *ptr_glTexParameteri) (GLenum target, GLenum pname, GLint param);
void(__stdcall *ptr_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
void(__stdcall *ptr_glTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
void(__stdcall *ptr_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);


/**         TYPEDEFS: Translate/Vertex Functions       **/

void(__stdcall *ptr_glTranslated) (GLdouble x, GLdouble y, GLdouble z);
void(__stdcall *ptr_glTranslatef) (GLfloat x, GLfloat y, GLfloat z);
void(__stdcall *ptr_glVertex2d) (GLdouble x, GLdouble y);
void(__stdcall *ptr_glVertex2dv) (const GLdouble *v);
void(__stdcall *ptr_glVertex2f) (GLfloat x, GLfloat y);
void(__stdcall *ptr_glVertex2fv) (const GLfloat *v);
void(__stdcall *ptr_glVertex2i) (GLint x, GLint y);
void(__stdcall *ptr_glVertex2iv) (const GLint *v);
void(__stdcall *ptr_glVertex2s) (GLshort x, GLshort y);
void(__stdcall *ptr_glVertex2sv) (const GLshort *v);
void(__stdcall *ptr_glVertex3d) (GLdouble x, GLdouble y, GLdouble z);
void(__stdcall *ptr_glVertex3dv) (const GLdouble *v);
void(__stdcall *ptr_glVertex3f) (GLfloat x, GLfloat y, GLfloat z);
void(__stdcall *ptr_glVertex3fv) (const GLfloat *v);
void(__stdcall *ptr_glVertex3i) (GLint x, GLint y, GLint z);
void(__stdcall *ptr_glVertex3iv) (const GLint *v);
void(__stdcall *ptr_glVertex3s) (GLshort x, GLshort y, GLshort z);
void(__stdcall *ptr_glVertex3sv) (const GLshort *v);
void(__stdcall *ptr_glVertex4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void(__stdcall *ptr_glVertex4dv) (const GLdouble *v);
void(__stdcall *ptr_glVertex4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void(__stdcall *ptr_glVertex4fv) (const GLfloat *v);
void(__stdcall *ptr_glVertex4i) (GLint x, GLint y, GLint z, GLint w);
void(__stdcall *ptr_glVertex4iv) (const GLint *v);
void(__stdcall *ptr_glVertex4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void(__stdcall *ptr_glVertex4sv) (const GLshort *v);
void(__stdcall *ptr_glVertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void(__stdcall *ptr_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);

#if defined _WIN32 || defined _WIN64
int(__stdcall *ptr_wglChoosePixelFormat) (HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd);
HGLRC(__stdcall *ptr_wglCreateContext) (HDC hdc);
HGLRC(__stdcall *ptr_wglCreateLayerContext) (HDC hdc, int iLayerPlane);
BOOL(__stdcall *ptr_wglCopyContext) (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
BOOL(__stdcall *ptr_wglDeleteContext) (HGLRC hglrc);
BOOL(__stdcall *ptr_wglDescribeLayerPlane) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd);
int(__stdcall *ptr_wglDescribePixelFormat) (HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd);
HGLRC(__stdcall *ptr_wglGetCurrentContext) (void);
HDC(__stdcall *ptr_wglGetCurrentDC) (void);
PROC(__stdcall *ptr_wglGetDefaultProcAddress) (LPCSTR lpszProc);
int(__stdcall *ptr_wglGetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr);
int(__stdcall *ptr_wglGetPixelFormat) (HDC hdc);
PROC(__stdcall *ptr_wglGetProcAddress) (LPCSTR lpszProc);
BOOL(__stdcall *ptr_wglMakeCurrent) (HDC hdc, HGLRC hglrc);
BOOL(__stdcall *ptr_wglRealizeLayerPalette) (HDC hdc, int iLayerPlane, BOOL bRealize);
int(__stdcall *ptr_wglSetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
BOOL(__stdcall *ptr_wglSetPixelFormat) (HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd);
BOOL(__stdcall *ptr_wglShareLists) (HGLRC hglrc1, HGLRC hglrc2);
BOOL(__stdcall *ptr_wglSwapBuffers) (HDC hdc);
BOOL(__stdcall *ptr_wglSwapLayerBuffers) (HDC hdc, UINT fuPlanes);
void(__stdcall *ptr_wglSwapMultipleBuffers) (DWORD dwArg1, DWORD dwArg2);
BOOL(__stdcall *ptr_wglUseFontBitmapsW) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL(__stdcall *ptr_wglUseFontBitmapsA) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL(__stdcall *ptr_wglUseFontOutlinesW) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL(__stdcall *ptr_wglUseFontOutlinesA) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
#endif

bool init()
{
	// Find the opengl dll to load in system32.


	LibLoader OGL("test");

	try
	{
		ptr_glAccum = (void(__stdcall *)(GLenum, GLfloat)) OGL.getFuncPointer("glAccum");
		ptr_glActiveTextureARB = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glActiveTextureARB");
		ptr_glAlphaFunc = (void(__stdcall *)(GLenum, GLclampf)) OGL.getFuncPointer("glAlphaFunc");
		ptr_glAreTexturesResident = (GLboolean(__stdcall *)(GLsizei, const GLuint *, GLboolean *)) OGL.getFuncPointer("glAreTexturesResident");
		ptr_glArrayElement = (void(__stdcall *)(GLint)) OGL.getFuncPointer("glArrayElement");
		ptr_glBegin = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glBegin");
		ptr_glBindBufferARB = (void(__stdcall *)(GLenum, GLuint)) OGL.getFuncPointer("glBindBufferARB");
		ptr_glBindTexture = (void(__stdcall *)(GLenum, GLuint)) OGL.getFuncPointer("glBindTexture");
		ptr_glBitmap = (void(__stdcall *)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *)) OGL.getFuncPointer("glBitmap");
		ptr_glBlendFunc = (void(__stdcall *)(GLenum, GLenum)) OGL.getFuncPointer("glBlendFunc");
		ptr_glBufferDataARB = (void(__stdcall *)(GLenum, GLsizeiptrARB, const GLvoid *, GLenum)) OGL.getFuncPointer("glBufferDataARB");
		ptr_glBufferSubDataARB = (void(__stdcall *)(GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *)) OGL.getFuncPointer("glBufferSubDataARB");
		ptr_glCallList = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glCallList");
		ptr_glCallLists = (void(__stdcall *)(GLsizei, GLenum, const GLvoid *)) OGL.getFuncPointer("glCallLists");
		ptr_glClear = (void(__stdcall *)(GLbitfield)) OGL.getFuncPointer("glClear");
		ptr_glClearAccum = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glClearAccum");
		ptr_glClearColor = (void(__stdcall *)(GLclampf, GLclampf, GLclampf, GLclampf)) OGL.getFuncPointer("glClearColor");
		ptr_glClearDepth = (void(__stdcall *)(GLclampd)) OGL.getFuncPointer("glClearDepth");
		ptr_glClearIndex = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glClearIndex");
		ptr_glClearStencil = (void(__stdcall *)(GLint)) OGL.getFuncPointer("glClearStencil");
		ptr_glClipPlane = (void(__stdcall *)(GLenum, const GLdouble *)) OGL.getFuncPointer("glClipPlane");
		ptr_glColor3b = (void(__stdcall *)(GLbyte, GLbyte, GLbyte)) OGL.getFuncPointer("glColor3b");
		ptr_glColor3bv = (void(__stdcall *)(const GLbyte *)) OGL.getFuncPointer("glColor3bv");
		ptr_glColor3d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glColor3d");
		ptr_glColor3dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glColor3dv");
		ptr_glColor3f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glColor3f");
		ptr_glColor3fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glColor3fv");
		ptr_glColor3i = (void(__stdcall *)(GLint, GLint, GLint)) OGL.getFuncPointer("glColor3i");
		ptr_glColor3iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glColor3iv");
		ptr_glColor3s = (void(__stdcall *)(GLshort, GLshort, GLshort)) OGL.getFuncPointer("glColor3s");
		ptr_glColor3sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glColor3sv");
		ptr_glColor3ub = (void(__stdcall *)(GLubyte, GLubyte, GLubyte)) OGL.getFuncPointer("glColor3ub");
		ptr_glColor3ubv = (void(__stdcall *)(const GLubyte *)) OGL.getFuncPointer("glColor3ubv");
		ptr_glColor3ui = (void(__stdcall *)(GLuint, GLuint, GLuint)) OGL.getFuncPointer("glColor3ui");
		ptr_glColor3uiv = (void(__stdcall *)(const GLuint *)) OGL.getFuncPointer("glColor3uiv");
		ptr_glColor3us = (void(__stdcall *)(GLushort, GLushort, GLushort)) OGL.getFuncPointer("glColor3us");
		ptr_glColor3usv = (void(__stdcall *)(const GLushort *)) OGL.getFuncPointer("glColor3usv");
		ptr_glColor4b = (void(__stdcall *)(GLbyte, GLbyte, GLbyte, GLbyte)) OGL.getFuncPointer("glColor4b");
		ptr_glColor4bv = (void(__stdcall *)(const GLbyte *)) OGL.getFuncPointer("glColor4bv");
		ptr_glColor4d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glColor4d");
		ptr_glColor4dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glColor4dv");
		ptr_glColor4f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glColor4f");
		ptr_glColor4fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glColor4fv");
		ptr_glColor4i = (void(__stdcall *)(GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glColor4i");
		ptr_glColor4iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glColor4iv");
		ptr_glColor4s = (void(__stdcall *)(GLshort, GLshort, GLshort, GLshort)) OGL.getFuncPointer("glColor4s");
		ptr_glColor4sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glColor4sv");
		ptr_glColor4ub = (void(__stdcall *)(GLubyte, GLubyte, GLubyte, GLubyte)) OGL.getFuncPointer("glColor4ub");
		ptr_glColor4ubv = (void(__stdcall *)(const GLubyte *)) OGL.getFuncPointer("glColor4ubv");
		ptr_glColor4ui = (void(__stdcall *)(GLuint, GLuint, GLuint, GLuint)) OGL.getFuncPointer("glColor4ui");
		ptr_glColor4uiv = (void(__stdcall *)(const GLuint *)) OGL.getFuncPointer("glColor4uiv");
		ptr_glColor4us = (void(__stdcall *)(GLushort, GLushort, GLushort, GLushort)) OGL.getFuncPointer("glColor4us");
		ptr_glColor4usv = (void(__stdcall *)(const GLushort *)) OGL.getFuncPointer("glColor4usv");
		ptr_glColorMask = (void(__stdcall *)(GLboolean, GLboolean, GLboolean, GLboolean)) OGL.getFuncPointer("glColorMask");
		ptr_glColorMaterial = (void(__stdcall *)(GLenum, GLenum)) OGL.getFuncPointer("glColorMaterial");
		ptr_glColorPointer = (void(__stdcall *)(GLint, GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glColorPointer");
		ptr_glCopyPixels = (void(__stdcall *)(GLint, GLint, GLsizei, GLsizei, GLenum)) OGL.getFuncPointer("glCopyPixels");
		ptr_glCopyTexImage1D = (void(__stdcall *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint)) OGL.getFuncPointer("glCopyTexImage1D");
		ptr_glCopyTexImage2D = (void(__stdcall *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)) OGL.getFuncPointer("glCopyTexImage2D");
		ptr_glCopyTexSubImage1D = (void(__stdcall *)(GLenum, GLint, GLint, GLint, GLint, GLsizei)) OGL.getFuncPointer("glCopyTexSubImage1D");
		ptr_glCopyTexSubImage2D = (void(__stdcall *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)) OGL.getFuncPointer("glCopyTexSubImage2D");
		ptr_glCullFace = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glCullFace");
		ptr_glDeleteBuffers = (void(__stdcall *)(GLsizei, const GLuint* buffers)) OGL.getFuncPointer("glDeleteBuffers");
		ptr_glDeleteLists = (void(__stdcall *)(GLuint, GLsizei)) OGL.getFuncPointer("glDeleteLists");
		ptr_glDeleteTextures = (void(__stdcall *)(GLsizei, const GLuint *)) OGL.getFuncPointer("glDeleteTextures");
		ptr_glDepthFunc = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glDepthFunc");
		ptr_glDepthMask = (void(__stdcall *)(GLboolean)) OGL.getFuncPointer("glDepthMask");
		ptr_glDepthRange = (void(__stdcall *)(GLclampd, GLclampd)) OGL.getFuncPointer("glDepthRange");
		ptr_glDisable = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glDisable");
		ptr_glDisableClientState = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glDisableClientState");
		ptr_glDrawArrays = (void(__stdcall *)(GLenum, GLint, GLsizei)) OGL.getFuncPointer("glDrawArrays");
		ptr_glDrawBuffer = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glDrawBuffer");
		ptr_glDrawElements = (void(__stdcall *)(GLenum, GLsizei, GLenum, const GLvoid *)) OGL.getFuncPointer("glDrawElements");
		ptr_glDrawPixels = (void(__stdcall *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) OGL.getFuncPointer("glDrawPixels");
		ptr_glDebugEntry = (void(__stdcall *)(DWORD dwArg1, DWORD dwArg2)) OGL.getFuncPointer("glDebugEntry");
		ptr_glEdgeFlag = (void(__stdcall *)(GLboolean)) OGL.getFuncPointer("glEdgeFlag");
		ptr_glEdgeFlagv = (void(__stdcall *)(const GLboolean *)) OGL.getFuncPointer("glEdgeFlagv");
		ptr_glEdgeFlagPointer = (void(__stdcall *)(GLsizei, const GLvoid *)) OGL.getFuncPointer("glEdgeFlagPointer");
		ptr_glEnable = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glEnable");
		ptr_glEnableClientState = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glEnableClientState");
		ptr_glEnd = (void(__stdcall *)(void)) OGL.getFuncPointer("glEnd");
		ptr_glEndList = (void(__stdcall *)(void)) OGL.getFuncPointer("glEndList");
		ptr_glEvalCoord1d = (void(__stdcall *)(GLdouble)) OGL.getFuncPointer("glEvalCoord1d");
		ptr_glEvalCoord1dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glEvalCoord1dv");
		ptr_glEvalCoord1f = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glEvalCoord1f");
		ptr_glEvalCoord1fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glEvalCoord1fv");
		ptr_glEvalCoord2d = (void(__stdcall *)(GLdouble, GLdouble)) OGL.getFuncPointer("glEvalCoord2d");
		ptr_glEvalCoord2dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glEvalCoord2dv");
		ptr_glEvalCoord2f = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glEvalCoord2f");
		ptr_glEvalCoord2fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glEvalCoord2fv");
		ptr_glEvalMesh1 = (void(__stdcall *)(GLenum, GLint, GLint)) OGL.getFuncPointer("glEvalMesh1");
		ptr_glEvalMesh2 = (void(__stdcall *)(GLenum, GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glEvalMesh2");
		ptr_glEvalPoint1 = (void(__stdcall *)(GLint)) OGL.getFuncPointer("glEvalPoint1");
		ptr_glEvalPoint2 = (void(__stdcall *)(GLint, GLint)) OGL.getFuncPointer("glEvalPoint2");
		ptr_glFeedbackBuffer = (void(__stdcall *)(GLsizei, GLenum, GLfloat *)) OGL.getFuncPointer("glFeedbackBuffer");
		ptr_glFinish = (void(__stdcall *)(void)) OGL.getFuncPointer("glFinish");
		ptr_glFlush = (void(__stdcall *)(void)) OGL.getFuncPointer("glFlush");
		ptr_glFogf = (void(__stdcall *)(GLenum, GLfloat)) OGL.getFuncPointer("glFogf");
		ptr_glFogfv = (void(__stdcall *)(GLenum, const GLfloat *)) OGL.getFuncPointer("glFogfv");
		ptr_glFogi = (void(__stdcall *)(GLenum, GLint)) OGL.getFuncPointer("glFogi");
		ptr_glFogiv = (void(__stdcall *)(GLenum, const GLint *)) OGL.getFuncPointer("glFogiv");
		ptr_glFrontFace = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glFrontFace");
		ptr_glFrustum = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glFrustum");
		ptr_glGenBuffersARB = (void(__stdcall *)(GLsizei, GLuint *)) OGL.getFuncPointer("glGenBuffersARB");
		ptr_glGenLists = (GLuint(__stdcall *)(GLsizei)) OGL.getFuncPointer("glGenLists");
		ptr_glGenTextures = (void(__stdcall *)(GLsizei, GLuint *)) OGL.getFuncPointer("glGenTextures");
		ptr_glGetBooleanv = (void(__stdcall *)(GLenum, GLboolean *)) OGL.getFuncPointer("glGetBooleanv");
		ptr_glGetDoublev = (void(__stdcall *)(GLenum, GLboolean *)) OGL.getFuncPointer("glGetDoublev");
		ptr_glGetFloatv = (void(__stdcall *)(GLenum, GLboolean *)) OGL.getFuncPointer("glGetFloatv");
		ptr_glGetIntegerv = (void(__stdcall *)(GLenum, GLboolean *)) OGL.getFuncPointer("glGetIntegerv");
		ptr_glGetClipPlane = (void(__stdcall *)(GLenum, GLdouble *)) OGL.getFuncPointer("glGetClipPlane");
		ptr_glGetError = (GLenum(__stdcall *)(void)) OGL.getFuncPointer("glGetError");
		ptr_glGetLightfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetLightfv");
		ptr_glGetLightiv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetLightiv");
		ptr_glGetMapdv = (void(__stdcall *)(GLenum, GLenum, GLdouble *)) OGL.getFuncPointer("glGetMapdv");
		ptr_glGetMapfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetMapfv");
		ptr_glGetMapiv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetMapiv");
		ptr_glGetMaterialfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetMaterialfv");
		ptr_glGetMaterialiv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetMaterialiv");
		ptr_glGetPixelMapfv = (void(__stdcall *)(GLenum, GLfloat *)) OGL.getFuncPointer("glGetPixelMapfv");
		ptr_glGetPixelMapuiv = (void(__stdcall *)(GLenum, GLuint *)) OGL.getFuncPointer("glGetPixelMapuiv");
		ptr_glGetPixelMapusv = (void(__stdcall *)(GLenum, GLushort *)) OGL.getFuncPointer("glGetPixelMapusv");
		ptr_glGetPointerv = (void(__stdcall *)(GLenum, GLvoid **)) OGL.getFuncPointer("glGetPointerv");
		ptr_glGetPolygonStipple = (void(__stdcall *)(GLubyte *)) OGL.getFuncPointer("glGetPolygonStipple");
		ptr_glGetString = (const GLubyte* (__stdcall *)(GLenum)) OGL.getFuncPointer("glGetString");
		ptr_glGetTexEnvfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetTexEnvfv");
		ptr_glGetTexEnviv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetTexEnviv");
		ptr_glGetTexGendv = (void(__stdcall *)(GLenum, GLenum, GLdouble *)) OGL.getFuncPointer("glGetTexGendv");
		ptr_glGetTexGenfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetTexGenfv");
		ptr_glGetTexGeniv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetTexGeniv");
		ptr_glGetTexImage = (void(__stdcall *)(GLenum, GLint, GLenum, GLenum, GLvoid *)) OGL.getFuncPointer("glGetTexImage");
		ptr_glGetTexLevelParameterfv = (void(__stdcall *)(GLenum, GLint, GLenum, GLfloat *)) OGL.getFuncPointer("glGetTexLevelParameterfv");
		ptr_glGetTexLevelParameteriv = (void(__stdcall *)(GLenum, GLint, GLenum, GLint *)) OGL.getFuncPointer("glGetTexLevelParameteriv");
		ptr_glGetTexParameterfv = (void(__stdcall *)(GLenum, GLenum, GLfloat *)) OGL.getFuncPointer("glGetTexParameterfv");
		ptr_glGetTexParameteriv = (void(__stdcall *)(GLenum, GLenum, GLint *)) OGL.getFuncPointer("glGetTexParameteriv");
		ptr_glHint = (void(__stdcall *)(GLenum, GLenum)) OGL.getFuncPointer("glHint");
		ptr_glIndexd = (void(__stdcall *)(GLdouble)) OGL.getFuncPointer("glIndexd");
		ptr_glIndexdv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glIndexdv");
		ptr_glIndexf = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glIndexf");
		ptr_glIndexfv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glIndexfv");
		ptr_glIndexi = (void(__stdcall *)(GLint)) OGL.getFuncPointer("glIndexi");
		ptr_glIndexiv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glIndexiv");
		ptr_glIndexs = (void(__stdcall *)(GLshort)) OGL.getFuncPointer("glIndexs");
		ptr_glIndexsv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glIndexsv");
		ptr_glIndexub = (void(__stdcall *)(GLubyte)) OGL.getFuncPointer("glIndexub");
		ptr_glIndexubv = (void(__stdcall *)(const GLubyte *)) OGL.getFuncPointer("glIndexubv");
		ptr_glIndexMask = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glIndexMask");
		ptr_glIndexPointer = (void(__stdcall *)(GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glIndexPointer");
		ptr_glInitNames = (void(__stdcall *)(void)) OGL.getFuncPointer("glInitNames");
		ptr_glInterleavedArrays = (void(__stdcall *)(GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glInterleavedArrays");
		ptr_glIsEnabled = (GLboolean(__stdcall *)(GLenum)) OGL.getFuncPointer("glIsEnabled");
		ptr_glIsList = (GLboolean(__stdcall *)(GLuint)) OGL.getFuncPointer("glIsList");
		ptr_glIsTexture = (GLboolean(__stdcall *)(GLuint)) OGL.getFuncPointer("glIsTexture");
		ptr_glLightf = (void(__stdcall *)(GLenum, GLenum, GLfloat)) OGL.getFuncPointer("glLightf");
		ptr_glLightfv = (void(__stdcall *)(GLenum, GLenum, const GLfloat *)) OGL.getFuncPointer("glLightfv");
		ptr_glLighti = (void(__stdcall *)(GLenum, GLenum, GLint)) OGL.getFuncPointer("glLighti");
		ptr_glLightiv = (void(__stdcall *)(GLenum, GLenum, const GLint *)) OGL.getFuncPointer("glLightiv");
		ptr_glLightModelf = (void(__stdcall *)(GLenum, GLfloat *)) OGL.getFuncPointer("glLightModelf");
		ptr_glLightModelfv = (void(__stdcall *)(GLenum, const GLfloat *)) OGL.getFuncPointer("glLightModelfv");
		ptr_glLightModeli = (void(__stdcall *)(GLenum, GLint)) OGL.getFuncPointer("glLightModeli");
		ptr_glLightModeliv = (void(__stdcall *)(GLenum, const GLint *)) OGL.getFuncPointer("glLightModeliv");
		ptr_glLineStipple = (void(__stdcall *)(GLint, GLushort)) OGL.getFuncPointer("glLineStipple");
		ptr_glLineWidth = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glLineWidth");
		ptr_glListBase = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glListBase");
		ptr_glLoadIdentity = (void(__stdcall *)(void)) OGL.getFuncPointer("glLoadIdentity");
		ptr_glLoadMatrixd = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glLoadMatrixd");
		ptr_glLoadMatrixf = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glLoadMatrixf");
		ptr_glLoadName = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glLoadName");
		ptr_glLogicOp = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glLogicOp");
		ptr_glMap1d = (void(__stdcall *)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *)) OGL.getFuncPointer("glMap1d");
		ptr_glMap1f = (void(__stdcall *)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *)) OGL.getFuncPointer("glMap1f");
		ptr_glMap2d = (void(__stdcall *)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *)) OGL.getFuncPointer("glMap2d");
		ptr_glMap2f = (void(__stdcall *)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *)) OGL.getFuncPointer("glMap2f");
		ptr_glMapGrid1d = (void(__stdcall *)(GLint, GLdouble, GLdouble)) OGL.getFuncPointer("glMapGrid1d");
		ptr_glMapGrid1f = (void(__stdcall *)(GLint, GLfloat, GLfloat)) OGL.getFuncPointer("glMapGrid1f");
		ptr_glMapGrid2d = (void(__stdcall *)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble)) OGL.getFuncPointer("glMapGrid2d");
		ptr_glMapGrid2f = (void(__stdcall *)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat)) OGL.getFuncPointer("glMapGrid2f");
		ptr_glMaterialf = (void(__stdcall *)(GLenum, GLenum, GLfloat)) OGL.getFuncPointer("glMaterialf");
		ptr_glMaterialfv = (void(__stdcall *)(GLenum, GLenum, const GLfloat *)) OGL.getFuncPointer("glMaterialfv");
		ptr_glMateriali = (void(__stdcall *)(GLenum, GLenum, GLint)) OGL.getFuncPointer("glMateriali");
		ptr_glMaterialiv = (void(__stdcall *)(GLenum, GLenum, const GLint *)) OGL.getFuncPointer("glMaterialiv");
		ptr_glMatrixMode = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glMatrixMode");
		ptr_glMultiTexCoord2fARB = (void(__stdcall *)(GLenum, GLfloat, GLfloat)) OGL.getFuncPointer("glMultiTexCoord2fARB");
		ptr_glMultMatrixd = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glMultMatrixd");
		ptr_glMultMatrixf = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glMultMatrixf");
		ptr_glNewList = (void(__stdcall *)(GLuint, GLenum)) OGL.getFuncPointer("glNewList");
		ptr_glNormal3b = (void(__stdcall *)(GLbyte, GLbyte, GLbyte)) OGL.getFuncPointer("glNormal3b");
		ptr_glNormal3bv = (void(__stdcall *)(const GLbyte *)) OGL.getFuncPointer("glNormal3bv");
		ptr_glNormal3d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glNormal3d");
		ptr_glNormal3dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glNormal3dv");
		ptr_glNormal3f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glNormal3f");
		ptr_glNormal3fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glNormal3fv");
		ptr_glNormal3i = (void(__stdcall *)(GLint, GLint, GLint)) OGL.getFuncPointer("glNormal3i");
		ptr_glNormal3iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glNormal3iv");
		ptr_glNormal3s = (void(__stdcall *)(GLshort, GLshort, GLshort)) OGL.getFuncPointer("glNormal3s");
		ptr_glNormal3sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glNormal3sv");
		ptr_glNormalPointer = (void(__stdcall *)(GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glNormalPointer");
		ptr_glOrtho = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glOrtho");
		ptr_glPassThrough = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glPassThrough");
		ptr_glPixelMapfv = (void(__stdcall *)(GLenum, GLsizei, const GLfloat *)) OGL.getFuncPointer("glPixelMapfv");
		ptr_glPixelMapuiv = (void(__stdcall *)(GLenum, GLsizei, const GLuint *)) OGL.getFuncPointer("glPixelMapuiv");
		ptr_glPixelMapusv = (void(__stdcall *)(GLenum, GLsizei, const GLushort *)) OGL.getFuncPointer("glPixelMapusv");
		ptr_glPixelStoref = (void(__stdcall *)(GLenum, GLfloat)) OGL.getFuncPointer("glPixelStoref");
		ptr_glPixelStorei = (void(__stdcall *)(GLenum, GLint)) OGL.getFuncPointer("glPixelStorei");
		ptr_glPixelTransferf = (void(__stdcall *)(GLenum, GLfloat)) OGL.getFuncPointer("glPixelTransferf");
		ptr_glPixelTransferi = (void(__stdcall *)(GLenum, GLint)) OGL.getFuncPointer("glPixelTransferi");
		ptr_glPixelZoom = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glPixelZoom");
		ptr_glPointSize = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glPointSize");
		ptr_glPolygonMode = (void(__stdcall *)(GLenum, GLenum)) OGL.getFuncPointer("glPolygonMode");
		ptr_glPolygonOffset = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glPolygonOffset");
		ptr_glPolygonStipple = (void(__stdcall *)(const GLubyte *)) OGL.getFuncPointer("glPolygonStipple");
		ptr_glPopAttrib = (void(__stdcall *)(void)) OGL.getFuncPointer("glPopAttrib");
		ptr_glPopClientAttrib = (void(__stdcall *)(void)) OGL.getFuncPointer("glPopClientAttrib");
		ptr_glPopMatrix = (void(__stdcall *)(void)) OGL.getFuncPointer("glPopMatrix");
		ptr_glPopName = (void(__stdcall *)(void)) OGL.getFuncPointer("glPopName");
		ptr_glPrioritizeTextures = (void(__stdcall *)(GLsizei, const GLuint *, const GLclampf *)) OGL.getFuncPointer("glPrioritizeTextures");
		ptr_glPushAttrib = (void(__stdcall *)(GLbitfield)) OGL.getFuncPointer("glPushAttrib");
		ptr_glPushClientAttrib = (void(__stdcall *)(GLbitfield)) OGL.getFuncPointer("glPushClientAttrib");
		ptr_glPushMatrix = (void(__stdcall *)(void)) OGL.getFuncPointer("glPushMatrix");
		ptr_glPushName = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glPushName");
		ptr_glRasterPos2d = (void(__stdcall *)(GLdouble, GLdouble)) OGL.getFuncPointer("glRasterPos2d");
		ptr_glRasterPos2dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glRasterPos2dv");
		ptr_glRasterPos2f = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glRasterPos2f");
		ptr_glRasterPos2fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glRasterPos2fv");
		ptr_glRasterPos2i = (void(__stdcall *)(GLint, GLint)) OGL.getFuncPointer("glRasterPos2i");
		ptr_glRasterPos2iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glRasterPos2iv");
		ptr_glRasterPos2s = (void(__stdcall *)(GLshort, GLshort)) OGL.getFuncPointer("glRasterPos2s");
		ptr_glRasterPos2sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glRasterPos2sv");
		ptr_glRasterPos3d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glRasterPos3d");
		ptr_glRasterPos3dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glRasterPos3dv");
		ptr_glRasterPos3f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glRasterPos3f");
		ptr_glRasterPos3fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glRasterPos3fv");
		ptr_glRasterPos3i = (void(__stdcall *)(GLint, GLint, GLint)) OGL.getFuncPointer("glRasterPos3i");
		ptr_glRasterPos3iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glRasterPos3iv");
		ptr_glRasterPos3s = (void(__stdcall *)(GLshort, GLshort, GLshort)) OGL.getFuncPointer("glRasterPos3s");
		ptr_glRasterPos3sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glRasterPos3sv");
		ptr_glRasterPos4d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glRasterPos4d");
		ptr_glRasterPos4dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glRasterPos4dv");
		ptr_glRasterPos4f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glRasterPos4f");
		ptr_glRasterPos4fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glRasterPos4fv");
		ptr_glRasterPos4i = (void(__stdcall *)(GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glRasterPos4i");
		ptr_glRasterPos4iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glRasterPos4iv");
		ptr_glRasterPos4s = (void(__stdcall *)(GLshort, GLshort, GLshort, GLshort)) OGL.getFuncPointer("glRasterPos4s");
		ptr_glRasterPos4sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glRasterPos4sv");
		ptr_glReadBuffer = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glReadBuffer");
		ptr_glReadPixels = (void(__stdcall *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)) OGL.getFuncPointer("glReadPixels");
		ptr_glRectd = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glRectd");
		ptr_glRectdv = (void(__stdcall *)(const GLdouble *, const GLdouble *)) OGL.getFuncPointer("glRectdv");
		ptr_glRectf = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glRectf");
		ptr_glRectfv = (void(__stdcall *)(const GLfloat *, const GLfloat *)) OGL.getFuncPointer("glRectfv");
		ptr_glRecti = (void(__stdcall *)(GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glRecti");
		ptr_glRectiv = (void(__stdcall *)(const GLint *, const GLint *)) OGL.getFuncPointer("glRectiv");
		ptr_glRects = (void(__stdcall *)(GLshort, GLshort, GLshort, GLshort)) OGL.getFuncPointer("glRects");
		ptr_glRectsv = (void(__stdcall *)(const GLshort *, const GLshort *)) OGL.getFuncPointer("glRectsv");
		ptr_glRenderMode = (GLint(__stdcall *)(GLenum)) OGL.getFuncPointer("glRenderMode");
		ptr_glRotated = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glRotated");
		ptr_glRotatef = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glRotatef");
		ptr_glScaled = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glScaled");
		ptr_glScalef = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glScalef");
		ptr_glScissor = (void(__stdcall *)(GLint, GLint, GLsizei, GLsizei)) OGL.getFuncPointer("glScissor");
		ptr_glSelectBuffer = (void(__stdcall *)(GLsizei, GLuint *)) OGL.getFuncPointer("glSelectBuffer");
		ptr_glShadeModel = (void(__stdcall *)(GLenum)) OGL.getFuncPointer("glShadeModel");
		ptr_glStencilFunc = (void(__stdcall *)(GLenum, GLint, GLuint)) OGL.getFuncPointer("glStencilFunc");
		ptr_glStencilMask = (void(__stdcall *)(GLuint)) OGL.getFuncPointer("glStencilMask");
		ptr_glStencilOp = (void(__stdcall *)(GLenum, GLenum, GLenum)) OGL.getFuncPointer("glStencilOp");
		ptr_glTexCoord1d = (void(__stdcall *)(GLdouble)) OGL.getFuncPointer("glTexCoord1d");
		ptr_glTexCoord1dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glTexCoord1dv");
		ptr_glTexCoord1f = (void(__stdcall *)(GLfloat)) OGL.getFuncPointer("glTexCoord1f");
		ptr_glTexCoord1fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glTexCoord1fv");
		ptr_glTexCoord1i = (void(__stdcall *)(GLint)) OGL.getFuncPointer("glTexCoord1i");
		ptr_glTexCoord1iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glTexCoord1iv");
		ptr_glTexCoord1s = (void(__stdcall *)(GLshort)) OGL.getFuncPointer("glTexCoord1s");
		ptr_glTexCoord1sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glTexCoord1sv");
		ptr_glTexCoord2d = (void(__stdcall *)(GLdouble, GLdouble)) OGL.getFuncPointer("glTexCoord2d");
		ptr_glTexCoord2dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glTexCoord2dv");
		ptr_glTexCoord2f = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glTexCoord2f");
		ptr_glTexCoord2fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glTexCoord2fv");
		ptr_glTexCoord2i = (void(__stdcall *)(GLint, GLint)) OGL.getFuncPointer("glTexCoord2i");
		ptr_glTexCoord2iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glTexCoord2iv");
		ptr_glTexCoord2s = (void(__stdcall *)(GLshort, GLshort)) OGL.getFuncPointer("glTexCoord2s");
		ptr_glTexCoord2sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glTexCoord2sv");
		ptr_glTexCoord3d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glTexCoord3d");
		ptr_glTexCoord3dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glTexCoord3dv");
		ptr_glTexCoord3f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glTexCoord3f");
		ptr_glTexCoord3fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glTexCoord3fv");
		ptr_glTexCoord3i = (void(__stdcall *)(GLint, GLint, GLint)) OGL.getFuncPointer("glTexCoord3i");
		ptr_glTexCoord3iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glTexCoord3iv");
		ptr_glTexCoord3s = (void(__stdcall *)(GLshort, GLshort, GLshort)) OGL.getFuncPointer("glTexCoord3s");
		ptr_glTexCoord3sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glTexCoord3sv");
		ptr_glTexCoord4d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glTexCoord4d");
		ptr_glTexCoord4dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glTexCoord4dv");
		ptr_glTexCoord4f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glTexCoord4f");
		ptr_glTexCoord4fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glTexCoord4fv");
		ptr_glTexCoord4i = (void(__stdcall *)(GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glTexCoord4i");
		ptr_glTexCoord4iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glTexCoord4iv");
		ptr_glTexCoord4s = (void(__stdcall *)(GLshort, GLshort, GLshort, GLshort)) OGL.getFuncPointer("glTexCoord4s");
		ptr_glTexCoord4sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glTexCoord4sv");
		ptr_glTexCoordPointer = (void(__stdcall *)(GLint, GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glTexCoordPointer");
		ptr_glTexEnvf = (void(__stdcall *)(GLenum, GLenum, GLfloat)) OGL.getFuncPointer("glTexEnvf");
		ptr_glTexEnvfv = (void(__stdcall *)(GLenum, GLenum, const GLfloat *)) OGL.getFuncPointer("glTexEnvfv");
		ptr_glTexEnvi = (void(__stdcall *)(GLenum, GLenum, GLint)) OGL.getFuncPointer("glTexEnvi");
		ptr_glTexEnviv = (void(__stdcall *)(GLenum, GLenum, const GLint *)) OGL.getFuncPointer("glTexEnviv");
		ptr_glTexGend = (void(__stdcall *)(GLenum, GLenum, GLdouble)) OGL.getFuncPointer("glTexGend");
		ptr_glTexGendv = (void(__stdcall *)(GLenum, GLenum, const GLdouble *)) OGL.getFuncPointer("glTexGendv");
		ptr_glTexGenf = (void(__stdcall *)(GLenum, GLenum, GLfloat)) OGL.getFuncPointer("glTexGenf");
		ptr_glTexGenfv = (void(__stdcall *)(GLenum, GLenum, const GLfloat *)) OGL.getFuncPointer("glTexGenfv");
		ptr_glTexGeni = (void(__stdcall *)(GLenum, GLenum, GLint)) OGL.getFuncPointer("glTexGeni");
		ptr_glTexGeniv = (void(__stdcall *)(GLenum, GLenum, const GLint *)) OGL.getFuncPointer("glTexGeniv");
		ptr_glTexImage1D = (void(__stdcall *)(GLenum, GLint, GLint, GLsizei, GLint, GLint, GLenum, const GLvoid *)) OGL.getFuncPointer("glTexImage1D");
		ptr_glTexImage2D = (void(__stdcall *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLint, GLenum, const GLvoid *)) OGL.getFuncPointer("glTexImage2D");
		ptr_glTexParameterf = (void(__stdcall *)(GLenum, GLenum, GLfloat)) OGL.getFuncPointer("glTexParameterf");
		ptr_glTexParameterfv = (void(__stdcall *)(GLenum, GLenum, const GLfloat *)) OGL.getFuncPointer("glTexParameterfv");
		ptr_glTexParameteri = (void(__stdcall *)(GLenum, GLenum, GLint)) OGL.getFuncPointer("glTexParameteri");
		ptr_glTexParameteriv = (void(__stdcall *)(GLenum, GLenum, const GLint *)) OGL.getFuncPointer("glTexParameteriv");
		ptr_glTexSubImage1D = (void(__stdcall *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *)) OGL.getFuncPointer("glTexSubImage1D");
		ptr_glTexSubImage2D = (void(__stdcall *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)) OGL.getFuncPointer("glTexSubImage2D");
		ptr_glTranslated = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glTranslated");
		ptr_glTranslatef = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glTranslatef");
		ptr_glVertex2d = (void(__stdcall *)(GLdouble, GLdouble)) OGL.getFuncPointer("glVertex2d");
		ptr_glVertex2dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glVertex2dv");
		ptr_glVertex2f = (void(__stdcall *)(GLfloat, GLfloat)) OGL.getFuncPointer("glVertex2f");
		ptr_glVertex2fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glVertex2fv");
		ptr_glVertex2i = (void(__stdcall *)(GLint, GLint)) OGL.getFuncPointer("glVertex2i");
		ptr_glVertex2iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glVertex2iv");
		ptr_glVertex2s = (void(__stdcall *)(GLshort, GLshort)) OGL.getFuncPointer("glVertex2s");
		ptr_glVertex2sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glVertex2sv");
		ptr_glVertex3d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glVertex3d");
		ptr_glVertex3dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glVertex3dv");
		ptr_glVertex3f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glVertex3f");
		ptr_glVertex3fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glVertex3fv");
		ptr_glVertex3i = (void(__stdcall *)(GLint, GLint, GLint)) OGL.getFuncPointer("glVertex3i");
		ptr_glVertex3iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glVertex3iv");
		ptr_glVertex3s = (void(__stdcall *)(GLshort, GLshort, GLshort)) OGL.getFuncPointer("glVertex3s");
		ptr_glVertex3sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glVertex3sv");
		ptr_glVertex4d = (void(__stdcall *)(GLdouble, GLdouble, GLdouble, GLdouble)) OGL.getFuncPointer("glVertex4d");
		ptr_glVertex4dv = (void(__stdcall *)(const GLdouble *)) OGL.getFuncPointer("glVertex4dv");
		ptr_glVertex4f = (void(__stdcall *)(GLfloat, GLfloat, GLfloat, GLfloat)) OGL.getFuncPointer("glVertex4f");
		ptr_glVertex4fv = (void(__stdcall *)(const GLfloat *)) OGL.getFuncPointer("glVertex4fv");
		ptr_glVertex4i = (void(__stdcall *)(GLint, GLint, GLint, GLint)) OGL.getFuncPointer("glVertex4i");
		ptr_glVertex4iv = (void(__stdcall *)(const GLint *)) OGL.getFuncPointer("glVertex4iv");
		ptr_glVertex4s = (void(__stdcall *)(GLshort, GLshort, GLshort, GLshort)) OGL.getFuncPointer("glVertex4s");
		ptr_glVertex4sv = (void(__stdcall *)(const GLshort *)) OGL.getFuncPointer("glVertex4sv");
		ptr_glVertexPointer = (void(__stdcall *)(GLint, GLenum, GLsizei, const GLvoid *)) OGL.getFuncPointer("glVertexPointer");
		ptr_glViewport = (void(__stdcall *)(GLint, GLint, GLsizei, GLsizei)) OGL.getFuncPointer("glViewport");
		ptr_wglChoosePixelFormat = (int(__stdcall *) (HDC, const PIXELFORMATDESCRIPTOR *))OGL.getFuncPointer("wglChoosePixelFormat");
		ptr_wglCreateContext = (HGLRC(__stdcall *) (HDC))OGL.getFuncPointer("wglCreateContext");
		ptr_wglCreateLayerContext = (HGLRC(__stdcall *) (HDC, int))OGL.getFuncPointer("wglCreateLayerContext");
		ptr_wglCopyContext = (BOOL(__stdcall *) (HGLRC, HGLRC, UINT))OGL.getFuncPointer("wglCopyContext");
		ptr_wglDeleteContext = (BOOL(__stdcall *) (HGLRC))OGL.getFuncPointer("wglDeleteContext");
		ptr_wglDescribeLayerPlane = (BOOL(__stdcall *) (HDC, int, int, UINT, LPLAYERPLANEDESCRIPTOR))OGL.getFuncPointer("wglDescribeLayerPlane");
		ptr_wglDescribePixelFormat = (int(__stdcall *) (HDC, int, UINT, LPPIXELFORMATDESCRIPTOR))OGL.getFuncPointer("wglDescribePixelFormat");
		ptr_wglGetCurrentContext = (HGLRC(__stdcall *) (void))OGL.getFuncPointer("wglGetCurrentContext");
		ptr_wglGetCurrentDC = (HDC(__stdcall *) (void))OGL.getFuncPointer("wglGetCurrentDC");
		ptr_wglGetDefaultProcAddress = (PROC(__stdcall *) (LPCSTR))OGL.getFuncPointer("wglGetDefaultProcAddress");
		ptr_wglGetLayerPaletteEntries = (int(__stdcall *) (HDC, int, int, int, COLORREF *))OGL.getFuncPointer("wglGetLayerPaletteEntries");
		ptr_wglGetPixelFormat = (int(__stdcall *) (HDC))OGL.getFuncPointer("wglGetPixelFormat");
		ptr_wglGetProcAddress = (PROC(__stdcall *) (LPCSTR))OGL.getFuncPointer("wglGetProcAddress");
		ptr_wglMakeCurrent = (BOOL(__stdcall *) (HDC, HGLRC))OGL.getFuncPointer("wglMakeCurrent");
		ptr_wglRealizeLayerPalette = (BOOL(__stdcall *) (HDC, int, BOOL))OGL.getFuncPointer("wglRealizeLayerPalette");
		ptr_wglSetLayerPaletteEntries = (int(__stdcall *) (HDC, int, int, int, const COLORREF *))OGL.getFuncPointer("wglSetLayerPaletteEntries");
		ptr_wglSetPixelFormat = (BOOL(__stdcall *) (HDC, int, const PIXELFORMATDESCRIPTOR *))OGL.getFuncPointer("wglSetPixelFormat");
		ptr_wglShareLists = (BOOL(__stdcall *) (HGLRC, HGLRC))OGL.getFuncPointer("wglShareLists");
		ptr_wglSwapBuffers = (BOOL(__stdcall *) (HDC))OGL.getFuncPointer("wglSwapBuffers");
		ptr_wglSwapLayerBuffers = (BOOL(__stdcall *) (HDC, UINT))OGL.getFuncPointer("wglSwapLayerBuffers");
		ptr_wglSwapMultipleBuffers = (void(__stdcall *) (DWORD, DWORD))OGL.getFuncPointer("wglSwapMultipleBuffers");
		ptr_wglUseFontBitmapsW = (BOOL(__stdcall *) (HDC, DWORD, DWORD, DWORD))OGL.getFuncPointer("wglUseFontBitmapsW");
		ptr_wglUseFontBitmapsA = (BOOL(__stdcall *) (HDC, DWORD, DWORD, DWORD))OGL.getFuncPointer("wglUseFontBitmapsA");
		ptr_wglUseFontOutlinesW = (BOOL(__stdcall *) (HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT))OGL.getFuncPointer("wglUseFontOutlinesW");
		ptr_wglUseFontOutlinesA = (BOOL(__stdcall *) (HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT))OGL.getFuncPointer("wglUseFontOutlinesA");
	}
	catch (std::exception e) {
		return false;
	}
	return true;
}