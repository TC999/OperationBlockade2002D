//----- (00413780) --------------------------------------------------------
extern "C" void __cdecl __eh_vector_ctor_iterator(void *, unsigned int, int, void (__cdecl *)(void *), void (__cdecl *)(void *));

_DWORD *__cdecl sub_413780(_DWORD *self)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = (_DWORD *)operator new(0x2B8u);
  if ( v2 )
  {
    v2[90] = 0;
    v2[91] = 0;
    v2[92] = 0;
    *((_BYTE *)v2 + 372) = 0;
    __eh_vector_ctor_iterator(v2 + 94, 0xCu, 26, (void (__cdecl *)(void *))sub_40E5F0, (void (__cdecl *)(void *))sub_40E620);
    v2[173] = 0;
    *(_BYTE *)v2 = 0;
    *((_BYTE *)v2 + 33) = 0;
    *((_BYTE *)v2 + 293) = 0;
    result = v2;
  }
  else
  {
    result = 0;
  }
  result[173] = self[10];
  v4 = self[9] + 1;
  self[10] = (int)result;
  self[9] = v4;
  return result;
}
