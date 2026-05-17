//----- (00455E30) --------------------------------------------------------
int __thiscall sub_455E30(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int i; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax

  v2 = this[100];
  if ( v2 )
    v3 = (this[101] - v2) >> 2;
  else
    v3 = 0;
  for ( i = 0; i < v3; ++i )
  {
    sub_428720(*(_DWORD **)(this[100] + 4 * i));
    sub_4286C0(this, *(_DWORD *)(this[100] + 4 * i));
    v5 = *(void (__thiscall ****)(_DWORD, int))(this[100] + 4 * i);
    if ( v5 )
      (**v5)(v5, 1);
  }
  result = this[101];
  this[101] = this[100];
  this[98] = 0;
  return result;
}
