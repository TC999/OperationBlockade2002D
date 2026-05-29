//----- (00468FF0) --------------------------------------------------------
void *__thiscall sub_468FF0(void *self, int a2)
{
  *((_BYTE *)self + 276) = a2;
  *((_DWORD *)self + 70) = 0;
  *((_DWORD *)self + 71) = 0;
  *((_DWORD *)self + 72) = 0;
  *(_DWORD *)self = &off_499D18;
  if ( !sub_40AE70((_DWORD *)a2, aName_0) )
    sub_40AFE0(aName_0, (char **)self + 1);
  strcpy((char *)self + 16, (const char *)(a2 + 16));
  return self;
}
