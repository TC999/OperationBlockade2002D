//----- (00426E30) --------------------------------------------------------
LRESULT __stdcall sub_426E30(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v5; // eax

  if ( Msg > 0x102 )
  {
    if ( Msg != 274 )
    {
      if ( Msg != 562 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
      goto LABEL_16;
    }
    v5 = wParam & 0xFFF0;
    if ( v5 == 61760 )
    {
      return 0;
    }
    else
    {
      if ( v5 != 61808 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
      return 0;
    }
  }
  else
  {
    if ( Msg == 258 )
    {
      if ( byte_5209DC && dword_520970 )
        (*(void (__cdecl **)(int, WPARAM))(*(_DWORD *)dword_520970 + 8))(dword_520970, wParam);
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if ( Msg != 2 )
    {
      if ( Msg != 5 )
      {
        if ( Msg != 6 )
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        if ( (_WORD)wParam && !HIWORD(wParam) )
        {
LABEL_8:
          byte_5209DC = 1;
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
        goto LABEL_20;
      }
LABEL_16:
      if ( wParam != 4 && wParam != 1 )
      {
        sub_4229D0(aGettingRestore);
        GetClientRect(dword_5209E4, &Rect);
        GetWindowRect(dword_5209E4, &stru_5209C8);
        goto LABEL_8;
      }
      sub_4229D0(aGettingMinimiz);
LABEL_20:
      byte_5209DC = 0;
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    PostQuitMessage(0);
    return 0;
  }
}
