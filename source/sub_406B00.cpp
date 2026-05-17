//----- (00406B00) --------------------------------------------------------
_DWORD *__thiscall sub_406B00(_DWORD *this, int a2, char a3)
{
  int v4; // ecx
  int v5; // edi
  void *v6; // eax
  void *v7; // edi
  int v8; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  *this = &off_499040;
  v4 = *(_DWORD *)(a2 + 8);
  this[6] = 0;
  this[5] = v4;
  v5 = this[5];
  this[7] = a2;
  this[9] = 0;
  *((_BYTE *)this + 40) = a3;
  this[11] = 0;
  *((_BYTE *)this + 48) = 0;
  *this = &off_4990E8;
  this[8] = **(_DWORD **)(a2 + 44);
  v6 = operator new(96 * v5);
  if ( v6 )
    v7 = v6;
  else
    v7 = 0;
  v8 = this[5];
  this[6] = v7;
  memset(v7, 0, 4 * ((unsigned int)(96 * v8) >> 2));
  return this;
}
