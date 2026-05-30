//----- (0046CB5B) --------------------------------------------------------
int __cdecl sub_46CB5B(
        int a1,
        char a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        int a7,
        unsigned int *a8,
        unsigned int a9,
        int a10)
{
  _DWORD *v12; // eax
  unsigned int v13; // edi
  unsigned int *v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ebx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // eax
  bool v23; // cc
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int i; // eax
  unsigned int v27; // edx
  unsigned int j; // eax
  unsigned int v29; // eax
  unsigned int k; // ecx
  unsigned int v31; // eax
  char v32; // [esp+0h] [ebp-130h]
  _DWORD v33[15]; // [esp+8h] [ebp-128h] BYREF
  int v34; // [esp+44h] [ebp-ECh]
  unsigned int v35; // [esp+60h] [ebp-D0h]
  unsigned int v36; // [esp+64h] [ebp-CCh]
  unsigned int v37; // [esp+68h] [ebp-C8h]
  int v38; // [esp+70h] [ebp-C0h]
  _DWORD v39[10]; // [esp+DCh] [ebp-54h] BYREF
  char v40[12]; // [esp+104h] [ebp-2Ch] BYREF
  int v41; // [esp+110h] [ebp-20h]
  _DWORD *v42; // [esp+114h] [ebp-1Ch]
  int v43; // [esp+118h] [ebp-18h]
  int v44; // [esp+11Ch] [ebp-14h]
  int v45; // [esp+120h] [ebp-10h]
  unsigned int v46; // [esp+124h] [ebp-Ch]
  unsigned int v47; // [esp+128h] [ebp-8h]
  unsigned int v48; // [esp+12Ch] [ebp-4h] BYREF

  if ( !a1 )
  {
    sub_46D8FD(0, "pDevice pointer is invalid", v32);
    return -2005530516;
  }
  if ( a7 == -1 )
    a7 = 0;
  if ( a7 != (a7 & 3) || a10 == 2 && (a7 & 3) != 0 )
  {
    sub_46D8FD(0, "Usage parameter is invalid", a2);
    return -2005530516;
  }
  if ( a9 > 2 )
  {
    sub_46D8FD(0, "Pool parameter is invalid", a2);
    return -2005530516;
  }
  (*(void (__stdcall **)(int, unsigned int *, char))(*(_DWORD *)a1 + 24))(a1, &v48, a2);
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 28))(a1, v33);
  (*(void (__stdcall **)(int, char *))(*(_DWORD *)a1 + 32))(a1, v40);
  v43 = 3;
  v44 = 5;
  v45 = 4;
  if ( a8 )
    v47 = *a8;
  else
    v47 = 0;
  v46 = 0;
  v12 = sub_46CAA2(v47);
  v39[2] = 0;
  v42 = v12;
  v13 = -1;
  v14 = (unsigned int *)&unk_4AE9F0;
  if ( off_4AEFB8 > &unk_4AE9F0 )
  {
    do
    {
      if ( v14[9]
        && (*(int (__stdcall **)(unsigned int, _DWORD, _DWORD, int, int, _DWORD, unsigned int))(*(_DWORD *)v48 + 40))(
             v48,
             v33[1],
             v33[0],
             v41,
             a7,
             *(&v43 + a10),
             *v14) >= 0 )
      {
        v15 = *v14;
        if ( *v14 == v47 )
        {
          v46 = v47;
          break;
        }
        if ( v14[8] )
        {
          v16 = sub_46CAC9((int)v42, v14);
          if ( v16 < v13 || v16 == v13 && v14[2] < v39[2] )
          {
            v46 = v15;
            qmemcpy(v39, v14, sizeof(v39));
            v13 = v16;
          }
        }
      }
      v14 += 10;
    }
    while ( v14 < (unsigned int *)off_4AEFB8 );
  }
  (*(void (__cdecl **)(unsigned int))(*(_DWORD *)v48 + 8))(v48);
  if ( !v46 )
    return -2005530518;
  if ( a3 )
    v17 = *a3;
  else
    v17 = -1;
  if ( a4 )
    v18 = *a4;
  else
    v18 = -1;
  if ( a5 )
    v48 = *a5;
  else
    v48 = -1;
  if ( v17 == -1 )
  {
    if ( v18 == -1 )
    {
      v18 = 256;
      v17 = 256;
      goto LABEL_48;
    }
    v17 = v18;
  }
  else if ( v18 == -1 )
  {
    v18 = v17;
  }
  if ( !v17 )
    v17 = 1;
  if ( !v18 )
    v18 = 1;
