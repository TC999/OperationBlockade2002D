//----- (0041A360) --------------------------------------------------------
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4);
bool __cdecl sub_41A360(char a1)
{
  byte_5200B8 = a1;
  return DialogBoxParamA(hInstance, (LPCSTR)0x66, 0, DialogFunc, 0) > 0;
}
