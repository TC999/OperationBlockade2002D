//----- (0041F390) --------------------------------------------------------
int sub_41F390()
{
  int result; // eax

  if ( dword_5200EC )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200EC + 8))(dword_5200EC);
    dword_5200EC = 0;
  }
  result = dword_5200F0;
  if ( dword_5200F0 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_5200F0 + 8))(dword_5200F0);
    dword_5200F0 = 0;
  }
  return result;
}
