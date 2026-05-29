//----- (0046A340) --------------------------------------------------------
char __thiscall sub_46A340(int self)
{
  char result; // al
  FILE *v3; // esi

  result = *(_BYTE *)(self + 300);
  if ( !result )
  {
    v3 = fopen((const char *)(self + 40), aWb);
    if ( !v3 )
      sub_4281B0("Can't create file '%s'", (const char *)(self + 40));
    sub_48A21D(*(void **)(self + 308), 1u, *(_DWORD *)(self + 312), v3);
    return fclose(v3);
  }
  return result;
}
