//----- (00429DE0) --------------------------------------------------------
_DWORD *__thiscall sub_429DE0(_DWORD *this, char *FileName)
{
  _DWORD *v3; // esi
  FILE *v4; // eax

  v3 = operator new(0x10u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 1;
    *((_BYTE *)v3 + 8) = 0;
    *((_BYTE *)v3 + 9) = 0;
    v4 = fopen(FileName, aRt);
    v3[3] = v4;
    if ( !v4 )
      *v3 = 1;
    *this = v3;
    return this;
  }
  else
  {
    *this = 0;
    return this;
  }
}
