//----- (0048B1FD) --------------------------------------------------------
int __cdecl sub_48B1FD(FILE *Stream, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx

  _lock_file(Stream);
  v3 = ((int (__cdecl *)(FILE *))_stbuf)(Stream);
  v4 = _output(Stream, (const char *)a2, (va_list)&a3);
  ((void (__cdecl *)(int, FILE *))_ftbuf)(v3, Stream);
  _unlock_file(Stream);
  return v4;
}
