//----- (004486E0) --------------------------------------------------------
char *__cdecl sub_4486E0(_DWORD *self, char *a2, char *a3)
{
  char *v3; // edx
  char *v4; // ebx
  char *v5; // ebp
  const void *v6; // esi
  void *v7; // edi

  v3 = a3;
  v4 = a2;
  v5 = (char *)self[2];
  if ( a3 != v5 )
  {
    do
    {
      v6 = v3;
      v7 = v4;
      v3 += 260;
      v4 += 260;
      qmemcpy(v7, v6, 0x104u);
    }
    while ( v3 != v5 );
  }
  self[2] = (uint32)(uintptr_t)(v4);
  return a2;
}
