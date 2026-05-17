//----- (00463710) --------------------------------------------------------
char __stdcall sub_463710(const char *a1)
{
  _DWORD *v1; // edx
  char result; // al
  _WORD v3[3]; // [esp+0h] [ebp-48h] BYREF
  char v4[66]; // [esp+6h] [ebp-42h] BYREF

  v1 = (_DWORD *)dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || (result = *(_BYTE *)(dword_4F5CC4 + 937)) != 0 )
  {
    strcpy(v4, a1);
    return sub_4117A0(v1, (_DWORD *)0x604, v3, 70, 5, 10000);
  }
  return result;
}
