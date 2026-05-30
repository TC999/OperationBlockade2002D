//----- (00444030) --------------------------------------------------------
char __cdecl sub_444030(_DWORD *self, char a2)
{
  int v3; // ecx
  char result; // al
  int v5; // eax
  int v6; // [esp-Ch] [ebp-1Ch]
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = self[363];
  if ( v3 )
  {
    sub_41D9A0(v3);
    result = a2;
    self[363] = 0;
    if ( a2 )
    {
      v5 = self[102];
      v6 = self[103];
      memset(v7, 0, sizeof(v7));
      return sub_44E040(*(_DWORD *)(v5 + 792), (int)(self + 120), v6, 0.0, (int)v7);
    }
  }
  return result;
}
