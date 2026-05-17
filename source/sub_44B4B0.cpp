//----- (0044B4B0) --------------------------------------------------------
_BYTE *__thiscall sub_44B4B0(_BYTE *this, char *ArgList)
{
  char *v2; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // [esp-Ch] [ebp-30h]
  _DWORD v9[2]; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v2 = ArgList;
  v9[1] = this;
  sub_468FF0(ArgList);
  v10 = 0;
  this[292] = (_BYTE)ArgList;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  LOBYTE(v10) = 1;
  *(_DWORD *)this = &off_499A68;
  while ( sub_40ABC0(v2, aSystem, 0) )
  {
    sub_40AFC0(aSystem, (int)&ArgList);
    v4 = sub_413830(*(_DWORD **)(dword_520970 + 116), ArgList);
    v8 = *((_DWORD *)this + 75);
    v9[0] = v4;
    sub_44F190(v8, 1, v9);
    v5 = *((_DWORD *)this + 74);
    if ( v5 )
      v6 = (*((_DWORD *)this + 75) - v5) >> 2;
    else
      v6 = 0;
    sub_40A120(
      *(_DWORD *)(*((_DWORD *)this + 74) + 4 * v6 - 4) != 0,
      "failed to find particle system %s, see %s : %s, and particle.dat",
      ArgList,
      *((const char **)this + 1),
      v2 + 16);
  }
  return this;
}
