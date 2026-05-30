//----- (0045D070) --------------------------------------------------------
void __cdecl sub_45D070(int self)
{
  char *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( *(_DWORD *)(self + 292) != 3 && !*(_DWORD *)(self + 648) )
  {
    v2 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(self + 388));
    *(_DWORD *)(self + 648) = v2;
    sub_4282E0(v2 != 0, "failed to load model %s, see file %s", (const char *)(self + 388), (const char *)(self + 16));
    v3 = operator new(0x34u);
    if ( v3 )
      v4 = sub_406B00(v3, *(_DWORD *)(self + 648), 1);
    else
      v4 = 0;
    *(_DWORD *)(self + 652) = v4;
    v4[9] = 0;
    *(_BYTE *)(*(_DWORD *)(self + 652) + 48) = 1;
  }
}
