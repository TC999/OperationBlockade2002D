//----- (00464BB0) --------------------------------------------------------
int __thiscall sub_464BB0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx

  v2 = (_DWORD *)this[140];
  if ( v2 )
  {
    result = sub_403B70(v2);
    v4 = (int *)this[271];
    this[140] = 0;
    if ( v4 )
    {
      result = sub_422230(v4);
      this[271] = 0;
    }
    v5 = (int *)this[272];
    if ( v5 )
    {
      result = sub_422230(v5);
      this[272] = 0;
    }
  }
  return result;
}
