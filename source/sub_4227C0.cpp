//----- (004227C0) --------------------------------------------------------
int __thiscall sub_4227C0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char i; // di
  char v6; // [esp+0h] [ebp-Ch]

  sub_4229D0(aTexturesLoaded, v6);
  v2 = (_DWORD *)this[5];
  v3 = 0;
  for ( i = 0; v2; v2 = (_DWORD *)v2[4] )
  {
    v3 += v2[10];
    ++i;
    sub_4229D0(aSDxDDk, v2[3]);
  }
  return sub_4229D0(aTotalOfDTextur, i);
}
