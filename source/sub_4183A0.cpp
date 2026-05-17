//----- (004183A0) --------------------------------------------------------
int __thiscall sub_4183A0(int this, int a2, float a3)
{
  int v4; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int result; // eax

  v4 = *(_DWORD *)(this + 16);
  v5 = (int *)(this + 36);
  *(_DWORD *)(this + 4184) = v4;
  v6 = *v5;
  *(_DWORD *)(this + 4180) = 0;
  *(_DWORD *)(this + 4188) = v6;
  *(_BYTE *)(this + 4200) = 1;
  v7 = v5[1];
  *(_BYTE *)(this + 4201) = 0;
  *(_DWORD *)(this + 4192) = v7;
  result = *(_DWORD *)(this + 4132);
  *(_DWORD *)(this + 4196) = v5[2];
  *(_BYTE *)(this + 4202) = 0;
  if ( result >= 6 )
  {
    sub_417770((float *)this);
    return sub_418420(a2, a3, 0, 0, 0);
  }
  return result;
}
