//----- (0047264E) --------------------------------------------------------
int __thiscall sub_47264E(int *this, _DWORD *a2, unsigned int a3)
{
  int *v3; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  void *v9; // eax
  int v10; // eax
  int *v11; // eax
  void *v12; // eax
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // [esp+8h] [ebp-34h]
  int v17; // [esp+Ch] [ebp-30h]
  int v18; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-28h]
  unsigned int v21; // [esp+1Ch] [ebp-20h]
  unsigned int v22; // [esp+20h] [ebp-1Ch]
  _DWORD *v23; // [esp+24h] [ebp-18h]
  int *v24; // [esp+28h] [ebp-14h]
  int *v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+30h] [ebp-Ch]
  int v27; // [esp+34h] [ebp-8h]
  int v28; // [esp+44h] [ebp+8h]
  unsigned int v29; // [esp+48h] [ebp+Ch]
  unsigned int v30; // [esp+48h] [ebp+Ch]

  v3 = this;
  if ( a3 < 4 )
    return -2147467259;
  if ( *a2 != 542327876 )
    return -2147467259;
  v29 = a3 - 4;
  if ( v29 < 0x7C )
    return -2147467259;
  v30 = v29 - 124;
  v23 = a2 + 32;
  this[3] = 0;
  this[4] = 0;
  this[5] = a2[4];
  this[6] = a2[3];
  v5 = a2[28] & 0xFC00;
  if ( v5 == 64512 )
  {
    v21 = 6;
  }
  else
  {
    if ( v5 )
    {
      sub_46D8FD(0, "LoadDDS: Partial cubemaps not supported.");
      return -2147467259;
    }
    v21 = 1;
  }
  v22 = a2[7];
  if ( !v22 )
    v22 = 1;
  v6 = a2[21];
  v7 = 827611204;
  if ( v6 == 827611204
    || (v7 = 844388420, v6 == 844388420)
    || (v7 = 861165636, v6 == 861165636)
    || (v7 = 877942852, v6 == 877942852)
    || (v7 = 894720068, v6 == 894720068) )
  {
    v28 = v7;
LABEL_38:
    v26 = 0;
    while ( 1 )
    {
      v16 = v3[3];
      v17 = v3[4];
      v18 = v3[5];
      v19 = v3[6];
      if ( v26 )
      {
        v9 = operator new(0x30u);
        if ( v9 )
          v10 = sub_470F78(v9);
        else
          v10 = 0;
        if ( !v10 )
          return -2147024882;
        v3 = this;
        v25[11] = v10;
        v25 = (int *)v10;
      }
      else
      {
        v25 = v3;
      }
      v27 = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( v27 )
          {
            v12 = operator new(0x30u);
            if ( v12 )
              v11 = (int *)sub_470F78(v12);
            else
              v11 = 0;
            if ( !v11 )
              return -2147024882;
            v3 = this;
            v24[10] = (int)v11;
            v24 = v11;
          }
          else
          {
            v11 = v25;
            v24 = v25;
          }
          if ( v28 >= 844388420 )
            break;
          if ( v28 <= 22 )
          {
            v13 = 4 * v18;
          }
          else
          {
            if ( v28 > 26 )
            {
              v13 = 8 * ((v18 + 3) >> 2);
LABEL_62:
              v14 = (v19 + 3) >> 2;
              goto LABEL_63;
            }
            v13 = 2 * v18;
          }
          v14 = v19;
LABEL_63:
          v15 = v13 * v14;
          v11[3] = v16;
          *v11 = v28;
          v11[4] = v17;
          v11[1] = (int)v23;
          v11[5] = v18;
          v11[2] = v13;
          v11[6] = v19;
          v11[7] = 0;
          v11[8] = 0;
          v11[9] = 0;
          if ( v30 < v15 )
            return -2147467259;
          v23 = (_DWORD *)((char *)v23 + v15);
          v30 -= v15;
          if ( v18 == 1 )
            v18 = 1;
          else
            v18 >>= 1;
          if ( v19 == 1 )
            v19 = 1;
          else
            v19 >>= 1;
          if ( ++v27 >= v22 )
            goto LABEL_71;
        }
        v13 = 16 * ((v18 + 3) >> 2);
        goto LABEL_62;
      }
LABEL_71:
      if ( ++v26 >= v21 )
        return 0;
    }
  }
  v8 = a2[20];
  if ( v8 == 65 && a2[22] == 32 && a2[26] == -16777216 )
  {
    v28 = 21;
    goto LABEL_38;
  }
  if ( v8 == 64 && a2[22] == 32 )
  {
    v28 = 22;
    goto LABEL_38;
  }
  if ( v8 == 64 )
  {
    if ( a2[22] == 16 && a2[24] == 2016 )
    {
      v28 = 23;
      goto LABEL_38;
    }
    if ( a2[22] == 16 && a2[24] == 992 )
    {
      v28 = 24;
      goto LABEL_38;
    }
  }
  if ( v8 == 65 )
  {
    if ( a2[22] == 16 && a2[26] == 0x8000 )
    {
      v28 = 25;
      goto LABEL_38;
    }
    if ( a2[22] == 16 && a2[26] == 61440 )
    {
      v28 = 26;
      goto LABEL_38;
    }
  }
  sub_46D8FD(0, "LoadDDS: Unsupported pixel format");
  return -2147467259;
}
