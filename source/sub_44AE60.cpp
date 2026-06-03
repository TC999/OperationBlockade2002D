//----- (0044AE60) --------------------------------------------------------
int __stdcall sub_44AE60(int a1, float a2, float a3, int a4, int a5)
{
  sub_42FBB0(*(_DWORD **)(dword_520970 + 208), a1, a2, a3, a4, a5);
  if ( !(_BYTE)a5 )
  {
    sub_461FD0((_DWORD *)a1, (float *)LODWORD(a2), a3, a4, 0, 0);
    return 0;
  }
  sub_442F30(*(_DWORD **)(dword_520970 + 212), a1, a2, a3, a4, a5);
  sub_456050((_DWORD *)a1, LODWORD(a2), a3, a4, a5, 0);
  return sub_465D40((_DWORD *)a1, LODWORD(a2), a3, a4, a5, 0);
}
