//----- (0046A280) --------------------------------------------------------
int __thiscall sub_46A280(int this, const char *a2)
{
  FILE *v3; // eax
  FILE *v4; // esi
  unsigned int v5; // edi
  void *v6; // eax
  int result; // eax
  size_t v8; // [esp-28h] [ebp-38h]

  strcpy((char *)(this + 40), a2);
  *(_DWORD *)(this + 308) = 0;
  v3 = fopen((const char *)(this + 40), aAB);
  v4 = v3;
  if ( !v3 )
    sub_4281B0("Can't open file '%s'", (const char *)(this + 40));
  fseek(v3, 0, 2);
  v5 = ftell(v4);
  fseek(v4, 0, 0);
  *(_DWORD *)(this + 304) = v5;
  v6 = operator new(v5);
  v8 = *(_DWORD *)(this + 304);
  *(_DWORD *)(this + 308) = v6;
  sub_4898CA(v6, 1u, v8, v4);
  result = fclose(v4);
  *(_BYTE *)(this + 300) = 1;
  *(_DWORD *)(this + 312) = 0;
  return result;
}
