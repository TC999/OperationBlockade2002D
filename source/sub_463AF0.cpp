//----- (00463AF0) --------------------------------------------------------
_DWORD *__thiscall sub_463AF0(_DWORD *self, _DWORD *a2, int *a3)
{
  int *v3; // edx
  _DWORD *result; // eax
  int *v5; // edi
  _DWORD *v6; // esi
  int v7; // ebx

  v3 = a3;
  result = a2;
  v5 = (int *)self[2];
  v6 = a2;
  if ( a3 != v5 )
  {
    do
    {
      v7 = *v3;
      v3 += 2;
      *v6 = v7;
      v6[1] = *(v3 - 1);
      v6 += 2;
    }
    while ( v3 != v5 );
  }
  self[2] = v6;
  return result;
}
