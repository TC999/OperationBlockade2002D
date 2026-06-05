// AUTO-FIX: LNK2001 - CRT internal function stubs for MSVC 6.0 compatibility

#include "common.h"

extern "C" {

void __cdecl __ehvec_ctor(void *ptr, unsigned int size, int count,
                          void (__cdecl *pCtor)(void *),
                          void (__cdecl *pDtor)(void *))
{
    for (int i = 0; i < count; i++) {
        pCtor((char*)ptr + i * size);
    }
}

void __cdecl __ehvec_dtor(void *ptr, unsigned int size, int count,
                          void (__cdecl *pDtor)(void *))
{
    for (int i = count - 1; i >= 0; i--) {
        pDtor((char*)ptr + i * size);
    }
}

void __cdecl __eh_vector_ctor_iterator(void *ptr, unsigned int size, int count,
                                       void (__cdecl *pCtor)(void *),
                                       void (__cdecl *pDtor)(void *))
{
    for (int i = 0; i < count; i++) {
        pCtor((char*)ptr + i * size);
    }
}

void __cdecl __eh_vector_dtor_iterator(void *ptr, unsigned int size, int count,
                                       void (__cdecl *pDtor)(void *))
{
    for (int i = count - 1; i >= 0; i--) {
        pDtor((char*)ptr + i * size);
    }
}

void __cdecl unknown_libname_27(void *ptr)
{
    memset(ptr, 0, 12);
}

int __cdecl __sbh_find_block(void *header, void *block)
{
    return 0;
}

int __cdecl __sbh_alloc_block(void *header, int size, int alignment)
{
    return 0;
}

int __cdecl __sbh_resize_block(void *header, void *block, int newSize)
{
    return 0;
}

int __cdecl __sbh_heap_init(int size)
{
    return 1;
}

void __cdecl _lock(int locknum)
{
}

void __cdecl _unlock(int locknum)
{
}

int __cdecl _stbuf(FILE *stream)
{
    return 0;
}

int __cdecl _ftbuf(int flag, FILE *stream)
{
    return 0;
}

int __cdecl _output(FILE *stream, const char *format, va_list arglist)
{
    return vfprintf(stream, format, arglist);
}

int __cdecl flsall(int flag)
{
    return 0;
}

void* __cdecl memcpy_0(void *dst, const void *src, size_t size)
{
    return memcpy(dst, src, size);
}

// _ld12cvt stub for sub_492D53
int __cdecl _ld12cvt(int a1, int a2, void *a3)
{
    return 0;
}

} // extern "C"
