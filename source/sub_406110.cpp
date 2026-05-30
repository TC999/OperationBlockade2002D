//----- (00406110) --------------------------------------------------------
int __cdecl sub_406110(_DWORD *a1, int a2, int a3, float *a4, int a5, char a6)
{
  int v7; // edi
  int v8; // ebx
  int v10; // edi
  double v11; // st7
  float v12; // edx
  double v13; // st7
  int v14; // eax
  double v15; // st7
  int v16; // edi
  double v17; // st7
  double v18; // st7
  float *v19; // eax
  float v21; // [esp-10h] [ebp-58h]
  float v22; // [esp-Ch] [ebp-54h]
  float v23; // [esp-8h] [ebp-50h]
  float v24; // [esp-4h] [ebp-4Ch]
  float v25; // [esp+0h] [ebp-48h]
  float v27; // [esp+4h] [ebp-44h]
  int v28; // [esp+18h] [ebp-30h]
  float v29; // [esp+1Ch] [ebp-2Ch] BYREF
  float v30; // [esp+20h] [ebp-28h]
  float v31; // [esp+24h] [ebp-24h]
  float v32; // [esp+28h] [ebp-20h] BYREF
  float v33; // [esp+2Ch] [ebp-1Ch]
  float v34; // [esp+30h] [ebp-18h]
  float v35; // [esp+34h] [ebp-14h] BYREF
  float v36; // [esp+38h] [ebp-10h]
  float v37; // [esp+3Ch] [ebp-Ch]
  float v38; // [esp+40h] [ebp-8h] BYREF
  float v39; // [esp+44h] [ebp-4h]
  float retaddr; // [esp+48h] [ebp+0h]
  int v41; // [esp+50h] [ebp+8h]
  int v42; // [esp+58h] [ebp+10h]

  v7 = 0;
  v8 = a1[1] + 172 * a3;
  if ( !*(_BYTE *)(v8 + 81) )
    return 0;
  if ( a4 )
    (*(void (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, a4 + 4);
  if ( byte_4F5AF8 )
    v7 = sub_41F3D0(
           *(float *)(v8 + 60),
           *(float *)(v8 + 64),
           *(_DWORD *)(v8 + 68),
           *(float *)(v8 + 72),
           200,
           200,
           200,
           255);
  v10 = (*(int (__cdecl **)(_DWORD *, int, float *, int))(*a1 + 4))(a1, v8, a4, a2) + v7;
  v41 = v10;
  if ( a6 )
  {
    if ( byte_4A4DB0 )
    {
      if ( !*(_BYTE *)(v8 + 57) )
      {
        v11 = *a4 - a4[3];
        v12 = a4[2];
        v39 = a4[1];
        v35 = *a4;
        v38 = v11;
        v13 = v39 - a4[3];
        v36 = v39;
        v37 = v12;
        v14 = 0;
        v39 = v13;
        v15 = v12 - a4[3];
        v32 = 0.0;
        v33 = 0.0;
        v34 = 0.0;
        v29 = 0.0;
        v30 = 0.0;
        v31 = 0.0;
        retaddr = v15;
        v42 = 0;
        v35 = v35 + a4[3];
        v36 = v36 + a4[3];
        v37 = v12 + a4[3];
        if ( v28 > 0 )
        {
          do
          {
            v16 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 136) + 4 * v14);
            if ( *(_BYTE *)(v16 + 32) )
            {
              if ( *(float *)(v16 + 28) > 0.0 )
              {
                v32 = *(float *)(v16 + 4);
                v33 = *(float *)(v16 + 8);
                v34 = *(float *)(v16 + 12);
                v32 = v32 - *(float *)(v16 + 16);
                v17 = v33 - *(float *)(v16 + 16);
                v34 = -3.4028235e38;
                v33 = v17;
                v29 = *(float *)(v16 + 4);
                v30 = *(float *)(v16 + 8);
                v31 = *(float *)(v16 + 12);
                v29 = v29 + *(float *)(v16 + 16);
                v18 = v30 + *(float *)(v16 + 16);
                v31 = 3.4028235e38;
                v30 = v18;
                if ( (unsigned __int8)sub_40CC10(&v38, &v35, &v32, &v29) )
                {
                  v27 = v31;
                  v25 = v30;
                  v24 = v29;
                  v23 = v34;
                  v22 = v33;
                  v21 = v32;
                  v19 = (float *)sub_408F30(dword_520970);
                  if ( sub_402170(v19, v21, v22, v23, v24, v25, v27) )
                  {
                    sub_405E20(v8, v16, (int)a4, 0);
                    v41 += sub_406000((_DWORD *)v8, (int)a4);
                  }
                }
              }
            }
            v14 = ++v42;
          }
          while ( v42 < v28 );
          v10 = v41;
        }
      }
    }
  }
  (*(void (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, 0, 11);
  (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, 0, 24, 0);
  return v10;
}
