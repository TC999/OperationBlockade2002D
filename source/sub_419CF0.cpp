//----- (00419CF0) --------------------------------------------------------
char *__cdecl sub_419CF0(char *self, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v4; // ebx
  char *result; // eax
  unsigned int v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v12; // edx
  char *v13; // eax
  _DWORD *v14; // eax
  char *v15; // ebx
  _DWORD *v16; // esi
  char *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebp
  char *v21; // esi
  char *v22; // ecx
  char *v23; // eax
  _DWORD *v24; // esi
  unsigned int v25; // edi
  char *v26; // ecx
  char *j; // eax
  char *v28; // edi
  int v29; // edi
  _DWORD *v30; // esi
  char *v31; // ecx
  _DWORD *v32; // ecx
  char *v33; // eax
  char *i; // eax
  char *v35; // ebx
  _DWORD *v37; // [esp+14h] [ebp-4h]
  unsigned int v38; // [esp+1Ch] [ebp+4h]
  int v39; // [esp+20h] [ebp+8h]

  v4 = self;
  result = (char *)*((_DWORD *)self + 2);
  v6 = a3;
  if ( (*((_DWORD *)self + 3) - (int)result) >> 4 >= a3 )
  {
    if ( (result - a2) >> 4 >= a3 )
    {
      if ( a3 )
      {
        v29 = 16 * a3;
        v30 = (_DWORD *)*((_DWORD *)self + 2);
        v31 = &result[-16 * a3];
        if ( v31 != result )
        {
          do
          {
            if ( v30 )
            {
              *v30 = *(_DWORD *)v31;
              v30[1] = *((_DWORD *)v31 + 1);
              v30[2] = *((_DWORD *)v31 + 2);
              v30[3] = *((_DWORD *)v31 + 3);
              v29 = 16 * a3;
            }
            v31 += 16;
            v30 += 4;
          }
          while ( v31 != result );
          v4 = self;
        }
        v32 = (_DWORD *)*((_DWORD *)v4 + 2);
        v33 = (char *)&v32[v29 / 4];
        if ( a2 != (char *)&v32[v29 / 4] )
        {
          do
          {
            v33 -= 16;
            v32 -= 4;
            *v32 = *(_DWORD *)v33;
            v32[1] = *((_DWORD *)v33 + 1);
            v32[2] = *((_DWORD *)v33 + 2);
            v32[3] = *((_DWORD *)v33 + 3);
          }
          while ( v33 != a2 );
        }
        for ( i = a2; i != &a2[v29]; *((_DWORD *)v35 + 3) = a4[3] )
        {
          v35 = i;
          i += 16;
          *(_DWORD *)v35 = *a4;
          *((_DWORD *)v35 + 1) = a4[1];
          *((_DWORD *)v35 + 2) = a4[2];
        }
        result = self;
        *((_DWORD *)self + 2) += v29;
      }
    }
    else
    {
      v20 = 16 * a3;
      v21 = &a2[16 * a3];
      if ( a2 != result )
      {
        v22 = &v21[-v20];
        do
        {
          if ( v21 )
          {
            *(_DWORD *)v21 = *(_DWORD *)v22;
            *((_DWORD *)v21 + 1) = *((_DWORD *)v22 + 1);
            *((_DWORD *)v21 + 2) = *((_DWORD *)v22 + 2);
            v20 = 16 * a3;
            *((_DWORD *)v21 + 3) = *((_DWORD *)v22 + 3);
            v6 = a3;
          }
          v22 += 16;
          v21 += 16;
        }
        while ( v22 != result );
        v4 = self;
      }
      v23 = (char *)*((_DWORD *)v4 + 2);
      v24 = a4;
      v25 = v6 - ((v23 - a2) >> 4);
      if ( v25 )
      {
        do
        {
          if ( v23 )
          {
            *(_DWORD *)v23 = *v24;
            *((_DWORD *)v23 + 1) = v24[1];
            *((_DWORD *)v23 + 2) = v24[2];
            *((_DWORD *)v23 + 3) = v24[3];
            v24 = a4;
          }
          v23 += 16;
          --v25;
        }
        while ( v25 );
        v4 = self;
      }
      v26 = (char *)*((_DWORD *)v4 + 2);
      for ( j = a2; j != v26; *((_DWORD *)v28 + 3) = v24[3] )
      {
        v28 = j;
        j += 16;
        *(_DWORD *)v28 = *v24;
        *((_DWORD *)v28 + 1) = v24[1];
        *((_DWORD *)v28 + 2) = v24[2];
      }
      result = self;
      *((_DWORD *)self + 2) += v20;
    }
  }
  else
  {
    v7 = *((_DWORD *)self + 1);
    if ( !v7 || (v8 = (unsigned int)(result - (char*)v7) >> 4, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (unsigned int)(result - (char*)v7) >> 4;
    else
      v9 = 0;
    v10 = v8 + v9;
    v39 = v10;
    if ( v10 < 0 )
      v10 = 0;
    v37 = (_DWORD *)operator new(16 * v10);
    v12 = v37;
    v13 = (char *)*((_DWORD *)v4 + 1);
    if ( v13 != a2 )
    {
      do
      {
        if ( v12 )
        {
          *v12 = *(_DWORD *)v13;
          v12[1] = *((_DWORD *)v13 + 1);
          v12[2] = *((_DWORD *)v13 + 2);
          v12[3] = *((_DWORD *)v13 + 3);
        }
        v13 += 16;
        v12 += 4;
      }
      while ( v13 != a2 );
      v4 = self;
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
          v14[3] = a4[3];
        }
        v14 += 4;
        --v38;
      }
      while ( v38 );
      v4 = self;
    }
    v15 = (char *)*((_DWORD *)v4 + 2);
    v16 = &v12[4 * v6];
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
          v16[3] = *((_DWORD *)v17 + 3);
        }
        v17 += 16;
        v16 += 4;
      }
      while ( v17 != v15 );
    }
    sub_4885A6(*((LPVOID *)self + 1));
    v18 = *((_DWORD *)self + 1);
    *((_DWORD *)self + 3) = (uint32)&v37[4 * v39];
    if ( v18 )
    {
      v19 = *((_DWORD *)self + 2);
      *((_DWORD *)self + 1) = (uint32)v37;
      result = (char *)&v37[4 * v6 + 4 * ((v19 - v18) >> 4)];
    }
    else
    {
      *((_DWORD *)self + 1) = (uint32)v37;
      result = (char *)&v37[4 * v6];
    }
    *((_DWORD *)self + 2) = (uint32)result;
  }
  return result;
}
