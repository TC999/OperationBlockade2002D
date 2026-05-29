//----- (0043AAC0) --------------------------------------------------------
int __thiscall sub_43AAC0(_DWORD *self)
{
  int v2; // ecx
  int result; // eax
  _DWORD *v4; // ecx

  v2 = self[20];
  if ( v2 )
  {
    sub_41D860(v2);
    result = sub_41D9A0(self[20]);
    self[20] = 0;
  }
  v4 = (_DWORD *)self[21];
  if ( v4 )
  {
    result = sub_41D700(v4);
    self[21] = 0;
  }
  return result;
}
