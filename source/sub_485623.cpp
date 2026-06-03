//----- (00485623) --------------------------------------------------------
int __cdecl sub_485623(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // [esp-10h] [ebp-A0h]
  int v7; // [esp-4h] [ebp-94h]
  _BYTE v8[136]; // [esp+8h] [ebp-88h] BYREF

  v7 = *(_DWORD *)(a1 + 284) + 128;
  v6 = *(_DWORD *)(a2 + 80);
  if ( byte_4B15AC )
    return sub_487523((int*)a3, (int*)v8, (int*)v6, (_DWORD*)a4, a5, v7);
  else
    return sub_4871C8((_WORD*)a3, (_WORD*)v8, (_WORD*)v6, a4, a5, v7);
}
