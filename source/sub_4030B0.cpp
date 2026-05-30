//----- (004030B0) --------------------------------------------------------
int __cdecl sub_4030B0(_DWORD *self, int a2, char *String2, int a4)
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

  v5 = self[23];
  if ( v5 <= 0 )
  {
    v7 = operator new(0x14u);
  }
  else
  {
    v6 = v5 - 1;
    v7 = *(_DWORD **)(self[22] + 4 * v6);
    self[23] = v6;
  }
  v7[1] = a2;
  v8 = sub_403710(String2);
  v7[3] = v8;
  sub_4282E0(v8 != 0, aDialogueGroupS, (char)String2);
  v7[4] = a4;
  v7[2] = self[16];
  *(_BYTE *)v7 = 0;
  v9 = self[20];
  v10 = self[19] + 1;
  self[19] = v10;
  if ( v10 > v9 )
  {
    v11 = (void *)self[18];
    v12 = v9 + 8;
    self[20] = v12;
    v13 = sub_488DD7(v11, 4 * v12);
    if ( v13 )
    {
      v14 = self[19];
      v15 = self[20] - v14;
      self[18] = v13;
      memset((void *)(v13 + 4 * v14), 0, 4 * v15);
    }
  }
  *(_DWORD *)(self[18] + 4 * self[19] - 4) = v7;
  result = self[16];
  self[16] = result + 1;
  return result;
}
