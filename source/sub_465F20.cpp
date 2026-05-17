//----- (00465F20) --------------------------------------------------------
int __thiscall sub_465F20(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int i; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax

  v2 = this[6];
  if ( v2 )
    v3 = (this[7] - v2) >> 2;
  else
    v3 = 0;
  for ( i = 0; i < v3; ++i )
  {
    sub_428720(*(_DWORD **)(this[6] + 4 * i));
    sub_4286C0(this, *(_DWORD *)(this[6] + 4 * i));
    v5 = *(void (__thiscall ****)(_DWORD, int))(this[6] + 4 * i);
    if ( v5 )
      (**v5)(v5, 1);
  }
  result = this[7];
  this[7] = this[6];
  return result;
}
