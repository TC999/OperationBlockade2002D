//----- (004028F0) --------------------------------------------------------
BOOL sub_4028F0()
{
  if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  ppv = 0;
  if ( dword_4B5A94 )
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B5A94 + 8))(dword_4B5A94);
  dword_4B5A94 = 0;
  if ( dword_4B5A98 )
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B5A98 + 8))(dword_4B5A98);
  dword_4B5A98 = 0;
  if ( dword_4B5A9C )
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B5A9C + 8))(dword_4B5A9C);
  dword_4B5A9C = 0;
  return DestroyWindow(hWnd);
}
