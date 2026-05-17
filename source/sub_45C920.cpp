//----- (0045C920) --------------------------------------------------------
unsigned int __thiscall sub_45C920(_DWORD *this, char *a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // ebx
  char *v5; // ecx
  unsigned int v6; // esi
  int v7; // edi
  unsigned int v8; // ebp
  int v9; // edx
  unsigned int v10; // eax
  _DWORD *v12; // edx
  char *k; // eax
  _DWORD *v14; // eax
  char *v15; // ebx
  _DWORD *v16; // edi
  char *v17; // eax
  unsigned int result; // eax
  int v19; // ecx
  int v20; // kr00_4
  int v22; // ebp
  char *v23; // edx
  char *v24; // eax
  char *v25; // ebx
  unsigned int j; // esi
  char *v27; // eax
  char *v28; // ecx
  char *v29; // edi
  int v30; // esi
  char *v31; // eax
  char *i; // edx
  _DWORD *v33; // ecx
  char *v34; // eax
  _DWORD *v35; // ebx
  _DWORD *v36; // [esp+10h] [ebp-8h]
  _DWORD *v37; // [esp+14h] [ebp-4h]
  unsigned int v38; // [esp+1Ch] [ebp+4h]
  int v39; // [esp+1Ch] [ebp+4h]
  unsigned int v40; // [esp+20h] [ebp+8h]
  char *v41; // [esp+20h] [ebp+8h]

  v4 = this;
  v5 = (char *)this[2];
  v6 = a3;
  v36 = v4;
  if ( (v4[3] - (int)v5) / 12 >= a3 )
  {
    result = (unsigned int)((unsigned __int64)(715827883LL * (v5 - a2)) >> 32) >> 31;
    if ( (v5 - a2) / 12 >= a3 )
    {
      if ( a3 )
      {
        v30 = 12 * a3;
        v31 = &v5[-12 * a3];
        for ( i = v5; v31 != v5; i += 12 )
        {
          if ( i )
          {
            *(_DWORD *)i = *(_DWORD *)v31;
            *((_DWORD *)i + 1) = *((_DWORD *)v31 + 1);
            *((_DWORD *)i + 2) = *((_DWORD *)v31 + 2);
            v30 = 12 * a3;
            v4 = v36;
          }
          v31 += 12;
        }
        v33 = (_DWORD *)v4[2];
        v34 = (char *)&v33[v30 / 0xFFFFFFFC];
        if ( a2 != (char *)&v33[v30 / 0xFFFFFFFC] )
        {
          do
          {
            v34 -= 12;
            v33 -= 3;
            *v33 = *(_DWORD *)v34;
            v33[1] = *((_DWORD *)v34 + 1);
            v33[2] = *((_DWORD *)v34 + 2);
          }
          while ( v34 != a2 );
          v4 = v36;
        }
        result = (unsigned int)a2;
        if ( a2 != &a2[v30] )
        {
          do
          {
            v35 = (_DWORD *)result;
            result += 12;
            *v35 = *a4;
            v35[1] = a4[1];
            v35[2] = a4[2];
          }
          while ( (char *)result != &a2[v30] );
          v4 = v36;
        }
        v4[2] += v30;
      }
    }
    else
    {
      v22 = 12 * a3;
      v39 = 12 * a3;
      v23 = &a2[12 * a3];
      v41 = v23;
      if ( a2 != v5 )
      {
        v24 = &v23[-v22];
        do
        {
          if ( v23 )
          {
            *(_DWORD *)v23 = *(_DWORD *)v24;
            *((_DWORD *)v23 + 1) = *((_DWORD *)v24 + 1);
            v22 = v39;
            *((_DWORD *)v23 + 2) = *((_DWORD *)v24 + 2);
            v23 = v41;
            v4 = v36;
          }
          v24 += 12;
          v23 += 12;
          v41 = v23;
        }
        while ( v24 != v5 );
      }
      v25 = (char *)v4[2];
      for ( j = v6 - (v25 - a2) / 12; j; --j )
      {
        if ( v25 )
        {
          *(_DWORD *)v25 = *a4;
          *((_DWORD *)v25 + 1) = a4[1];
          *((_DWORD *)v25 + 2) = a4[2];
        }
        v25 += 12;
      }
      v27 = a2;
      v28 = (char *)v36[2];
      if ( a2 != v28 )
      {
        do
        {
          v29 = v27;
          v27 += 12;
          *(_DWORD *)v29 = *a4;
          *((_DWORD *)v29 + 1) = a4[1];
          *((_DWORD *)v29 + 2) = a4[2];
        }
        while ( v27 != v28 );
      }
      result = v22 + v36[2];
      v36[2] = result;
    }
  }
  else
  {
    v7 = v4[1];
    if ( !v7 || (v8 = (int)&v5[-v7] / 12, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v5[-v7] / 12;
    else
      v9 = 0;
    v10 = v9 + v8;
    v40 = v9 + v8;
    if ( (int)(v9 + v8) < 0 )
      v10 = 0;
    v37 = operator new(12 * v10);
    v12 = v37;
    for ( k = (char *)v4[1]; k != a2; v12 += 3 )
    {
      if ( v12 )
      {
        *v12 = *(_DWORD *)k;
        v12[1] = *((_DWORD *)k + 1);
        v12[2] = *((_DWORD *)k + 2);
      }
      k += 12;
    }
    v14 = v12;
    if ( v6 )
    {
      v38 = v6;
      do
      {
        if ( v14 )
        {
          *v14 = *a4;
          v14[1] = a4[1];
          v14[2] = a4[2];
        }
        v14 += 3;
        --v38;
      }
      while ( v38 );
    }
    v15 = (char *)v4[2];
    v16 = &v12[3 * v6];
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          *v16 = *(_DWORD *)v17;
          v16[1] = *((_DWORD *)v17 + 1);
          v16[2] = *((_DWORD *)v17 + 2);
        }
        v17 += 12;
        v16 += 3;
      }
      while ( v17 != v15 );
    }
    sub_4885A6((LPVOID)v36[1]);
    result = v36[1];
    v36[3] = &v37[3 * v40];
    if ( result )
    {
      v19 = v36[2];
      v36[1] = v37;
      v20 = v19 - result;
      result = (unsigned int)((unsigned __int64)(715827883LL * (int)(v19 - result)) >> 32) >> 31;
      v6 += v20 / 12;
    }
    else
    {
      v36[1] = v37;
    }
    v36[2] = &v37[3 * v6];
  }
  return result;
}
