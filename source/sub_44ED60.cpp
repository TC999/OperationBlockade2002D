//----- (0044ED60) --------------------------------------------------------
unsigned int __thiscall sub_44ED60(_DWORD *this, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // eax
  char *v10; // ebp
  char *i; // esi
  char *j; // esi
  char *v13; // esi
  char *v14; // eax
  char *v15; // ebp
  int v16; // ebp
  int k; // esi
  unsigned int result; // eax
  int v19; // ecx
  int v20; // kr00_4
  char *v22; // ebx
  int v23; // esi
  bool v24; // zf
  unsigned int v25; // edi
  unsigned int v26; // eax
  unsigned int v28; // ebx
  _DWORD *v29; // esi
  int v30; // edx
  char *v31; // edi
  int v32; // ebx
  _DWORD *v33; // eax
  char *v34; // ebx
  _DWORD *v35; // edi
  _DWORD *v36; // esi
  int v37; // ecx
  _DWORD *v38; // esi
  _DWORD *v39; // [esp+10h] [ebp-Ch]
  unsigned int v40; // [esp+14h] [ebp-8h]
  char *v41; // [esp+18h] [ebp-4h]
  char *v42; // [esp+20h] [ebp+4h]
  int v43; // [esp+20h] [ebp+4h]
  char *v44; // [esp+24h] [ebp+8h]
  _DWORD *v45; // [esp+24h] [ebp+8h]
  char *v46; // [esp+24h] [ebp+8h]
  _DWORD *v47; // [esp+28h] [ebp+Ch]

  v4 = (char *)this[2];
  v5 = a3;
  v39 = this;
  if ( (this[3] - (int)v4) / 40 >= a3 )
  {
    result = (unsigned int)((unsigned __int64)(1717986919LL * (v4 - a2)) >> 32) >> 31;
    if ( (v4 - a2) / 40 >= a3 )
    {
      if ( !a3 )
        return result;
      v30 = 40 * a3;
      v31 = &v4[-40 * a3];
      v32 = this[2];
      v43 = 40 * a3;
      if ( v31 != v4 )
      {
        do
        {
          sub_44F3A0(v32, v31);
          v31 += 40;
          v32 += 40;
        }
        while ( v31 != v4 );
        this = v39;
        v30 = 40 * a3;
      }
      v33 = (_DWORD *)this[2];
      v34 = (char *)v33 - v30;
      if ( a2 != (char *)v33 - v30 )
      {
        v35 = v33 + 4;
        v36 = v34 + 16;
        while ( 1 )
        {
          v37 = *((_DWORD *)v34 - 10);
          v34 -= 40;
          v36 -= 10;
          v45 = v33 - 10;
          v35 -= 10;
          *v45 = v37;
          v45[1] = *((_DWORD *)v34 + 1);
          *(v35 - 2) = *(v36 - 2);
          *(v35 - 1) = *(v36 - 1);
          *v35 = *v36;
          v35[1] = v36[1];
          sub_44F490(v36 + 2);
          if ( v34 == a2 )
            break;
          v33 = v45;
        }
        this = v39;
        v30 = v43;
      }
      result = (unsigned int)&a2[v30];
      v46 = &a2[v30];
      if ( a2 == &a2[v30] )
        goto LABEL_50;
      v38 = a2 + 16;
      do
      {
        *(v38 - 4) = *a4;
        *(v38 - 3) = a4[1];
        *(v38 - 2) = a4[2];
        *(v38 - 1) = a4[3];
        *v38 = a4[4];
        v38[1] = a4[5];
        sub_44F490(a4 + 6);
        result = (unsigned int)v46;
        v38 += 10;
      }
      while ( v38 - 4 != (_DWORD *)v46 );
    }
    else
    {
      v22 = a2;
      v43 = 40 * a3;
      if ( a2 != v4 )
      {
        v44 = &a2[40 * a3];
        do
        {
          sub_44F3A0(v44, v22);
          v22 += 40;
          v44 += 40;
        }
        while ( v22 != v4 );
        this = v39;
      }
      v23 = this[2];
      v25 = v5 - (v23 - (int)a2) / 40;
      v24 = v25 == 0;
      v26 = v25;
      if ( !v24 )
      {
        v28 = v26;
        do
        {
          sub_44F3A0(v23, a4);
          v23 += 40;
          --v28;
        }
        while ( v28 );
        this = v39;
      }
      result = this[2];
      v47 = (_DWORD *)result;
      if ( a2 == (char *)result )
        goto LABEL_49;
      v29 = a2 + 16;
      do
      {
        *(v29 - 4) = *a4;
        *(v29 - 3) = a4[1];
        *(v29 - 2) = a4[2];
        *(v29 - 1) = a4[3];
        *v29 = a4[4];
        v29[1] = a4[5];
        sub_44F490(a4 + 6);
        result = (unsigned int)v47;
        v29 += 10;
      }
      while ( v29 - 4 != v47 );
    }
    this = v39;
LABEL_49:
    v30 = v43;
LABEL_50:
    this[2] += v30;
    return result;
  }
  v6 = this[1];
  if ( !v6 || (v7 = (int)&v4[-v6] / 40, a3 >= v7) )
    v7 = a3;
  if ( v6 )
    v8 = (int)&v4[-v6] / 40;
  else
    v8 = 0;
  v9 = v8 + v7;
  v40 = v8 + v7;
  if ( (int)(v8 + v7) < 0 )
    v9 = 0;
  v41 = (char *)operator new(40 * v9);
  v10 = v41;
  for ( i = (char *)v39[1]; i != a2; v10 += 40 )
  {
    sub_44F3A0(v10, i);
    i += 40;
  }
  for ( j = v10; a3; --a3 )
  {
    sub_44F3A0(j, a4);
    j += 40;
  }
  v13 = a2;
  v14 = &v10[40 * v5];
  v15 = (char *)v39[2];
  if ( a2 != v15 )
  {
    v42 = v14;
    do
    {
      sub_44F3A0(v42, v13);
      v13 += 40;
      v42 += 40;
    }
    while ( v13 != v15 );
  }
  v16 = v39[2];
  for ( k = v39[1]; k != v16; k += 40 )
    sub_44C220(k);
  sub_4885A6((LPVOID)v39[1]);
  result = v39[1];
  v39[3] = &v41[40 * v40];
  if ( result )
  {
    v19 = v39[2];
    v39[1] = v41;
    v20 = v19 - result;
    result = (unsigned int)((unsigned __int64)(1717986919LL * (int)(v19 - result)) >> 32) >> 31;
    v5 += v20 / 40;
  }
  else
  {
    v39[1] = v41;
  }
  v39[2] = &v41[40 * v5];
  return result;
}
