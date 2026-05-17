//----- (00444030) --------------------------------------------------------
char __thiscall sub_444030(_DWORD *this, char a2)
{
  int v3; // ecx
  char result; // al
  int v5; // eax
  int v6; // [esp-Ch] [ebp-1Ch]
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = this[363];
  if ( v3 )
  {
    sub_41D9A0(v3);
    result = a2;
    this[363] = 0;
    if ( a2 )
    {
      v5 = this[102];
      v6 = this[103];
      memset(v7, 0, sizeof(v7));
      return sub_44E040(*(_DWORD *)(v5 + 792), (int)(this + 120), v6, 0.0, (int)v7);
    }
  }
  return result;
}
