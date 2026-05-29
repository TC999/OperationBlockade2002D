//----- (00434200) --------------------------------------------------------
char *__thiscall sub_434200(_DWORD *self, char *a2, char *a3)
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
      v3 += 32;
      v4 += 32;
      qmemcpy(v7, v6, 0x20u);
    }
    while ( v3 != v5 );
  }
  self[2] = v4;
  return a2;
}
