//----- (004763D1) --------------------------------------------------------
int __cdecl sub_4763D1(int self)
{
  int result; // eax

  *(_DWORD *)self = (uint32)&off_49A7D8;
  sub_4755BD((_DWORD *)self);
  result = *(_DWORD *)(self + 4196);
  if ( result )
    sub_4885A6(*(LPVOID *)(self + 4196));
    result = 0;
  *(_DWORD *)self = (uint32)&off_49A774;
  return result;
}
