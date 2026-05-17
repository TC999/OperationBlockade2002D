//----- (0040C1F0) --------------------------------------------------------
_DWORD *__thiscall sub_40C1F0(_DWORD **this, _DWORD *a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *result; // eax
  char *v7; // [esp+18h] [ebp-14h]
  _DWORD v8[2]; // [esp+24h] [ebp-8h] BYREF

  v8[0] = 0;
  v4 = this + 4;
  v5 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **, _DWORD))(*this[2] + 12))(this[2], &unk_499E34, this + 4, 0);
  if ( v5 < 0 )
  {
    v7 = aCouldnTObtainM;
LABEL_7:
    sub_403A30(a2, v5, v7);
    return a2;
  }
  v5 = (*(int (__stdcall **)(_DWORD, void *))(*(_DWORD *)*v4 + 44))(*v4, &unk_499DAC);
  if ( v5 < 0 )
  {
    v7 = aCouldnTSetMous;
    goto LABEL_7;
  }
  v5 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v4 + 52))(*v4, a3, 6 - (a4 != 0));
  if ( v5 < 0 )
  {
    v7 = aCouldnTSetCoop;
    goto LABEL_7;
  }
  sub_40C4C0(v8);
  sub_488CEE((LPVOID)v8[1]);
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
