//----- (00465E00) --------------------------------------------------------
int __thiscall sub_465E00(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // edx
  int v8; // [esp+8h] [ebp-24h] BYREF
  void *v9; // [esp+Ch] [ebp-20h]
  _WORD v10[3]; // [esp+10h] [ebp-1Ch] BYREF
  int v11; // [esp+16h] [ebp-16h]
  int v12; // [esp+1Ah] [ebp-12h]
  int v13; // [esp+28h] [ebp-4h]

  v9 = operator new(0x550u);
  v13 = 0;
  if ( v9 )
  {
    v4 = this[6];
    if ( v4 )
      v5 = sub_465FF0(a2, (this[7] - v4) >> 2);
    else
      v5 = sub_465FF0(a2, 0);
  }
  else
  {
    v5 = 0;
  }
  v6 = (_DWORD *)this[7];
  v8 = v5;
  v13 = -1;
  sub_44F190((int)(this + 5), v6, 1u, &v8);
  sub_466AA0(v8);
  sub_428680(this, v8);
  if ( a3 <= -1 )
  {
    *(_BYTE *)(v8 + 436) = 1;
  }
  else
  {
    *(_BYTE *)(v8 + 436) = 0;
    sub_4431F0(a3, v8);
  }
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v12 = a3;
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x801, v10, 14, 15, 0);
  }
  return v8;
}
