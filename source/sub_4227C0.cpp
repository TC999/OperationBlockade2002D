//----- (004227C0) --------------------------------------------------------
extern char aTexturesLoaded[];
extern char aSDxDDk[];
extern char aTotalOfDTextur[];
int __cdecl sub_4227C0(_DWORD *self)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char i; // di
  char v6; // [esp+0h] [ebp-Ch]

  sub_4229D0(aTexturesLoaded, v6);
  v2 = (_DWORD *)self[5];
  v3 = 0;
  for ( i = 0; v2; v2 = (_DWORD *)v2[4] )
  {
    v3 += v2[10];
    ++i;
    sub_4229D0(aSDxDDk, v2[3]);
  }
  return (int)(uintptr_t)sub_4229D0(aTotalOfDTextur, i);
}
