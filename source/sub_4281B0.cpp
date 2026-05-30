//----- (004281B0) --------------------------------------------------------
void sub_4281B0(char *Format, ...)
{
  int v1; // esi
  int v2; // edi
  int SystemMetrics; // eax
  CHAR Text[512]; // [esp+0h] [ebp-200h] BYREF
  va_list ArgList; // [esp+208h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  if ( _vsnprintf(Text, 0x1FEu, Format, ArgList) == -1 )
    Text[510] = 0;
  strcat(Text, asc_4A1F30);
  sub_4229D0("FatalError failed: '%s'", Text);
  if ( dword_5209E4 && !(_BYTE)dword_520A30 )
  {
    SetWindowLongA(dword_5209E4, -16, 281018368);
    SetWindowPos(dword_5209E4, 0, 0, 0, 0, 0, 0x27u);
    v1 = GetSystemMetrics(4) + 100;
    v2 = (GetSystemMetrics(0) - 100) / 2;
    SystemMetrics = GetSystemMetrics(1);
    SetWindowPos(dword_5209E4, 0, v2, (SystemMetrics - v1) / 2, 100, v1, 0x24u);
  }
  ShowCursor(1);
  MessageBoxA(0, Text, aOperationBlock_1, 0x10u);
  if ( dword_5209E4 )
    SendMessageA(dword_5209E4, 0x10u, 0, 0);
  exit(1);
}
