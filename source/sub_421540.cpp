//----- (00421540) --------------------------------------------------------
_DWORD *__thiscall sub_421540(void **self)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax

  if ( !*((_BYTE *)self + 33) || *((_BYTE *)self + 34) )
  {
    if ( self[11] )
    {
      sub_409A00(dword_520970, self[11]);
      self[11] = 0;
    }
  }
  else if ( !self[11] )
  {
    v2 = sub_409960((_DWORD *)dword_520970, *(_DWORD *)(dword_520970 + 132));
    self[11] = v2;
    v2[3] = 6;
    *((_DWORD *)self[11] + 9) = *((_DWORD *)*self + 65);
  }
  result = self[11];
  if ( result )
  {
    result[10] = self;
    result = self[11];
    result[6] = self[5];
  }
  return result;
}
