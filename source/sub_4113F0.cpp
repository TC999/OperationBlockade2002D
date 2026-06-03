//----- (004113F0) --------------------------------------------------------
_BYTE *__cdecl sub_4113F0(_DWORD *self, int a2, __int16 a3, __int16 a4, char a5)
{
  _BYTE *result; // eax

  result = (_BYTE *)operator new(0x10u);
  result[8] = a5;
  *(_DWORD *)result = a2;
  *((_WORD *)result + 2) = a3;
  *((_WORD *)result + 3) = a4;
  *((_DWORD *)result + 3) = self[5];
  self[5] = (uint32)(uintptr_t)result;
  return result;
}
