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


bool init()
{
	// Find the opengl dll to load in system32.


	LibLoader OGL("test");

	try
	{
		ptr_glAccum = OGL.getFuncPointer("glAccum");
		ptr_glAlphaFunc = OGL.getFuncPointer("glAlphaFunc");
		ptr_glAreTexturesResident = OGL.getFuncPointer("glAreTexturesResident");
		ptr_glArrayElement = OGL.getFuncPointer("glArrayElement");
		ptr_glBegin = OGL.getFuncPointer("glBegin");
		ptr_glBindTexture = OGL.getFuncPointer("glBindTexture");
		ptr_glBitmap = OGL.getFuncPointer("glBitmap");
		ptr_glBlendFunc = OGL.getFuncPointer("glBlendFunc");
		ptr_glCallList = OGL.getFuncPointer("glCallList");
		ptr_glCallLists = OGL.getFuncPointer("glCallLists");
		ptr_glClear = OGL.getFuncPointer("glClear");
		ptr_glClearAccum = OGL.getFuncPointer("glClearAccum");
		ptr_glClearColor = OGL.getFuncPointer("glClearColor");
		ptr_glClearDepth = OGL.getFuncPointer("glClearDepth");
		ptr_glClearIndex = OGL.getFuncPointer("glClearIndex");
		ptr_glClearStencil = OGL.getFuncPointer("glClearStencil");
		ptr_glClipPlane = OGL.getFuncPointer("glClipPlane");
		ptr_glColor3b = OGL.getFuncPointer("glColor3b");
		ptr_glColor3bv = OGL.getFuncPointer("glColor3bv");
		ptr_glColor3d = OGL.getFuncPointer("glColor3d");
		ptr_glColor3dv = OGL.getFuncPointer("glColor3dv");
		ptr_glColor3f = OGL.getFuncPointer("glColor3f");
		ptr_glColor3fv = OGL.getFuncPointer("glColor3fv");
		ptr_glColor3i = OGL.getFuncPointer("glColor3i");
		ptr_glColor3iv = OGL.getFuncPointer("glColor3iv");
		ptr_glColor3s = OGL.getFuncPointer("glColor3s");
		ptr_glColor3sv = OGL.getFuncPointer("glColor3sv");
		ptr_glColor3ub = OGL.getFuncPointer("glColor3ub");
		ptr_glColor3ubv = OGL.getFuncPointer("glColor3ubv");
		ptr_glColor3ui = OGL.getFuncPointer("glColor3ui");
		ptr_glColor3uiv = OGL.getFuncPointer("glColor3uiv");
		ptr_glColor3us = OGL.getFuncPointer("glColor3us");
		ptr_glColor3usv = OGL.getFuncPointer("glColor3usv");
		ptr_glColor4b = OGL.getFuncPointer("glColor4b");
		ptr_glColor4bv = OGL.getFuncPointer("glColor4bv");
		ptr_glColor4d = OGL.getFuncPointer("glColor4d");
		ptr_glColor4dv = OGL.getFuncPointer("glColor4dv");
		ptr_glColor4f = OGL.getFuncPointer("glColor4f");
		ptr_glColor4fv = OGL.getFuncPointer("glColor4fv");
		ptr_glColor4i = OGL.getFuncPointer("glColor4i");
		ptr_glColor4iv = OGL.getFuncPointer("glColor4iv");
		ptr_glColor4s = OGL.getFuncPointer("glColor4s");
		ptr_glColor4sv = OGL.getFuncPointer("glColor4sv");
		ptr_glColor4ub = OGL.getFuncPointer("glColor4ub");
		ptr_glColor4ubv = OGL.getFuncPointer("glColor4ubv");
		ptr_glColor4ui = OGL.getFuncPointer("glColor4ui");
		ptr_glColor4uiv = OGL.getFuncPointer("glColor4uiv");
		ptr_glColor4us = OGL.getFuncPointer("glColor4us");
		ptr_glColor4usv = OGL.getFuncPointer("glColor4usv");
		ptr_glColorMask = OGL.getFuncPointer("glColorMask");
		ptr_glColorMaterial = OGL.getFuncPointer("glColorMaterial");
		ptr_glColorPointer = OGL.getFuncPointer("glColorPointer");
		ptr_glCopyPixels = OGL.getFuncPointer("glCopyPixels");
		ptr_glCopyTexImage1D = OGL.getFuncPointer("glCopyTexImage1D");
		ptr_glCopyTexImage2D = OGL.getFuncPointer("glCopyTexImage2D");
		ptr_glCopyTexSubImage1D = OGL.getFuncPointer("glCopyTexSubImage1D");
		ptr_glCopyTexSubImage2D = OGL.getFuncPointer("glCopyTexSubImage2D");
		ptr_glCullFace = OGL.getFuncPointer("glCullFace");
		ptr_glDeleteLists = OGL.getFuncPointer("glDeleteLists");
		ptr_glDeleteTextures = OGL.getFuncPointer("glDeleteTextures");
		ptr_glDepthFunc = OGL.getFuncPointer("glDepthFunc");
		ptr_glDepthMask = OGL.getFuncPointer("glDepthMask");
		ptr_glDepthRange = OGL.getFuncPointer("glDepthRange");
		ptr_glDisable = OGL.getFuncPointer("glDisable");
		ptr_glDisableClientState = OGL.getFuncPointer("glDisableClientState");
		ptr_glDrawArrays = OGL.getFuncPointer("glDrawArrays");
		ptr_glDrawBuffer = OGL.getFuncPointer("glDrawBuffer");
		ptr_glDrawElements = OGL.getFuncPointer("glDrawElements");
		ptr_glDrawPixels = OGL.getFuncPointer("glDrawPixels");
		ptr_glDebugEntry = OGL.getFuncPointer("glDebugEntry");
		ptr_glEdgeFlag = OGL.getFuncPointer("glEdgeFlag");
		ptr_glEdgeFlagv = OGL.getFuncPointer("glEdgeFlagv");
		ptr_glEdgeFlagPointer = OGL.getFuncPointer("glEdgeFlagPointer");
		ptr_glEnable = OGL.getFuncPointer("glEnable");
		ptr_glEnableClientState = OGL.getFuncPointer("glEnableClientState");
		ptr_glEnd = OGL.getFuncPointer("glEnd");
		ptr_glEndList = OGL.getFuncPointer("glEndList");
		ptr_glEvalCoord1d = OGL.getFuncPointer("glEvalCoord1d");
		ptr_glEvalCoord1dv = OGL.getFuncPointer("glEvalCoord1dv");
		ptr_glEvalCoord1f = OGL.getFuncPointer("glEvalCoord1f");
		ptr_glEvalCoord1fv = OGL.getFuncPointer("glEvalCoord1fv");
		ptr_glEvalCoord2d = OGL.getFuncPointer("glEvalCoord2d");
		ptr_glEvalCoord2dv = OGL.getFuncPointer("glEvalCoord2dv");
		ptr_glEvalCoord2f = OGL.getFuncPointer("glEvalCoord2f");
		ptr_glEvalCoord2fv = OGL.getFuncPointer("glEvalCoord2fv");
		ptr_glEvalMesh1 = OGL.getFuncPointer("glEvalMesh1");
		ptr_glEvalMesh2 = OGL.getFuncPointer("glEvalMesh2");
		ptr_glEvalPoint1 = OGL.getFuncPointer("glEvalPoint1");
		ptr_glEvalPoint2 = OGL.getFuncPointer("glEvalPoint2");
		ptr_glFeedbackBuffer = OGL.getFuncPointer("glFeedbackBuffer");
		ptr_glFinish = OGL.getFuncPointer("glFinish");
		ptr_glFlush = OGL.getFuncPointer("glFlush");
		ptr_glFogf = OGL.getFuncPointer("glFogf");
		ptr_glFogfv = OGL.getFuncPointer("glFogfv");
		ptr_glFogi = OGL.getFuncPointer("glFogi");
		ptr_glFogiv = OGL.getFuncPointer("glFogiv");
		ptr_glFrontFace = OGL.getFuncPointer("glFrontFace");
		ptr_glFrustum = OGL.getFuncPointer("glFrustum");
		ptr_glGenLists = OGL.getFuncPointer("glGenLists");
		ptr_glGenTextures = OGL.getFuncPointer("glGenTextures");
		ptr_glGetBooleanv = OGL.getFuncPointer("glGetBooleanv");
		ptr_glGetDoublev = OGL.getFuncPointer("glGetDoublev");
		ptr_glGetFloatv = OGL.getFuncPointer("glGetFloatv");
		ptr_glGetIntegerv = OGL.getFuncPointer("glGetIntegerv");
		ptr_glGetClipPlane = OGL.getFuncPointer("glGetClipPlane");
		ptr_glGetError = OGL.getFuncPointer("glGetError");
		ptr_glGetLightfv = OGL.getFuncPointer("glGetLightfv");
		ptr_glGetLightiv = OGL.getFuncPointer("glGetLightiv");
		ptr_glGetMapdv = OGL.getFuncPointer("glGetMapdv");
		ptr_glGetMapfv = OGL.getFuncPointer("glGetMapfv");
		ptr_glGetMapiv = OGL.getFuncPointer("glGetMapiv");
		ptr_glGetMaterialfv = OGL.getFuncPointer("glGetMaterialfv");
		ptr_glGetMaterialiv = OGL.getFuncPointer("glGetMaterialiv");
		ptr_glGetPixelMapfv = OGL.getFuncPointer("glGetPixelMapfv");
		ptr_glGetPixelMapuiv = OGL.getFuncPointer("glGetPixelMapuiv");
		ptr_glGetPixelMapusv = OGL.getFuncPointer("glGetPixelMapusv");
		ptr_glGetPointerv = OGL.getFuncPointer("glGetPointerv");
		ptr_glGetPolygonStipple = OGL.getFuncPointer("glGetPolygonStipple");
		ptr_glGetString = OGL.getFuncPointer("glGetString");
		ptr_glGetTexEnvfv = OGL.getFuncPointer("glGetTexEnvfv");
		ptr_glGetTexEnviv = OGL.getFuncPointer("glGetTexEnviv");
		ptr_glGetTexGendv = OGL.getFuncPointer("glGetTexGendv");
		ptr_glGetTexGenfv = OGL.getFuncPointer("glGetTexGenfv");
		ptr_glGetTexGeniv = OGL.getFuncPointer("glGetTexGeniv");
		ptr_glGetTexImage = OGL.getFuncPointer("glGetTexImage");
		ptr_glGetTexLevelParameterfv = OGL.getFuncPointer("glGetTexLevelParameterfv");
		ptr_glGetTexLevelParameteriv = OGL.getFuncPointer("glGetTexLevelParameteriv");
		ptr_glGetTexParameterfv = OGL.getFuncPointer("glGetTexParameterfv");
		ptr_glGetTexParameteriv = OGL.getFuncPointer("glGetTexParameteriv");
		ptr_glHint = OGL.getFuncPointer("glHint");
		ptr_glIndexd = OGL.getFuncPointer("glIndexd");
		ptr_glIndexdv = OGL.getFuncPointer("glIndexdv");
		ptr_glIndexf = OGL.getFuncPointer("glIndexf");
		ptr_glIndexfv = OGL.getFuncPointer("glIndexfv");
		ptr_glIndexi = OGL.getFuncPointer("glIndexi");
		ptr_glIndexiv = OGL.getFuncPointer("glIndexiv");
		ptr_glIndexs = OGL.getFuncPointer("glIndexs");
		ptr_glIndexsv = OGL.getFuncPointer("glIndexsv");
		ptr_glIndexub = OGL.getFuncPointer("glIndexub");
		ptr_glIndexubv = OGL.getFuncPointer("glIndexubv");
		ptr_glIndexMask = OGL.getFuncPointer("glIndexMask");
		ptr_glIndexPointer = OGL.getFuncPointer("glIndexPointer");
		ptr_glInitNames = OGL.getFuncPointer("glInitNames");
		ptr_glInterleavedArrays = OGL.getFuncPointer("glInterleavedArrays");
		ptr_glIsEnabled = OGL.getFuncPointer("glIsEnabled");
		ptr_glIsList = OGL.getFuncPointer("glIsList");
		ptr_glIsTexture = OGL.getFuncPointer("glIsTexture");
		ptr_glLightf = OGL.getFuncPointer("glLightf");
		ptr_glLightfv = OGL.getFuncPointer("glLightfv");
		ptr_glLighti = OGL.getFuncPointer("glLighti");
		ptr_glLightiv = OGL.getFuncPointer("glLightiv");
		ptr_glLightModelf = OGL.getFuncPointer("glLightModelf");
		ptr_glLightModelfv = OGL.getFuncPointer("glLightModelfv");
		ptr_glLightModeli = OGL.getFuncPointer("glLightModeli");
		ptr_glLightModeliv = OGL.getFuncPointer("glLightModeliv");
		ptr_glLineStipple = OGL.getFuncPointer("glLineStipple");
		ptr_glLineWidth = OGL.getFuncPointer("glLineWidth");
		ptr_glListBase = OGL.getFuncPointer("glListBase");
		ptr_glLoadIdentity = OGL.getFuncPointer("glLoadIdentity");
		ptr_glLoadMatrixd = OGL.getFuncPointer("glLoadMatrixd");
		ptr_glLoadMatrixf = OGL.getFuncPointer("glLoadMatrixf");
		ptr_glLoadName = OGL.getFuncPointer("glLoadName");
		ptr_glLogicOp = OGL.getFuncPointer("glLogicOp");
		ptr_glMap1d = OGL.getFuncPointer("glMap1d");
		ptr_glMap1f = OGL.getFuncPointer("glMap1f");
		ptr_glMap2d = OGL.getFuncPointer("glMap2d");
		ptr_glMap2f = OGL.getFuncPointer("glMap2f");
		ptr_glMapGrid1d = OGL.getFuncPointer("glMapGrid1d");
		ptr_glMapGrid1f = OGL.getFuncPointer("glMapGrid1f");
		ptr_glMapGrid2d = OGL.getFuncPointer("glMapGrid2d");
		ptr_glMapGrid2f = OGL.getFuncPointer("glMapGrid2f");
		ptr_glMaterialf = OGL.getFuncPointer("glMaterialf");
		ptr_glMaterialfv = OGL.getFuncPointer("glMaterialfv");
		ptr_glMateriali = OGL.getFuncPointer("glMateriali");
		ptr_glMaterialiv = OGL.getFuncPointer("glMaterialiv");
		ptr_glMatrixMode = OGL.getFuncPointer("glMatrixMode");
		ptr_glMultMatrixd = OGL.getFuncPointer("glMultMatrixd");
		ptr_glMultMatrixf = OGL.getFuncPointer("glMultMatrixf");
		ptr_glNewList = OGL.getFuncPointer("glNewList");
		ptr_glNormal3b = OGL.getFuncPointer("glNormal3b");
		ptr_glNormal3bv = OGL.getFuncPointer("glNormal3bv");
		ptr_glNormal3d = OGL.getFuncPointer("glNormal3d");
		ptr_glNormal3dv = OGL.getFuncPointer("glNormal3dv");
		ptr_glNormal3f = OGL.getFuncPointer("glNormal3f");
		ptr_glNormal3fv = OGL.getFuncPointer("glNormal3fv");
		ptr_glNormal3i = OGL.getFuncPointer("glNormal3i");
		ptr_glNormal3iv = OGL.getFuncPointer("glNormal3iv");
		ptr_glNormal3s = OGL.getFuncPointer("glNormal3s");
		ptr_glNormal3sv = OGL.getFuncPointer("glNormal3sv");
		ptr_glNormalPointer = OGL.getFuncPointer("glNormalPointer");
		ptr_glOrtho = OGL.getFuncPointer("glOrtho");
		ptr_glPassThrough = OGL.getFuncPointer("glPassThrough");
		ptr_glPixelMapfv = OGL.getFuncPointer("glPixelMapfv");
		ptr_glPixelMapuiv = OGL.getFuncPointer("glPixelMapuiv");
		ptr_glPixelMapusv = OGL.getFuncPointer("glPixelMapusv");
		ptr_glPixelStoref = OGL.getFuncPointer("glPixelStoref");
		ptr_glPixelStorei = OGL.getFuncPointer("glPixelStorei");
		ptr_glPixelTransferf = OGL.getFuncPointer("glPixelTransferf");
		ptr_glPixelTransferi = OGL.getFuncPointer("glPixelTransferi");
		ptr_glPixelZoom = OGL.getFuncPointer("glPixelZoom");
		ptr_glPointSize = OGL.getFuncPointer("glPointSize");
		ptr_glPolygonMode = OGL.getFuncPointer("glPolygonMode");
		ptr_glPolygonOffset = OGL.getFuncPointer("glPolygonOffset");
		ptr_glPolygonStipple = OGL.getFuncPointer("glPolygonStipple");
		ptr_glPopAttrib = OGL.getFuncPointer("glPopAttrib");
		ptr_glPopClientAttrib = OGL.getFuncPointer("glPopClientAttrib");
		ptr_glPopMatrix = OGL.getFuncPointer("glPopMatrix");
		ptr_glPopName = OGL.getFuncPointer("glPopName");
		ptr_glPrioritizeTextures = OGL.getFuncPointer("glPrioritizeTextures");
		ptr_glPushAttrib = OGL.getFuncPointer("glPushAttrib");
		ptr_glPushClientAttrib = OGL.getFuncPointer("glPushClientAttrib");
		ptr_glPushMatrix = OGL.getFuncPointer("glPushMatrix");
		ptr_glPushName = OGL.getFuncPointer("glPushName");
		ptr_glRasterPos2d = OGL.getFuncPointer("glRasterPos2d");
		ptr_glRasterPos2dv = OGL.getFuncPointer("glRasterPos2dv");
		ptr_glRasterPos2f = OGL.getFuncPointer("glRasterPos2f");
		ptr_glRasterPos2fv = OGL.getFuncPointer("glRasterPos2fv");
		ptr_glRasterPos2i = OGL.getFuncPointer("glRasterPos2i");
		ptr_glRasterPos2iv = OGL.getFuncPointer("glRasterPos2iv");
		ptr_glRasterPos2s = OGL.getFuncPointer("glRasterPos2s");
		ptr_glRasterPos2sv = OGL.getFuncPointer("glRasterPos2sv");
		ptr_glRasterPos3d = OGL.getFuncPointer("glRasterPos3d");
		ptr_glRasterPos3dv = OGL.getFuncPointer("glRasterPos3dv");
		ptr_glRasterPos3f = OGL.getFuncPointer("glRasterPos3f");
		ptr_glRasterPos3fv = OGL.getFuncPointer("glRasterPos3fv");
		ptr_glRasterPos3i = OGL.getFuncPointer("glRasterPos3i");
		ptr_glRasterPos3iv = OGL.getFuncPointer("glRasterPos3iv");
		ptr_glRasterPos3s = OGL.getFuncPointer("glRasterPos3s");
		ptr_glRasterPos3sv = OGL.getFuncPointer("glRasterPos3sv");
		ptr_glRasterPos4d = OGL.getFuncPointer("glRasterPos4d");
		ptr_glRasterPos4dv = OGL.getFuncPointer("glRasterPos4dv");
		ptr_glRasterPos4f = OGL.getFuncPointer("glRasterPos4f");
		ptr_glRasterPos4fv = OGL.getFuncPointer("glRasterPos4fv");
		ptr_glRasterPos4i = OGL.getFuncPointer("glRasterPos4i");
		ptr_glRasterPos4iv = OGL.getFuncPointer("glRasterPos4iv");
		ptr_glRasterPos4s = OGL.getFuncPointer("glRasterPos4s");
		ptr_glRasterPos4sv = OGL.getFuncPointer("glRasterPos4sv");
		ptr_glReadBuffer = OGL.getFuncPointer("glReadBuffer");
		ptr_glReadPixels = OGL.getFuncPointer("glReadPixels");
		ptr_glRectd = OGL.getFuncPointer("glRectd");
		ptr_glRectdv = OGL.getFuncPointer("glRectdv");
		ptr_glRectf = OGL.getFuncPointer("glRectf");
		ptr_glRectfv = OGL.getFuncPointer("glRectfv");
		ptr_glRecti = OGL.getFuncPointer("glRecti");
		ptr_glRectiv = OGL.getFuncPointer("glRectiv");
		ptr_glRects = OGL.getFuncPointer("glRects");
		ptr_glRectsv = OGL.getFuncPointer("glRectsv");
		ptr_glRenderMode = OGL.getFuncPointer("glRenderMode");
		ptr_glRotated = OGL.getFuncPointer("glRotated");
		ptr_glRotatef = OGL.getFuncPointer("glRotatef");
		ptr_glScaled = OGL.getFuncPointer("glScaled");
		ptr_glScalef = OGL.getFuncPointer("glScalef");
		ptr_glScissor = OGL.getFuncPointer("glScissor");
		ptr_glSelectBuffer = OGL.getFuncPointer("glSelectBuffer");
		ptr_glShadeModel = OGL.getFuncPointer("glShadeModel");
		ptr_glStencilFunc = OGL.getFuncPointer("glStencilFunc");
		ptr_glStencilMask = OGL.getFuncPointer("glStencilMask");
		ptr_glStencilOp = OGL.getFuncPointer("glStencilOp");
		ptr_glTexCoord1d = OGL.getFuncPointer("glTexCoord1d");
		ptr_glTexCoord1dv = OGL.getFuncPointer("glTexCoord1dv");
		ptr_glTexCoord1f = OGL.getFuncPointer("glTexCoord1f");
		ptr_glTexCoord1fv = OGL.getFuncPointer("glTexCoord1fv");
		ptr_glTexCoord1i = OGL.getFuncPointer("glTexCoord1i");
		ptr_glTexCoord1iv = OGL.getFuncPointer("glTexCoord1iv");
		ptr_glTexCoord1s = OGL.getFuncPointer("glTexCoord1s");
		ptr_glTexCoord1sv = OGL.getFuncPointer("glTexCoord1sv");
		ptr_glTexCoord2d = OGL.getFuncPointer("glTexCoord2d");
		ptr_glTexCoord2dv = OGL.getFuncPointer("glTexCoord2dv");
		ptr_glTexCoord2f = OGL.getFuncPointer("glTexCoord2f");
		ptr_glTexCoord2fv = OGL.getFuncPointer("glTexCoord2fv");
		ptr_glTexCoord2i = OGL.getFuncPointer("glTexCoord2i");
		ptr_glTexCoord2iv = OGL.getFuncPointer("glTexCoord2iv");
		ptr_glTexCoord2s = OGL.getFuncPointer("glTexCoord2s");
		ptr_glTexCoord2sv = OGL.getFuncPointer("glTexCoord2sv");
		ptr_glTexCoord3d = OGL.getFuncPointer("glTexCoord3d");
		ptr_glTexCoord3dv = OGL.getFuncPointer("glTexCoord3dv");
		ptr_glTexCoord3f = OGL.getFuncPointer("glTexCoord3f");
		ptr_glTexCoord3fv = OGL.getFuncPointer("glTexCoord3fv");
		ptr_glTexCoord3i = OGL.getFuncPointer("glTexCoord3i");
		ptr_glTexCoord3iv = OGL.getFuncPointer("glTexCoord3iv");
		ptr_glTexCoord3s = OGL.getFuncPointer("glTexCoord3s");
		ptr_glTexCoord3sv = OGL.getFuncPointer("glTexCoord3sv");
		ptr_glTexCoord4d = OGL.getFuncPointer("glTexCoord4d");
		ptr_glTexCoord4dv = OGL.getFuncPointer("glTexCoord4dv");
		ptr_glTexCoord4f = OGL.getFuncPointer("glTexCoord4f");
		ptr_glTexCoord4fv = OGL.getFuncPointer("glTexCoord4fv");
		ptr_glTexCoord4i = OGL.getFuncPointer("glTexCoord4i");
		ptr_glTexCoord4iv = OGL.getFuncPointer("glTexCoord4iv");
		ptr_glTexCoord4s = OGL.getFuncPointer("glTexCoord4s");
		ptr_glTexCoord4sv = OGL.getFuncPointer("glTexCoord4sv");
		ptr_glTexCoordPointer = OGL.getFuncPointer("glTexCoordPointer");
		ptr_glTexEnvf = OGL.getFuncPointer("glTexEnvf");
		ptr_glTexEnvfv = OGL.getFuncPointer("glTexEnvfv");
		ptr_glTexEnvi = OGL.getFuncPointer("glTexEnvi");
		ptr_glTexEnviv = OGL.getFuncPointer("glTexEnviv");
		ptr_glTexGend = OGL.getFuncPointer("glTexGend");
		ptr_glTexGendv = OGL.getFuncPointer("glTexGendv");
		ptr_glTexGenf = OGL.getFuncPointer("glTexGenf");
		ptr_glTexGenfv = OGL.getFuncPointer("glTexGenfv");
		ptr_glTexGeni = OGL.getFuncPointer("glTexGeni");
		ptr_glTexGeniv = OGL.getFuncPointer("glTexGeniv");
		ptr_glTexImage1D = OGL.getFuncPointer("glTexImage1D");
		ptr_glTexImage2D = OGL.getFuncPointer("glTexImage2D");
		ptr_glTexParameterf = OGL.getFuncPointer("glTexParameterf");
		ptr_glTexParameterfv = OGL.getFuncPointer("glTexParameterfv");
		ptr_glTexParameteri = OGL.getFuncPointer("glTexParameteri");
		ptr_glTexParameteriv = OGL.getFuncPointer("glTexParameteriv");
		ptr_glTexSubImage1D = OGL.getFuncPointer("glTexSubImage1D");
		ptr_glTexSubImage2D = OGL.getFuncPointer("glTexSubImage2D");
		ptr_glTranslated = OGL.getFuncPointer("glTranslated");
		ptr_glTranslatef = OGL.getFuncPointer("glTranslatef");
		ptr_glVertex2d = OGL.getFuncPointer("glVertex2d");
		ptr_glVertex2dv = OGL.getFuncPointer("glVertex2dv");
		ptr_glVertex2f = OGL.getFuncPointer("glVertex2f");
		ptr_glVertex2fv = OGL.getFuncPointer("glVertex2fv");
		ptr_glVertex2i = OGL.getFuncPointer("glVertex2i");
		ptr_glVertex2iv = OGL.getFuncPointer("glVertex2iv");
		ptr_glVertex2s = OGL.getFuncPointer("glVertex2s");
		ptr_glVertex2sv = OGL.getFuncPointer("glVertex2sv");
		ptr_glVertex3d = OGL.getFuncPointer("glVertex3d");
		ptr_glVertex3dv = OGL.getFuncPointer("glVertex3dv");
		ptr_glVertex3f = OGL.getFuncPointer("glVertex3f");
		ptr_glVertex3fv = OGL.getFuncPointer("glVertex3fv");
		ptr_glVertex3i = OGL.getFuncPointer("glVertex3i");
		ptr_glVertex3iv = OGL.getFuncPointer("glVertex3iv");
		ptr_glVertex3s = OGL.getFuncPointer("glVertex3s");
		ptr_glVertex3sv = OGL.getFuncPointer("glVertex3sv");
		ptr_glVertex4d = OGL.getFuncPointer("glVertex4d");
		ptr_glVertex4dv = OGL.getFuncPointer("glVertex4dv");
		ptr_glVertex4f = OGL.getFuncPointer("glVertex4f");
		ptr_glVertex4fv = OGL.getFuncPointer("glVertex4fv");
		ptr_glVertex4i = OGL.getFuncPointer("glVertex4i");
		ptr_glVertex4iv = OGL.getFuncPointer("glVertex4iv");
		ptr_glVertex4s = OGL.getFuncPointer("glVertex4s");
		ptr_glVertex4sv = OGL.getFuncPointer("glVertex4sv");
		ptr_glVertexPointer = OGL.getFuncPointer("glVertexPointer");
		ptr_glViewport = OGL.getFuncPointer("glViewport");
		ptr_wglChoosePixelFormat = OGL.getFuncPointer("wglChoosePixelFormat");
		ptr_wglCreateContext = OGL.getFuncPointer("wglCreateContext");
		ptr_wglCreateLayerContext = OGL.getFuncPointer("wglCreateLayerContext");
		ptr_wglCopyContext = OGL.getFuncPointer("wglCopyContext");
		ptr_wglDeleteContext = OGL.getFuncPointer("wglDeleteContext");
		ptr_wglDescribeLayerPlane = OGL.getFuncPointer("wglDescribeLayerPlane");
		ptr_wglDescribePixelFormat = OGL.getFuncPointer("wglDescribePixelFormat");
		ptr_wglGetCurrentContext = OGL.getFuncPointer("wglGetCurrentContext");
		ptr_wglGetCurrentDC = OGL.getFuncPointer("wglGetCurrentDC");
		ptr_wglGetDefaultProcAddress = OGL.getFuncPointer("wglGetDefaultProcAddress");
		ptr_wglGetLayerPaletteEntries = OGL.getFuncPointer("wglGetLayerPaletteEntries");
		ptr_wglGetPixelFormat = OGL.getFuncPointer("wglGetPixelFormat");
		ptr_wglGetProcAddress = OGL.getFuncPointer("wglGetProcAddress");
		ptr_wglMakeCurrent = OGL.getFuncPointer("wglMakeCurrent");
		ptr_wglRealizeLayerPalette = OGL.getFuncPointer("wglRealizeLayerPalette");
		ptr_wglSetLayerPaletteEntries = OGL.getFuncPointer("wglSetLayerPaletteEntries");
		ptr_wglSetPixelFormat = OGL.getFuncPointer("wglSetPixelFormat");
		ptr_wglShareLists = OGL.getFuncPointer("wglShareLists");
		ptr_wglSwapBuffers = OGL.getFuncPointer("wglSwapBuffers");
		ptr_wglSwapLayerBuffers = OGL.getFuncPointer("wglSwapLayerBuffers");
		ptr_wglSwapMultipleBuffers = OGL.getFuncPointer("wglSwapMultipleBuffers");
		ptr_wglUseFontBitmapsW = OGL.getFuncPointer("wglUseFontBitmapsW");
		ptr_wglUseFontBitmapsA = OGL.getFuncPointer("wglUseFontBitmapsA");
		ptr_wglUseFontOutlinesW = OGL.getFuncPointer("wglUseFontOutlinesW");
		ptr_wglUseFontOutlinesA = OGL.getFuncPointer("wglUseFontOutlinesA");
	}
}