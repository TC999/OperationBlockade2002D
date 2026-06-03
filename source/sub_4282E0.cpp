//----- (004282E0) --------------------------------------------------------
extern char aOperationBlock_1[];
char sub_4282E0(char a1, char *Format, ...)
{
  char result; // al
  int v3; // esi
  int v4; // edi
  int SystemMetrics; // eax
  CHAR Text[512]; // [esp+0h] [ebp-200h] BYREF
  va_list ArgList; // [esp+20Ch] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  result = a1;
  if ( !a1 )
  {
    if ( _vsnprintf(Text, 0x1FEu, Format, ArgList) == -1 )
      Text[510] = 0;
    strcat(Text, asc_4A1F30);
    sub_4229D0("FatalCondition failed: '%s'", Text);
    if ( dword_5209E4 && !(_BYTE)dword_520A30 )
    {
      SetWindowLongA(dword_5209E4, -16, 281018368);
      SetWindowPos(dword_5209E4, 0, 0, 0, 0, 0, 0x27u);
      v3 = GetSystemMetrics(4) + 100;
      v4 = (GetSystemMetrics(0) - 100) / 2;
      SystemMetrics = GetSystemMetrics(1);
      SetWindowPos(dword_5209E4, 0, v4, (SystemMetrics - v3) / 2, 100, v3, 0x24u);
    }
    ShowCursor(1);
    MessageBoxA(0, Text, aOperationBlock_1, 0x10u);
    if ( dword_5209E4 )
      SendMessageA(dword_5209E4, 0x10u, 0, 0);
    exit(1);
  }
  return result;
}
