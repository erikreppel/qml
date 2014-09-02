
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl3_2core_funcs();

void gl3_2core_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl3_2core_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl3_2core_glIsEnabled(void *_glfuncs, GLenum cap);
void gl3_2core_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl3_2core_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl3_2core_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl3_2core_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl3_2core_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl3_2core_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl3_2core_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl3_2core_glGetError(void *_glfuncs);
void gl3_2core_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl3_2core_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl3_2core_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl3_2core_glReadBuffer(void *_glfuncs, GLenum mode);
void gl3_2core_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl3_2core_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl3_2core_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl3_2core_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl3_2core_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl3_2core_glLogicOp(void *_glfuncs, GLenum opcode);
void gl3_2core_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl3_2core_glFlush(void *_glfuncs);
void gl3_2core_glFinish(void *_glfuncs);
void gl3_2core_glEnable(void *_glfuncs, GLenum cap);
void gl3_2core_glDisable(void *_glfuncs, GLenum cap);
void gl3_2core_glDepthMask(void *_glfuncs, GLboolean flag);
void gl3_2core_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl3_2core_glStencilMask(void *_glfuncs, GLuint mask);
void gl3_2core_glClearDepth(void *_glfuncs, GLdouble depth);
void gl3_2core_glClearStencil(void *_glfuncs, GLint s);
void gl3_2core_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl3_2core_glClear(void *_glfuncs, GLbitfield mask);
void gl3_2core_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl3_2core_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl3_2core_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl3_2core_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl3_2core_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl3_2core_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl3_2core_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl3_2core_glPointSize(void *_glfuncs, GLfloat size);
void gl3_2core_glLineWidth(void *_glfuncs, GLfloat width);
void gl3_2core_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl3_2core_glFrontFace(void *_glfuncs, GLenum mode);
void gl3_2core_glCullFace(void *_glfuncs, GLenum mode);
void gl3_2core_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl3_2core_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl3_2core_glIsTexture(void *_glfuncs, GLuint texture);
void gl3_2core_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl3_2core_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl3_2core_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl3_2core_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl3_2core_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl3_2core_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl3_2core_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
void gl3_2core_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl3_2core_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl3_2core_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl3_2core_glCopyTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl3_2core_glTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glTexImage3D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl3_2core_glDrawRangeElements(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl3_2core_glBlendEquation(void *_glfuncs, GLenum mode);
void gl3_2core_glBlendColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl3_2core_glGetCompressedTexImage(void *_glfuncs, GLenum target, GLint level, GLvoid* img);
void gl3_2core_glCompressedTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glCompressedTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glCompressedTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glCompressedTexImage3D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void gl3_2core_glSampleCoverage(void *_glfuncs, GLfloat value, GLboolean invert);
void gl3_2core_glActiveTexture(void *_glfuncs, GLenum texture);
void gl3_2core_glPointParameteriv(void *_glfuncs, GLenum pname, const GLint* params);
void gl3_2core_glPointParameteri(void *_glfuncs, GLenum pname, GLint param);
void gl3_2core_glPointParameterfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl3_2core_glPointParameterf(void *_glfuncs, GLenum pname, GLfloat param);
void gl3_2core_glMultiDrawArrays(void *_glfuncs, GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
void gl3_2core_glBlendFuncSeparate(void *_glfuncs, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void gl3_2core_glGetBufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
GLboolean gl3_2core_glUnmapBuffer(void *_glfuncs, GLenum target);
void gl3_2core_glGetBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data);
void gl3_2core_glBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
void gl3_2core_glBufferData(void *_glfuncs, GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
GLboolean gl3_2core_glIsBuffer(void *_glfuncs, GLuint buffer);
void gl3_2core_glGenBuffers(void *_glfuncs, GLsizei n, GLuint* buffers);
void gl3_2core_glDeleteBuffers(void *_glfuncs, GLsizei n, const GLuint* buffers);
void gl3_2core_glBindBuffer(void *_glfuncs, GLenum target, GLuint buffer);
void gl3_2core_glGetQueryObjectuiv(void *_glfuncs, GLuint id, GLenum pname, GLuint* params);
void gl3_2core_glGetQueryObjectiv(void *_glfuncs, GLuint id, GLenum pname, GLint* params);
void gl3_2core_glGetQueryiv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl3_2core_glEndQuery(void *_glfuncs, GLenum target);
void gl3_2core_glBeginQuery(void *_glfuncs, GLenum target, GLuint id);
GLboolean gl3_2core_glIsQuery(void *_glfuncs, GLuint id);
void gl3_2core_glDeleteQueries(void *_glfuncs, GLsizei n, const GLuint* ids);
void gl3_2core_glGenQueries(void *_glfuncs, GLsizei n, GLuint* ids);
void gl3_2core_glVertexAttribPointer(void *_glfuncs, GLuint index, GLint size, GLenum gltype, GLboolean normalized, GLsizei stride, const GLvoid* pointer);
void gl3_2core_glValidateProgram(void *_glfuncs, GLuint program);
void gl3_2core_glUniform4i(void *_glfuncs, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
void gl3_2core_glUniform3i(void *_glfuncs, GLint location, GLint v0, GLint v1, GLint v2);
void gl3_2core_glUniform2i(void *_glfuncs, GLint location, GLint v0, GLint v1);
void gl3_2core_glUniform1i(void *_glfuncs, GLint location, GLint v0);
void gl3_2core_glUniform4f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
void gl3_2core_glUniform3f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
void gl3_2core_glUniform2f(void *_glfuncs, GLint location, GLfloat v0, GLfloat v1);
void gl3_2core_glUniform1f(void *_glfuncs, GLint location, GLfloat v0);
void gl3_2core_glUseProgram(void *_glfuncs, GLuint program);
void gl3_2core_glShaderSource(void *_glfuncs, GLuint shader, GLsizei count, const GLchar** glstring, const GLint* length);
void gl3_2core_glLinkProgram(void *_glfuncs, GLuint program);
GLboolean gl3_2core_glIsShader(void *_glfuncs, GLuint shader);
GLboolean gl3_2core_glIsProgram(void *_glfuncs, GLuint program);
void gl3_2core_glGetVertexAttribiv(void *_glfuncs, GLuint index, GLenum pname, GLint* params);
void gl3_2core_glGetVertexAttribfv(void *_glfuncs, GLuint index, GLenum pname, GLfloat* params);
void gl3_2core_glGetVertexAttribdv(void *_glfuncs, GLuint index, GLenum pname, GLdouble* params);
void gl3_2core_glGetUniformiv(void *_glfuncs, GLuint program, GLint location, GLint* params);
void gl3_2core_glGetUniformfv(void *_glfuncs, GLuint program, GLint location, GLfloat* params);
GLint gl3_2core_glGetUniformLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl3_2core_glGetShaderSource(void *_glfuncs, GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
void gl3_2core_glGetShaderInfoLog(void *_glfuncs, GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
void gl3_2core_glGetShaderiv(void *_glfuncs, GLuint shader, GLenum pname, GLint* params);
void gl3_2core_glGetProgramInfoLog(void *_glfuncs, GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
void gl3_2core_glGetProgramiv(void *_glfuncs, GLuint program, GLenum pname, GLint* params);
GLint gl3_2core_glGetAttribLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl3_2core_glGetAttachedShaders(void *_glfuncs, GLuint program, GLsizei maxCount, GLsizei* count, GLuint* obj);
void gl3_2core_glGetActiveUniform(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gl3_2core_glGetActiveAttrib(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gl3_2core_glEnableVertexAttribArray(void *_glfuncs, GLuint index);
void gl3_2core_glDisableVertexAttribArray(void *_glfuncs, GLuint index);
void gl3_2core_glDetachShader(void *_glfuncs, GLuint program, GLuint shader);
void gl3_2core_glDeleteShader(void *_glfuncs, GLuint shader);
void gl3_2core_glDeleteProgram(void *_glfuncs, GLuint program);
GLuint gl3_2core_glCreateShader(void *_glfuncs, GLenum gltype);
GLuint gl3_2core_glCreateProgram(void *_glfuncs);
void gl3_2core_glCompileShader(void *_glfuncs, GLuint shader);
void gl3_2core_glBindAttribLocation(void *_glfuncs, GLuint program, GLuint index, const GLchar* name);
void gl3_2core_glAttachShader(void *_glfuncs, GLuint program, GLuint shader);
void gl3_2core_glStencilMaskSeparate(void *_glfuncs, GLenum face, GLuint mask);
void gl3_2core_glStencilFuncSeparate(void *_glfuncs, GLenum face, GLenum glfunc, GLint ref, GLuint mask);
void gl3_2core_glStencilOpSeparate(void *_glfuncs, GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
void gl3_2core_glDrawBuffers(void *_glfuncs, GLsizei n, const GLenum* bufs);
void gl3_2core_glBlendEquationSeparate(void *_glfuncs, GLenum modeRGB, GLenum modeAlpha);
GLboolean gl3_2core_glIsVertexArray(void *_glfuncs, GLuint array);
void gl3_2core_glGenVertexArrays(void *_glfuncs, GLsizei n, GLuint* arrays);
void gl3_2core_glDeleteVertexArrays(void *_glfuncs, GLsizei n, const GLuint* arrays);
void gl3_2core_glBindVertexArray(void *_glfuncs, GLuint array);
void gl3_2core_glFlushMappedBufferRange(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr length);
void gl3_2core_glFramebufferTextureLayer(void *_glfuncs, GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
void gl3_2core_glRenderbufferStorageMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void gl3_2core_glBlitFramebuffer(void *_glfuncs, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
void gl3_2core_glGenerateMipmap(void *_glfuncs, GLenum target);
void gl3_2core_glGetFramebufferAttachmentParameteriv(void *_glfuncs, GLenum target, GLenum attachment, GLenum pname, GLint* params);
void gl3_2core_glFramebufferRenderbuffer(void *_glfuncs, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void gl3_2core_glFramebufferTexture3D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
void gl3_2core_glFramebufferTexture2D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void gl3_2core_glFramebufferTexture1D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLenum gl3_2core_glCheckFramebufferStatus(void *_glfuncs, GLenum target);
void gl3_2core_glGenFramebuffers(void *_glfuncs, GLsizei n, GLuint* framebuffers);
void gl3_2core_glDeleteFramebuffers(void *_glfuncs, GLsizei n, const GLuint* framebuffers);
void gl3_2core_glBindFramebuffer(void *_glfuncs, GLenum target, GLuint framebuffer);
GLboolean gl3_2core_glIsFramebuffer(void *_glfuncs, GLuint framebuffer);
void gl3_2core_glGetRenderbufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl3_2core_glRenderbufferStorage(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void gl3_2core_glGenRenderbuffers(void *_glfuncs, GLsizei n, GLuint* renderbuffers);
void gl3_2core_glDeleteRenderbuffers(void *_glfuncs, GLsizei n, const GLuint* renderbuffers);
void gl3_2core_glBindRenderbuffer(void *_glfuncs, GLenum target, GLuint renderbuffer);
GLboolean gl3_2core_glIsRenderbuffer(void *_glfuncs, GLuint renderbuffer);
void gl3_2core_glClearBufferfi(void *_glfuncs, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
void gl3_2core_glClearBufferfv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLfloat* value);
void gl3_2core_glClearBufferuiv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLuint* value);
void gl3_2core_glClearBufferiv(void *_glfuncs, GLenum buffer, GLint drawbuffer, const GLint* value);
void gl3_2core_glGetTexParameterIuiv(void *_glfuncs, GLenum target, GLenum pname, GLuint* params);
void gl3_2core_glGetTexParameterIiv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl3_2core_glTexParameterIuiv(void *_glfuncs, GLenum target, GLenum pname, const GLuint* params);
void gl3_2core_glTexParameterIiv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl3_2core_glUniform4ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
void gl3_2core_glUniform3ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1, GLuint v2);
void gl3_2core_glUniform2ui(void *_glfuncs, GLint location, GLuint v0, GLuint v1);
void gl3_2core_glUniform1ui(void *_glfuncs, GLint location, GLuint v0);
GLint gl3_2core_glGetFragDataLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gl3_2core_glBindFragDataLocation(void *_glfuncs, GLuint program, GLuint color, const GLchar* name);
void gl3_2core_glGetUniformuiv(void *_glfuncs, GLuint program, GLint location, GLuint* params);
void gl3_2core_glGetVertexAttribIuiv(void *_glfuncs, GLuint index, GLenum pname, GLuint* params);
void gl3_2core_glGetVertexAttribIiv(void *_glfuncs, GLuint index, GLenum pname, GLint* params);
void gl3_2core_glVertexAttribIPointer(void *_glfuncs, GLuint index, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl3_2core_glEndConditionalRender(void *_glfuncs);
void gl3_2core_glBeginConditionalRender(void *_glfuncs, GLuint id, GLenum mode);
void gl3_2core_glClampColor(void *_glfuncs, GLenum target, GLenum clamp);
void gl3_2core_glGetTransformFeedbackVarying(void *_glfuncs, GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* gltype, GLchar* name);
void gl3_2core_glBindBufferBase(void *_glfuncs, GLenum target, GLuint index, GLuint buffer);
void gl3_2core_glBindBufferRange(void *_glfuncs, GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
void gl3_2core_glEndTransformFeedback(void *_glfuncs);
void gl3_2core_glBeginTransformFeedback(void *_glfuncs, GLenum primitiveMode);
GLboolean gl3_2core_glIsEnabledi(void *_glfuncs, GLenum target, GLuint index);
void gl3_2core_glDisablei(void *_glfuncs, GLenum target, GLuint index);
void gl3_2core_glEnablei(void *_glfuncs, GLenum target, GLuint index);
void gl3_2core_glGetIntegeri_v(void *_glfuncs, GLenum target, GLuint index, GLint* data);
void gl3_2core_glGetBooleani_v(void *_glfuncs, GLenum target, GLuint index, GLboolean* data);
void gl3_2core_glColorMaski(void *_glfuncs, GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
void gl3_2core_glCopyBufferSubData(void *_glfuncs, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
void gl3_2core_glUniformBlockBinding(void *_glfuncs, GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
void gl3_2core_glGetActiveUniformBlockName(void *_glfuncs, GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
void gl3_2core_glGetActiveUniformBlockiv(void *_glfuncs, GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
GLuint gl3_2core_glGetUniformBlockIndex(void *_glfuncs, GLuint program, const GLchar* uniformBlockName);
void gl3_2core_glGetActiveUniformName(void *_glfuncs, GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName);
void gl3_2core_glGetActiveUniformsiv(void *_glfuncs, GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
void gl3_2core_glPrimitiveRestartIndex(void *_glfuncs, GLuint index);
void gl3_2core_glTexBuffer(void *_glfuncs, GLenum target, GLenum internalformat, GLuint buffer);
void gl3_2core_glDrawElementsInstanced(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLsizei instancecount);
void gl3_2core_glDrawArraysInstanced(void *_glfuncs, GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
void gl3_2core_glSampleMaski(void *_glfuncs, GLuint index, GLbitfield mask);
void gl3_2core_glGetMultisamplefv(void *_glfuncs, GLenum pname, GLuint index, GLfloat* val);
void gl3_2core_glTexImage3DMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
void gl3_2core_glTexImage2DMultisample(void *_glfuncs, GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
void gl3_2core_glGetSynciv(void *_glfuncs, GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
void gl3_2core_glGetInteger64v(void *_glfuncs, GLenum pname, GLint64* params);
void gl3_2core_glWaitSync(void *_glfuncs, GLsync sync, GLbitfield flags, GLuint64 timeout);
GLenum gl3_2core_glClientWaitSync(void *_glfuncs, GLsync sync, GLbitfield flags, GLuint64 timeout);
void gl3_2core_glDeleteSync(void *_glfuncs, GLsync sync);
GLboolean gl3_2core_glIsSync(void *_glfuncs, GLsync sync);
GLsync gl3_2core_glFenceSync(void *_glfuncs, GLenum condition, GLbitfield flags);
void gl3_2core_glProvokingVertex(void *_glfuncs, GLenum mode);
void gl3_2core_glDrawElementsInstancedBaseVertex(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLsizei instancecount, GLint basevertex);
void gl3_2core_glDrawRangeElementsBaseVertex(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices, GLint basevertex);
void gl3_2core_glDrawElementsBaseVertex(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices, GLint basevertex);
void gl3_2core_glFramebufferTexture(void *_glfuncs, GLenum target, GLenum attachment, GLuint texture, GLint level);
void gl3_2core_glGetBufferParameteri64v(void *_glfuncs, GLenum target, GLenum pname, GLint64* params);
void gl3_2core_glGetInteger64i_v(void *_glfuncs, GLenum target, GLuint index, GLint64* data);


#ifdef __cplusplus
} // extern "C"
#endif
