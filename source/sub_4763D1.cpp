//----- (004763D1) --------------------------------------------------------
int __thiscall sub_4763D1(int this)
{
  int result; // eax

  *(_DWORD *)this = &off_49A7D8;
  sub_4755BD((_DWORD *)this);
  result = *(_DWORD *)(this + 4196);
  if ( result )
    result = sub_4885A6(*(LPVOID *)(this + 4196));
  *(_DWORD *)this = &off_49A774;
  return result;
}
