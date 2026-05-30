//----- (004649C0) --------------------------------------------------------
char __cdecl sub_4649C0(int self, int a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  float v10; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)(self + 32) )
  {
    v3 = sub_408F30(dword_520970);
    if ( v3 )
    {
      v4 = (int *)(v3 + 32);
      v5 = *v4;
      v6 = v4[1];
      v7 = v4[2];
      sub_4074B0(*(_DWORD **)(self + 32), 0);
      sub_407600(*(_DWORD **)(self + 32), 0, v5, v6, v7);
      v8 = *(_DWORD *)(self + 36);
      if ( v8 > -1 )
      {
        v10 = *(float *)&a2 * 0.5 * 0.017453292;
        sub_407560(*(_DWORD **)(self + 32), v8, v10);
      }
    }
  }
  return sub_428620((_DWORD *)self, a2);
}
