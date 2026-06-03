//----- (00464AE0) --------------------------------------------------------
char __cdecl sub_464AE0(int self)
{
  int v2; // eax
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE v2b;

  v2 = *(_DWORD *)(self + 560);
  if ( !v2 )
  {
    v3 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(self + 300));
    *(_DWORD *)(self + 560) = (uint32)(uintptr_t)(v3);
    sub_4282E0(v3 != 0, "failed to load model %s, see file %s", (const char *)(self + 300), (const char *)(self + 16));
    if ( *(_BYTE *)(self + 564) )
    {
      v4 = sub_422400(*(_DWORD **)(dword_520970 + 124), (char *)(self + 564), 0);
      *(_DWORD *)(self + 1084) = v4;
      sub_4282E0(
        v4 != 0,
        "failed to find texture %s, see file %s",
        (const char *)(self + 564),
        (const char *)(self + 16));
    }
    v2b = *(_BYTE *)(self + 824);
    if ( v2b )
    {
      v5 = sub_422400(*(_DWORD **)(dword_520970 + 124), (char *)(self + 824), 0);
      *(_DWORD *)(self + 1088) = v5;
      sub_4282E0(
                     v5 != 0,
                     "failed to load texture %s, see file %s",
                     (const char *)(self + 824),
                     (const char *)(self + 16));
    }
  }
  return v2;
}
