//----- (00464BB0) --------------------------------------------------------
int __cdecl sub_464BB0(_DWORD *self)
{
  _DWORD *v2; // ecx
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx

  v2 = (_DWORD *)self[140];
  if ( v2 )
  {
    result = sub_403B70(v2);
    v4 = (int *)self[271];
    self[140] = 0;
    if ( v4 )
    {
      result = sub_422230(v4);
      self[271] = 0;
    }
    v5 = (int *)self[272];
    if ( v5 )
    {
      result = sub_422230(v5);
      self[272] = 0;
    }
  }
  return result;
}
