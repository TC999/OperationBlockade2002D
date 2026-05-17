//----- (00422290) --------------------------------------------------------
_DWORD *__thiscall sub_422290(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  float v6; // [esp+0h] [ebp-38h]
  float v7; // [esp+4h] [ebp-34h]
  float v8; // [esp+8h] [ebp-30h]
  float v9; // [esp+Ch] [ebp-2Ch]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  *this = &off_499334;
  this[5] = 0;
  this[6] = 0;
  v2 = operator new(0x80u);
  if ( v2 )
    v3 = sub_412AB0(v2);
  else
    v3 = 0;
  this[7] = v3;
  v4 = 512;
  if ( (unsigned int)dword_5209D8 <= 0x200 )
    v4 = dword_5209D8;
  v9 = (double)(unsigned int)(dword_5209D8 + v4) * 0.5;
  v8 = (double)(unsigned int)(v4 + dword_5209F4) * 0.5;
  v7 = (double)(unsigned int)(dword_5209D8 - v4) * 0.5;
  v6 = (double)(unsigned int)(dword_5209F4 - v4) * 0.5;
  sub_413090((int)v3, v6, v7, v8, v9);
  sub_428680(this[7]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[7] + 24))(this[7], 0);
  this[8] = 0;
  return this;
}
