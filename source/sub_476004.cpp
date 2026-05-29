//----- (00476004) --------------------------------------------------------
int __thiscall sub_476004(_DWORD *self, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  unsigned int v6; // edi
  bool v7; // cc
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _BYTE *v11; // edx
  _DWORD *v12; // edi
  unsigned int v13; // ecx
  float *v14; // ecx
  double v15; // st7
  double v16; // st7
  double v17; // st7
  _BYTE v18[64]; // [esp+4h] [ebp-4Ch] BYREF
  int v19; // [esp+44h] [ebp-Ch]
  int v20; // [esp+48h] [ebp-8h]
  int v21; // [esp+4Ch] [ebp-4h]
  BOOL v22; // [esp+60h] [ebp+10h]

  if ( !self[1061] )
    return -2147024882;
  if ( a2 < self[1054] || a2 >= self[1056] )
  {
    v6 = a3;
  }
  else
  {
    v6 = a3;
    if ( a3 >= self[1057] && a3 < self[1058] )
      return 0;
  }
  result = sub_475CAA(self);
  if ( result >= 0 )
  {
    self[1056] = (a2 & 0xFFFFFFFC) + 4;
    self[1058] = v6 + 1;
    v7 = self[1065] <= (a2 & 0xFFFFFFFC);
    self[1054] = a2 & 0xFFFFFFFC;
    self[1057] = v6;
    if ( v7 )
    {
      self[1065] = a2 & 0xFFFFFFFC;
      if ( !a4 )
        return 0;
    }
    v8 = self[1];
    v22 = v8 == 844388420 || v8 == 877942852;
    v9 = self[1053];
    if ( v9 >= self[1055] )
      return 0;
LABEL_19:
    v10 = self[1];
    switch ( v10 )
    {
      case 827611204:
        sub_47B039(self[6] + v6 * self[1043] + self[1042] * (a2 >> 2) + 8 * (v9 >> 2), v18);
        break;
      case 844388420:
      case 861165636:
        sub_47B9A3(self[6] + 16 * (v9 >> 2) + v6 * self[1043] + self[1042] * (a2 >> 2), v18);
        break;
      case 877942852:
      case 894720068:
        sub_47B9F1(self[6] + 16 * (v9 >> 2) + v6 * self[1043] + self[1042] * (a2 >> 2), v18);
        break;
    }
    v11 = v18;
    v12 = self + 1049;
    v20 = 4;
    while ( 1 )
    {
      v13 = v9 - self[1053];
      v21 = 4;
      v14 = (float *)(*v12 + 16 * v13);
      do
      {
        v19 = (unsigned __int8)v11[3];
        v14[3] = (double)v19 * 0.0039215689;
        v19 = (unsigned __int8)v11[2];
        *v14 = (double)v19 * 0.0039215689;
        v19 = (unsigned __int8)v11[1];
        v14[1] = (double)v19 * 0.0039215689;
        v19 = (unsigned __int8)*(_DWORD *)v11;
        v14[2] = (double)v19 * 0.0039215689;
        if ( !v22 )
          goto LABEL_43;
        if ( 0.0 == v14[3] )
        {
          *v14 = 0.0;
          v14[1] = 0.0;
          v15 = 0.0;
        }
        else
        {
          if ( v14[3] >= 1.0 )
            goto LABEL_43;
          if ( *v14 >= (double)v14[3] )
            v16 = 1.0;
          else
            v16 = *v14 / v14[3];
          *v14 = v16;
          if ( v14[1] >= (double)v14[3] )
            v17 = 1.0;
          else
            v17 = v14[1] / v14[3];
          v14[1] = v17;
          if ( v14[2] >= (double)v14[3] )
            v15 = 1.0;
          else
            v15 = v14[2] / v14[3];
        }
        v14[2] = v15;
LABEL_43:
        v14 += 4;
        v11 += 4;
        --v21;
      }
      while ( v21 );
      ++v12;
      if ( !--v20 )
      {
        v9 += 4;
        if ( v9 < self[1055] )
        {
          v6 = a3;
          goto LABEL_19;
        }
        return 0;
      }
    }
  }
  return result;
}
