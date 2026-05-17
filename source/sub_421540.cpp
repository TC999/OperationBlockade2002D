//----- (00421540) --------------------------------------------------------
_DWORD *__thiscall sub_421540(void **this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax

  if ( !*((_BYTE *)this + 33) || *((_BYTE *)this + 34) )
  {
    if ( this[11] )
    {
      sub_409A00(dword_520970, this[11]);
      this[11] = 0;
    }
  }
  else if ( !this[11] )
  {
    v2 = sub_409960((_DWORD *)dword_520970, *(_DWORD *)(dword_520970 + 132));
    this[11] = v2;
    v2[3] = 6;
    *((_DWORD *)this[11] + 9) = *((_DWORD *)*this + 65);
  }
  result = this[11];
  if ( result )
  {
    result[10] = this;
    result = this[11];
    result[6] = this[5];
  }
  return result;
}
