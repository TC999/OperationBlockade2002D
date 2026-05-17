//----- (004030B0) --------------------------------------------------------
int __thiscall sub_4030B0(_DWORD *this, int a2, char *String2, int a4)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  void *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  int result; // eax

  v5 = this[23];
  if ( v5 <= 0 )
  {
    v7 = operator new(0x14u);
  }
  else
  {
    v6 = v5 - 1;
    v7 = *(_DWORD **)(this[22] + 4 * v6);
    this[23] = v6;
  }
  v7[1] = a2;
  v8 = sub_403710(String2);
  v7[3] = v8;
  sub_4282E0(v8 != 0, aDialogueGroupS, (char)String2);
  v7[4] = a4;
  v7[2] = this[16];
  *(_BYTE *)v7 = 0;
  v9 = this[20];
  v10 = this[19] + 1;
  this[19] = v10;
  if ( v10 > v9 )
  {
    v11 = (void *)this[18];
    v12 = v9 + 8;
    this[20] = v12;
    v13 = sub_488DD7(v11, 4 * v12);
    if ( v13 )
    {
      v14 = this[19];
      v15 = this[20] - v14;
      this[18] = v13;
      memset((void *)(v13 + 4 * v14), 0, 4 * v15);
    }
  }
  *(_DWORD *)(this[18] + 4 * this[19] - 4) = v7;
  result = this[16];
  this[16] = result + 1;
  return result;
}
