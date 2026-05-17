//----- (00448B20) --------------------------------------------------------
char *__thiscall sub_448B20(_DWORD *this, char *a2, char *a3)
{
  char *v3; // eax
  char *v4; // ebx
  char *v6; // edx
  const void *v7; // esi
  void *v8; // edi
  char *v9; // edi
  char *i; // esi
  char *result; // eax

  v3 = a3;
  v4 = a2;
  v6 = (char *)this[2];
  if ( a3 != v6 )
  {
    do
    {
      v7 = v3;
      v8 = v4;
      v3 += 860;
      v4 += 860;
      qmemcpy(v8, v7, 0x35Cu);
    }
    while ( v3 != v6 );
  }
  v9 = (char *)this[2];
  for ( i = v4; i != v9; i += 860 )
    sub_444A90(i);
  result = a2;
  this[2] = v4;
  return result;
}
