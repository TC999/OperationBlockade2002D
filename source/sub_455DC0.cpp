//----- (00455DC0) --------------------------------------------------------
int __thiscall sub_455DC0(_DWORD *self, int a2)
{
  unsigned int i; // edi
  int result; // eax
  _WORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+12h] [ebp-6h]

  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v6 = a2;
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x902, v5, 10, 15, 0);
  }
  for ( i = 0; ; ++i )
  {
    result = self[100];
    if ( !result || i >= (self[101] - result) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(result + 4 * i) + 400) == a2 )
      sub_456370();
  }
  return result;
}
