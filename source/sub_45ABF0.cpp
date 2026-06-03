extern char aCancelmission[];

//----- (0045ABF0) --------------------------------------------------------
int __cdecl sub_45ABF0(int self)
{
  int v2; // ecx
  void *v3; // edi
  int v4; // ecx
  LPVOID *v5; // eax
  int result; // eax

  sub_4229D0(aCancelmission);
  v2 = *(_DWORD *)(self + 228);
  if ( v2 )
  {
    sub_41CF50(v2);
    v3 = *(void **)(self + 228);
    if ( v3 )
    {
      sub_41C700(*(LPVOID **)(self + 228));
      sub_4885A6(v3);
    }
    *(_DWORD *)(self + 228) = 0;
  }
  v4 = *(_DWORD *)(self + 236);
  if ( v4 )
    sub_41CF50(v4);
  sub_402FC0(*(_DWORD *)(self + 92));
  sub_44B3F0(*(_DWORD **)(dword_520970 + 276));
  sub_443080(*(_DWORD **)(dword_520970 + 212));
  sub_455E30(*(_DWORD **)(dword_520970 + 216));
  sub_42FDD0(*(_DWORD **)(dword_520970 + 208));
  sub_465F20(*(_DWORD **)(dword_520970 + 220));
  sub_45F080(*(_DWORD **)(dword_520970 + 280));
  sub_4134A0(*(_DWORD **)(dword_520970 + 116));
  sub_44E870(*(_DWORD **)(dword_520970 + 240));
  sub_4151F0(*(_DWORD *)(dword_520970 + 244));
  sub_436D70(*(_DWORD **)(dword_520970 + 224));
  sub_45AF60((_DWORD *)self);
  sub_4630B0(*(_DWORD **)(dword_520970 + 280));
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 0;
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
  v5 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 4.0);
  sub_421110(v5, AppName);
  *(_DWORD *)(self + 76) = 0;
  *(_DWORD *)(self + 100) = 0;
  *(_BYTE *)(self + 81) = 0;
  *(_BYTE *)(self + 80) = 0;
  result = *(_DWORD *)(self + 216);
  *(_DWORD *)(self + 216) = *(_DWORD *)(self + 212);
  return result;
}
