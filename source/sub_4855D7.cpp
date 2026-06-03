//----- (004855D7) --------------------------------------------------------
int __cdecl sub_4855D7(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // [esp-14h] [ebp-A4h]
  int v7; // [esp-4h] [ebp-94h]
  _BYTE v8[136]; // [esp+8h] [ebp-88h] BYREF

  v7 = *(_DWORD *)(a1 + 284) + 128;
  v6 = *(_DWORD *)(a2 + 80);
  if ( byte_4B15AC )
    return sub_486ABB((int*)a3, (int*)v6, (int*)v8, a4, a5, v7);
  else
    return sub_486659((__int16*)a3, (__int16*)v6, (int*)v8, a4, a5, v7);
}
