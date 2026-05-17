//----- (00402960) --------------------------------------------------------
BOOL sub_402960()
{
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B5A94 + 36))(dword_4B5A94);
  dword_4A00AC = 0;
  return PostMessageA(hWnd, 0x10u, 0, 0);
}
