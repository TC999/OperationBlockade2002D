//----- (0046DAFE) --------------------------------------------------------
unsigned int *__cdecl sub_46DAFE(unsigned int a1, signed int a2, int a3)
{
  unsigned int v3; // esi
  double v4; // st7
  double v5; // st6
  __int64 v6; // rax
  unsigned int *v7; // edi
  unsigned int v8; // esi
  unsigned int *v9; // eax
  double v10; // st7
  double X; // st7
  int v12; // ecx
  double v13; // st7
  int v14; // ebx
  float *v15; // edi
  double v16; // st7
  float *v17; // edi
  unsigned int *v19; // [esp+14h] [ebp-50h]
  unsigned int v20; // [esp+18h] [ebp-4Ch]
  float v21; // [esp+1Ch] [ebp-48h]
  float v22; // [esp+20h] [ebp-44h]
  float v23; // [esp+24h] [ebp-40h]
  unsigned int *v24; // [esp+28h] [ebp-3Ch]
  int v25; // [esp+2Ch] [ebp-38h]
  float v26; // [esp+30h] [ebp-34h]
  float v27; // [esp+34h] [ebp-30h]
  float v28; // [esp+38h] [ebp-2Ch]
  unsigned int v29; // [esp+3Ch] [ebp-28h]
  int v30; // [esp+40h] [ebp-24h]
  int v31; // [esp+44h] [ebp-20h]
  float v32; // [esp+48h] [ebp-1Ch]
  float v33; // [esp+4Ch] [ebp-18h]
  unsigned int i; // [esp+50h] [ebp-14h]
  float v35; // [esp+54h] [ebp-10h]
  unsigned int v36; // [esp+58h] [ebp-Ch]
  float v37; // [esp+5Ch] [ebp-8h]
  float v38; // [esp+60h] [ebp-4h]

  v3 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v28 = (float)(unsigned int)a2;
      v4 = (double)a1;
      v22 = v4;
      v5 = v28 / v4;
      v36 = 16;
      v26 = v5;
      do
      {
        v6 = (__int64)(((double)v3 - 0.5) * v5 + v5 - ((double)v3 - 0.5) * v5 + (double)(a3 != 0) + 1.0);
        ++v3;
        v36 += 16 * v6 + 12;
      }
      while ( v3 < a1 );
      v7 = (unsigned int *)operator new(v36);
      v24 = v7;
      if ( v7 )
      {
        v30 = 0;
        v29 = 0;
        v38 = 0.0;
        v8 = 4;
        while ( 1 )
        {
          v9 = &v7[v8 / 4];
          v20 = v8;
          v8 += 4;
          v19 = v9;
          if ( v8 > v36
            && sub_46D957(
                 "d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\tex\\cd3dxblt.cpp",
                 1034,
                 "uSize <= uSizeMax") )
          {
            DebugBreak();
          }
          for ( i = 0; i < 2; ++i )
          {
            v23 = (float)v29;
            v10 = (double)i + v23 - 0.5;
            v33 = v10;
            X = v10 * v26;
            v27 = X;
            v37 = v26 + X;
            if ( !a3 )
            {
              if ( X < 0.0 )
              {
                X = 0.0;
                v27 = 0.0;
              }
              if ( v37 > (double)v28 )
                v37 = (float)(unsigned int)a2;
            }
            v12 = (__int64)floor(X);
            v31 = v12;
            v13 = (double)v12;
            if ( v13 < v37 )
            {
              v14 = v12 - a2;
              v25 = v12 - a2;
              while ( 1 )
              {
                v35 = v13;
                v32 = v13 + 1.0;
                if ( v12 >= 0 )
                {
                  if ( v12 < a2 )
                    v14 = v12;
                }
                else
                {
                  v14 = v12 + a2;
                }
                if ( v14 != v30 )
                {
                  if ( v38 > 0.0000099999997 )
                  {
                    v15 = (float *)&v7[v8 / 4];
                    v8 += 8;
                    if ( v8 > v36
                      && sub_46D957(
                           "d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\tex\\cd3dxblt.cpp",
                           1089,
                           "uSize <= uSizeMax") )
                    {
                      DebugBreak();
                    }
                    v12 = v31;
                    *(_DWORD *)v15 = v30;
                    v15[1] = v38;
                    v7 = v24;
                  }
                  v30 = v14;
                  v38 = 0.0;
                }
                if ( v35 < (double)v27 )
                  v35 = v27;
                if ( v32 > (double)v37 )
                  v32 = v37;
                if ( a3 )
                  break;
                if ( v33 >= 0.0 )
                {
                  if ( v33 + 1.0 < v22 )
                    break;
                  v16 = 0.0;
                }
                else
                {
                  v16 = 1.0;
                }
LABEL_39:
                if ( i )
                  v16 = 1.0 - v16;
                v31 = ++v12;
                v14 = ++v25;
                v38 = (v32 - v35) * v16 + v38;
                v13 = (double)v12;
                if ( v13 >= v37 )
                  goto LABEL_42;
              }
              v21 = 0.5 / v5;
              v16 = (v32 + v35) * v21 - v33;
              goto LABEL_39;
            }
LABEL_42:
            ;
          }
          if ( v38 > 0.0000099999997 )
          {
            v17 = (float *)&v7[v8 / 4];
            v8 += 8;
            if ( v8 > v36 )
            {
              if ( sub_46D957(
                     "d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\tex\\cd3dxblt.cpp",
                     1136,
                     "uSize <= uSizeMax") )
              {
                DebugBreak();
              }
            }
            *(_DWORD *)v17 = v30;
            v17[1] = v38;
            v7 = v24;
          }
          v38 = 0.0;
          ++v29;
          *v19 = v8 - v20;
          if ( v29 >= a1 )
          {
            *v7 = v8;
            return v7;
          }
        }
      }
    }
  }
  return 0;
}
