//----- (00464A40) --------------------------------------------------------
int __thiscall sub_464A40(int this, int a2)
{
  if ( (_BYTE)a2 )
  {
    dword_4A4DD0 = dword_499BFC[*(_DWORD *)(this + 20)];
    dword_4A4DD4 = dword_499C24[*(_DWORD *)(this + 20)];
    dword_4A4DD8 = SLODWORD(flt_4AE420[2 * *(_DWORD *)(this + 20)]);
    dword_4A4DDC = SLODWORD(flt_4AE424[2 * *(_DWORD *)(this + 20)]);
  }
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 24))(*(_DWORD *)(this + 32), a2);
}
