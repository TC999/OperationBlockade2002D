//----- (0040C630) --------------------------------------------------------
_DWORD *__cdecl sub_40C630(_DWORD *self, int a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)operator new(0xCu);
  *result = a2;
  result[1] = a3;
  result[2] = *self;
  *self = (uint32)(uintptr_t)result;
  return result;
}
