//----- (00468FF0) --------------------------------------------------------
void *__thiscall sub_468FF0(void *this, int a2)
{
  *((_BYTE *)this + 276) = a2;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *(_DWORD *)this = &off_499D18;
  if ( !sub_40AE70((_DWORD *)a2, aName_0) )
    sub_40AFE0(aName_0, (char **)this + 1);
  strcpy((char *)this + 16, (const char *)(a2 + 16));
  return this;
}
