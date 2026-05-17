//----- (00464AE0) --------------------------------------------------------
char __thiscall sub_464AE0(int this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = *(_DWORD *)(this + 560);
  if ( !v2 )
  {
    v3 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(this + 300));
    *(_DWORD *)(this + 560) = v3;
    sub_4282E0(v3 != 0, "failed to load model %s, see file %s", (const char *)(this + 300), (const char *)(this + 16));
    if ( *(_BYTE *)(this + 564) )
    {
      v4 = sub_422400(*(_DWORD **)(dword_520970 + 124), (char *)(this + 564), 0);
      *(_DWORD *)(this + 1084) = v4;
      sub_4282E0(
        v4 != 0,
        "failed to find texture %s, see file %s",
        (const char *)(this + 564),
        (const char *)(this + 16));
    }
    LOBYTE(v2) = *(_BYTE *)(this + 824);
    if ( (_BYTE)v2 )
    {
      v5 = sub_422400(*(_DWORD **)(dword_520970 + 124), (char *)(this + 824), 0);
      *(_DWORD *)(this + 1088) = v5;
      LOBYTE(v2) = sub_4282E0(
                     v5 != 0,
                     "failed to load texture %s, see file %s",
                     (const char *)(this + 824),
                     (const char *)(this + 16));
    }
  }
  return v2;
}
