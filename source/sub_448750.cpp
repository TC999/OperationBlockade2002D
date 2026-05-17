//----- (00448750) --------------------------------------------------------
_DWORD *__thiscall sub_448750(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // edx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  _DWORD *result; // eax

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)this[2];
  if ( a3 != v5 )
  {
    do
    {
      v6 = v3;
      v7 = v4;
      v3 += 4;
      v4 += 4;
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
    }
    while ( v3 != v5 );
  }
  result = a2;
  this[2] = v4;
  return result;
}
