//----- (004122F0) --------------------------------------------------------
int __thiscall sub_4122F0(int this, int a2)
{
  double v3; // st7
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  void *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // ebp
  float **v21; // edx
  float *v22; // ebx
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // ecx
  double v27; // st7
  int v28; // eax
  int **v29; // ebx
  int v30; // eax
  int *v31; // edi
  _DWORD *v32; // edi
  int v33; // edx
  int v34; // ecx
  double v35; // st7
  int v36; // edx
  int v37; // eax
  int *v38; // ecx
  int v39; // eax
  int v41; // [esp+0h] [ebp-4Ch]
  int v42; // [esp+Ch] [ebp-40h]
  int v43; // [esp+20h] [ebp-2Ch]
  int v44; // [esp+24h] [ebp-28h]
  int v45; // [esp+28h] [ebp-24h]
  int v46; // [esp+2Ch] [ebp-20h]
  int v47; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v48[2]; // [esp+34h] [ebp-18h] BYREF
  int *v49[4]; // [esp+3Ch] [ebp-10h] BYREF

  v3 = *(float *)(this + 948) - *(float *)(dword_520970 + 68);
  *(float *)(this + 948) = v3;
  if ( v3 < 0.0 )
  {
    *(_DWORD *)(this + 948) = 1065353216;
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 960));
    v4 = *(_DWORD *)(this + 956);
    v5 = 0;
    if ( v4 )
    {
      do
      {
        v6 = *(_DWORD *)(v4 + 276);
        v7 = *(_DWORD *)(v4 + 272) + 1;
        *(_DWORD *)(v4 + 272) = v7;
        if ( v7 <= 3 )
        {
          v5 = v4;
          v4 = v6;
        }
        else
        {
          sub_4885A6(*(LPVOID *)(v4 + 260));
          v8 = *(_DWORD *)(v4 + 264);
          if ( v8 )
          {
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(v4 + 264));
            *(_DWORD *)(v4 + 264) = 0;
          }
          v9 = *(_DWORD *)(v4 + 268);
          if ( v9 )
          {
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 8))(*(_DWORD *)(v4 + 268));
            *(_DWORD *)(v4 + 268) = 0;
          }
          sub_4885A6((LPVOID)v4);
          v4 = v6;
          if ( !v5 )
            *(_DWORD *)(this + 956) = v6;
        }
      }
      while ( v6 );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 960));
  }
  while ( 1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 44));
    v10 = *(int **)(this + 32);
    if ( !v10 )
      break;
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0;
    v10[1] = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = v10;
    *(_DWORD *)(this + 32) = v12;
    if ( !v12 )
      *(_DWORD *)(this + 36) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 44));
    if ( !v11 )
      goto LABEL_22;
    v13 = *(_DWORD *)(this + 76);
    v14 = *(_DWORD *)(this + 72) + 1;
    *(_DWORD *)(this + 72) = v14;
    if ( v14 > v13 )
    {
      v15 = *(void **)(this + 68);
      v16 = v13 + 8;
      *(_DWORD *)(this + 76) = v16;
      v17 = sub_488DD7(v15, 4 * v16);
      if ( v17 )
      {
        v18 = *(_DWORD *)(this + 72);
        v19 = *(_DWORD *)(this + 76) - v18;
        *(_DWORD *)(this + 68) = v17;
        memset((void *)(v17 + 4 * v18), 0, 4 * v19);
      }
    }
    *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * *(_DWORD *)(this + 72) - 4) = v11;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 44));
LABEL_22:
  v20 = 0;
  while ( v20 < *(_DWORD *)(this + 72) )
  {
    v21 = *(float ***)(this + 68);
    v22 = v21[v20];
    if ( *(float *)(dword_520970 + 76) < (double)*v22 )
    {
      ++v20;
    }
    else
    {
      v23 = *(_DWORD *)(this + 72);
      v24 = 0;
      if ( v23 > 0 )
      {
        v25 = *(_DWORD *)(this + 68);
        while ( *v21 != v22 )
        {
          ++v24;
          ++v21;
          if ( v24 >= v23 )
            goto LABEL_28;
        }
        v26 = v23 - 1;
        *(_DWORD *)(this + 72) = v26;
        if ( v24 != v26 )
        {
          memcpy((void *)(v25 + 4 * v24), (const void *)(v25 + 4 * v24 + 4), 4 * (v26 + 0x3FFFFFFF * v24));
          *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * *(_DWORD *)(this + 72)) = 0;
        }
      }
LABEL_28:
      sub_412620(v22);
    }
  }
  v27 = *(float *)(this + 952) - *(float *)(dword_520970 + 68);
  *(float *)(this + 952) = v27;
  if ( v27 < 0.0 )
  {
    *(_DWORD *)(this + 952) = 1045220557;
    v28 = sub_4118C0(this, v49, 4);
    v46 = v28;
    if ( v28 > 0 )
    {
      v29 = v49;
      v45 = v28;
      do
      {
        v30 = 0;
        v44 = 0;
        do
        {
          v31 = *v29;
          if ( v30 )
            v32 = v31 + 2073;
          else
            v32 = v31 + 2069;
          v33 = 0;
          v43 = 0;
          if ( (int)v32[1] > 0 )
          {
            do
            {
              v34 = *(_DWORD *)(*v32 + 4 * v33);
              v35 = *(float *)(v34 + 4) - *(float *)(dword_520970 + 68);
              *(float *)(v34 + 4) = v35;
              if ( v35 < 0.0 )
              {
                v36 = *(_DWORD *)(v34 + 12);
                v37 = *(_DWORD *)(v34 + 8);
                v42 = *(_DWORD *)(v34 + 16);
                *(_DWORD *)(v34 + 4) = 1056964608;
                v41 = *(_DWORD *)(v34 + 20);
                v38 = *v29;
                v48[1] = v37;
                v39 = *(_DWORD *)(this + 24);
                v48[0] = v36;
                (*(void (__stdcall **)(int, int, _DWORD *, int, int, _DWORD, int *, int))(*(_DWORD *)v39 + 28))(
                  v39,
                  v38[2],
                  v48,
                  1,
                  v41,
                  0,
                  &v47,
                  v42);
                v33 = v43;
              }
              v43 = ++v33;
            }
            while ( v33 < v32[1] );
            v30 = v44;
          }
          v44 = ++v30;
        }
        while ( v30 < 2 );
        ++v29;
        --v45;
      }
      while ( v45 );
      v28 = v46;
    }
    sub_411920(this, v49, v28);
  }
  return sub_428620(a2);
}
