//----- (004027C0) --------------------------------------------------------
LRESULT __stdcall sub_4027C0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  if ( Msg == 2 )
    return 0;
  if ( Msg == 256 && (wParam == 13 || wParam == 27 || wParam == 32) )
  {
    dword_4B5AA8 = 1;
    sub_402960();
  }
  return DefWindowProcA(hWnd, Msg, wParam, lParam);
}
