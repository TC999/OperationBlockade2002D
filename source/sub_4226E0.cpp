//----- (004226E0) --------------------------------------------------------
_DWORD *__thiscall sub_4226E0(_DWORD *self, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  _DWORD *v5; // edx
  int v6; // ecx
  int v7; // ecx

  v3 = (_DWORD *)self[7];
  self[6] = 0;
  sub_4131B0(v3, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)self[7] + 24))(self[7], 0);
  result = (_DWORD *)self[5];
  v5 = 0;
  if ( result )
  {
    while ( 1 )
    {
      v6 = result[4];
      if ( result == a2 )
        break;
      v5 = result;
      result = (_DWORD *)result[4];
      if ( !v6 )
        goto LABEL_8;
    }
    if ( v5 )
      v5[4] = v6;
    else
      self[5] = v6;
  }
LABEL_8:
  v7 = self[8];
  if ( v7 )
  {
    *(_BYTE *)(v7 + 33) = 0;
    return sub_421540((void **)v7);
  }
  return result;
}
