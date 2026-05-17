//----- (0041CF80) --------------------------------------------------------
int __thiscall sub_41CF80(int this, float a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rax

  v3 = *(_DWORD *)(this + 344);
  *(float *)(this + 8) = a2;
  v4 = (__int64)((double)v3 * a2);
  if ( (_DWORD)v4 )
    LODWORD(v4) = (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), v4);
  return v4;
}
