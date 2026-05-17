//----- (0041CFD0) --------------------------------------------------------
int __thiscall sub_41CFD0(int this, float a2)
{
  int result; // eax
  int v3; // esi

  result = LODWORD(a2);
  v3 = *(_DWORD *)(this + 32);
  *(float *)(this + 12) = a2;
  *(float *)(this + 16) = a2;
  *(_DWORD *)(this + 20) = 0;
  if ( v3 )
    return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 60))(v3, (__int64)(a2 * 10000.0 - 10000.0));
  return result;
}
