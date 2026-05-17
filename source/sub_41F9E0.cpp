//----- (0041F9E0) --------------------------------------------------------
int sub_41F9E0()
{
  int result; // eax

  if ( dword_5200F8 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200F8 + 8))(dword_5200F8);
    dword_5200F8 = 0;
  }
  result = dword_520124;
  if ( dword_520124 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_520124 + 8))(dword_520124);
    dword_520124 = 0;
  }
  dword_520100 = -1;
  return result;
}
