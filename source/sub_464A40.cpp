extern float flt_4AE420[];
extern float flt_4AE424[];

//----- (00464A40) --------------------------------------------------------
int __cdecl sub_464A40(int self, int a2)
{
  if ( (_BYTE)a2 )
  {
    dword_4A4DD0 = ((int *)&dword_499BFC)[*(_DWORD *)(self + 20)];
    dword_4A4DD4 = ((int *)&dword_499C24)[*(_DWORD *)(self + 20)];
    dword_4A4DD8 = SLODWORD(flt_4AE420[2 * *(_DWORD *)(self + 20)]);
    dword_4A4DDC = SLODWORD(flt_4AE424[2 * *(_DWORD *)(self + 20)]);
  }
  return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(self + 32) + 24))(*(_DWORD *)(self + 32), a2);
}
