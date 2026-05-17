//----- (0045D070) --------------------------------------------------------
void __thiscall sub_45D070(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( *(_DWORD *)(this + 292) != 3 && !*(_DWORD *)(this + 648) )
  {
    v2 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(this + 388));
    *(_DWORD *)(this + 648) = v2;
    sub_4282E0(v2 != 0, "failed to load model %s, see file %s", (const char *)(this + 388), (const char *)(this + 16));
    v3 = operator new(0x34u);
    if ( v3 )
      v4 = sub_406B00(v3, *(_DWORD *)(this + 648), 1);
    else
      v4 = 0;
    *(_DWORD *)(this + 652) = v4;
    v4[9] = 0;
    *(_BYTE *)(*(_DWORD *)(this + 652) + 48) = 1;
  }
}
