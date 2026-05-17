//----- (004066C0) --------------------------------------------------------
float *__userpurge sub_4066C0@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<esi>,
        _DWORD *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float *result; // eax
  int v11; // ebx
  char *v12; // esi
  float *v13; // eax
  int v14; // edx
  int v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  float v26[2]; // [esp+18h] [ebp-5Ch] BYREF
  float v27; // [esp+20h] [ebp-54h] BYREF
  float v28; // [esp+24h] [ebp-50h]
  float v29; // [esp+28h] [ebp-4Ch]
  int v30; // [esp+2Ch] [ebp-48h] BYREF
  int v31; // [esp+30h] [ebp-44h]
  int v32; // [esp+34h] [ebp-40h] BYREF
  char v33[60]; // [esp+38h] [ebp-3Ch] BYREF
  float *v34; // [esp+8Ch] [ebp+18h]

  *a3 = 2139095039;
  result = a6;
  v11 = 0;
  *a4 = -3.4028235e38;
  *a5 = 3.4028235e38;
  *a6 = -3.4028235e38;
  *a7 = 3.4028235e38;
  *a8 = -3.4028235e38;
  if ( (int)a1[2] > 0 )
  {
    v34 = 0;
    do
    {
      v12 = (char *)v34 + a1[1];
      if ( *((int *)v12 + 10) > 0 )
      {
        sub_406620(a1, v11, &v32, v26, 0.0, 0);
        v31 = 0;
        LODWORD(v29) = v12 + 84;
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD, int))(**((_DWORD **)v12 + 9) + 44))(
          *((_DWORD *)v12 + 9),
          0,
          0,
          &v30,
          0,
          a2);
        v13 = (float *)v31;
        v32 = v31;
        v14 = *((_DWORD *)v12 + 10);
        v15 = v14 - 1;
        v27 = 0.0;
        v28 = 0.0;
        v29 = 0.0;
        if ( v14 )
        {
          LODWORD(v26[0]) = v14;
          do
          {
            v27 = *v13;
            v28 = v13[1];
            v29 = v13[2];
            sub_46C5C5(&v27, &v27, v33);
            if ( *a4 >= (double)v27 )
              v16 = v27;
            else
              v16 = *a4;
            *a4 = v16;
            if ( *a5 <= (double)v27 )
              v17 = v27;
            else
              v17 = *a5;
            *a5 = v17;
            if ( *a6 >= (double)v28 )
              v18 = v28;
            else
              v18 = *a6;
            *a6 = v18;
            if ( *a7 <= (double)v28 )
              v19 = v28;
            else
              v19 = *a7;
            *a7 = v19;
            if ( *v34 >= (double)v29 )
              v20 = v29;
            else
              v20 = *v34;
            *v34 = v20;
            if ( *a8 <= (double)v29 )
              v21 = v29;
            else
              v21 = *a8;
            v22 = v30;
            v23 = v32;
            *a8 = v21;
            v13 = (float *)(*(_DWORD *)(v22 + 84) + v23);
            v15 = LODWORD(v26[0]) - 1;
            v24 = LODWORD(v26[0]) == 1;
            v32 = (int)v13;
            --LODWORD(v26[0]);
          }
          while ( !v24 );
        }
        a2 = *((_DWORD *)v12 + 9);
        (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 48))(v15);
      }
      result = (float *)a1[2];
      ++v11;
      v34 += 43;
    }
    while ( v11 < (int)result );
  }
  return result;
}