LABEL_48:
  if ( a10 == 1 )
  {
    if ( v17 > v18 )
      v18 = v17;
    v17 = v18;
  }
  if ( v48 == -1 || !v48 )
    v48 = 1;
  if ( a10 == 2 )
  {
    v19 = v37;
    if ( v48 > v37 )
      v48 = v37;
    if ( v17 > v37 )
      v17 = v37;
  }
  else
  {
    if ( v17 > v35 )
      v17 = v35;
    if ( v18 > v36 )
      v18 = v36;
    if ( a10 )
      goto LABEL_74;
    v20 = (v34 & 0x20) != 0 ? 1 : v38;
    if ( !v20 )
      goto LABEL_74;
    if ( v17 > v18 * v20 )
      v17 = v18 * v20;
    v19 = v17 * v20;
  }
  if ( v18 > v19 )
    v18 = v19;
LABEL_74:
  v43 = 2;
  v44 = 0x20000;
  v45 = 0x40000;
  v21 = 1;
  if ( (v34 & *(&v43 + a10)) != 0 )
  {
    v22 = v17;
    v23 = v17 <= 1;
    v17 = 1;
    if ( !v23 )
    {
      do
        v17 *= 2;
      while ( v17 < v22 );
    }
    v24 = v18;
    v23 = v18 <= 1;
    v18 = 1;
    if ( !v23 )
    {
      do
        v18 *= 2;
      while ( v18 < v24 );
    }
    v25 = v48;
    v23 = v48 <= 1;
    v48 = 1;
    if ( !v23 )
    {
      do
        v48 *= 2;
      while ( v48 < v25 );
    }
  }
  if ( v46 == 827611204 || v46 == 844388420 || v46 == 861165636 || v46 == 877942852 || v46 == 894720068 )
  {
    v17 = (v17 + 3) & 0xFFFFFFFC;
    v18 = (v18 + 3) & 0xFFFFFFFC;
  }
  v43 = 0x4000;
  v44 = 0x10000;
  v45 = 0x8000;
  if ( a6 )
    v47 = *a6;
  else
    v47 = -1;
  if ( (v34 & *(&v43 + a10)) == 0 || ((v17 - 1) & v17) != 0 || ((v18 - 1) & v18) != 0 || ((v48 - 1) & v48) != 0 )
  {
    v47 = 1;
  }
  else
  {
    for ( i = v17; i; ++v21 )
    {
      if ( (i & 1) != 0 )
        break;
      i >>= 1;
    }
    v27 = 1;
    for ( j = v18; j; ++v27 )
    {
      if ( (j & 1) != 0 )
        break;
      j >>= 1;
    }
    v29 = v48;
    for ( k = 1; v29; ++k )
    {
      if ( (v29 & 1) != 0 )
        break;
      v29 >>= 1;
    }
    v31 = v21;
    if ( v21 <= v27 )
      v31 = v27;
    if ( a10 == 2 && k > v31 )
      v31 = k;
    if ( v47 > v31 || !v47 )
      v47 = v31;
  }
  if ( a3 )
    *a3 = v17;
  if ( a4 )
    *a4 = v18;
  if ( a5 )
    *a5 = v48;
  if ( a6 )
    *a6 = v47;
  if ( a8 )
    *a8 = v46;
  return 0;
}
