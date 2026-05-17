//----- (0043A4A0) --------------------------------------------------------
int __thiscall sub_43A4A0(_DWORD *this)
{
  void *v2; // esi
  _DWORD *v3; // esi
  int v4; // edi
  int result; // eax

  sub_41CF50(this[12]);
  v2 = (void *)this[12];
  if ( v2 )
  {
    sub_41C700((LPVOID *)this[12]);
    sub_4885A6(v2);
  }
  this[12] = 0;
  v3 = this + 6;
  v4 = 4;
  do
  {
    sub_413240(1048576000, 1067450368, 255, 0);
    ++v3;
    --v4;
  }
  while ( v4 );
  result = sub_436FA0(*(float **)(dword_520970 + 224), 0.25, 1.5);
  this[11] = 2;
  return result;
}
