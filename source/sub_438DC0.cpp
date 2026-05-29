//----- (00438DC0) --------------------------------------------------------
char __thiscall sub_438DC0(int *self)
{
  char **v2; // ebx
  int *v3; // ebp
  LPVOID *v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  char *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  char result; // al
  float v20; // [esp+0h] [ebp-30h]
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+18h] [ebp-18h]

  v2 = &off_4AA1E8;
  v22 = sub_421B20(1);
  v21 = (__int64)((double)(unsigned int)dword_5209D8 + 20.0);
  if ( off_4AA1E8 )
  {
    do
    {
      if ( **v2 )
      {
        v3 = (int *)operator new(8u);
        v4 = (LPVOID *)sub_409AD0(1, 1);
        *v3 = (int)v4;
        sub_421110(v4, *v2);
        *(_DWORD *)(*v3 + 20) = 1092616192;
        sub_421300(*v3, 0xFFu, 0xFFu, 0xFFu, 255);
        v5 = (double)v21;
        v6 = *v3;
        *((float *)v3 + 1) = v5;
        v7 = dword_5209F4;
        *(_BYTE *)(v6 + 32) = 1;
        *(float *)(v6 + 12) = (double)(unsigned int)v7 * 0.5;
        *(float *)(v6 + 16) = v5;
        v8 = self[123] + 1;
        self[123] = v8;
        v9 = v8;
        v10 = self[124];
        if ( v9 > v10 )
        {
          v11 = (void *)self[122];
          v12 = v10 + 8;
          self[124] = v12;
          v13 = sub_488DD7(v11, 4 * v12);
          if ( v13 )
          {
            v14 = self[123];
            v15 = self[124] - v14;
            self[122] = v13;
            memset((void *)(v13 + 4 * v14), 0, 4 * v15);
          }
        }
        *(_DWORD *)(self[122] + 4 * self[123] - 4) = v3;
      }
      v16 = v2[1];
      ++v2;
      v21 += v22;
    }
    while ( v16 );
  }
  v17 = operator new(0x15Cu);
  if ( v17 )
    v18 = sub_41C6A0(v17);
  else
    v18 = 0;
  self[103] = (int)v18;
  sub_41C7A0((int)v18, 1);
  sub_41C760(self[103], aSoundsUiMusicW);
  *(_BYTE *)self[103] = 0;
  sub_41CA40(self[103]);
  v20 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(self[103], v20);
  result = sub_41CD90(self[103]);
  self[121] = 8;
  return result;
}
