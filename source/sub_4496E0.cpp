//----- (004496E0) --------------------------------------------------------
char *__thiscall sub_4496E0(char *self, char *a2)
{
  char *v2; // ebp
  char *v3; // edi
  char *v4; // esi
  char *v5; // ebx
  void *v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebp
  _DWORD *j; // ebx
  _DWORD *v20; // edi
  int v21; // eax
  _DWORD *i; // eax
  int v23; // ecx
  int v25; // [esp+10h] [ebp-6Ch] BYREF
  int v26; // [esp+14h] [ebp-68h]
  char *v27; // [esp+18h] [ebp-64h]
  char *String1; // [esp+1Ch] [ebp-60h] BYREF
  int v29; // [esp+20h] [ebp-5Ch] BYREF
  _DWORD *v30; // [esp+24h] [ebp-58h]
  int v31; // [esp+28h] [ebp-54h]
  char *v32; // [esp+2Ch] [ebp-50h]
  int v33[16]; // [esp+30h] [ebp-4Ch] BYREF
  int v34; // [esp+78h] [ebp-4h]

  v2 = a2;
  v3 = self;
  v27 = self;
  sub_468FF0(self, (int)a2);
  v4 = v3 + 304;
  v34 = 0;
  v3[304] = (char)a2;
  *((_DWORD *)v3 + 77) = 0;
  *((_DWORD *)v3 + 78) = 0;
  *((_DWORD *)v3 + 79) = 0;
  LOBYTE(v34) = 1;
  *(_DWORD *)v3 = &off_499A30;
  sub_40AFC0(a2, aChunksfile, &String1);
  v5 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
  v26 = 0;
  v32 = v5;
  if ( *((int *)v5 + 2) > 0 )
  {
    do
    {
      if ( sub_405BE0(v5, v26) )
      {
        sub_40ADB0(v2);
        sub_40AFC0(v2, aName_0, &String1);
        v6 = operator new(0x1A4u);
        v31 = (int)v6;
        LOBYTE(v34) = 2;
        if ( v6 )
          v8 = sub_448F70((int)v6, v7, v2, 0);
        else
          v8 = 0;
        v25 = v8;
        *(_DWORD *)(v8 + 12) = aChunk;
        LOBYTE(v34) = 1;
        *(_DWORD *)(v25 + 388) = 1;
        v9 = v25;
        ++*((_DWORD *)v5 + 14);
        v10 = v26;
        *(_DWORD *)(v9 + 400) = v5;
        *(_DWORD *)(v25 + 404) = v10;
        sub_4063E0(v5, *(_DWORD *)(v25 + 404), v33, (float *)(v25 + 408), 0.0, 0);
        if ( sub_40ABC0(v2, aScale, 0) )
        {
          sub_40AF60(v2, aScale, (float *)&v29);
          *(float *)(v25 + 408) = *(float *)&v29 * *(float *)(v25 + 408);
        }
        sub_469700(*(_DWORD **)(dword_520970 + 200), v25, aCustumChunk);
        sub_469160((int)v3, &v25, 0, 0);
        v11 = (_DWORD *)*((_DWORD *)v4 + 2);
        v12 = v11;
        if ( (*((_DWORD *)v4 + 3) - (int)v11) >> 2 )
        {
          sub_448B80(v11, v11, v11 + 1);
          sub_44B480(*((_DWORD **)v4 + 2), (_DWORD *)(1 - ((*((_DWORD *)v4 + 2) - (int)v12) >> 2)), &v25);
          for ( i = (_DWORD *)*((_DWORD *)v4 + 2); v12 != i; ++v12 )
            *v12 = v25;
          *((_DWORD *)v4 + 2) += 4;
        }
        else
        {
          v13 = *((_DWORD *)v4 + 1);
          if ( !v13 || (v14 = ((int)v11 - v13) >> 2, v14 <= 1) )
            v14 = 1;
          if ( v13 )
            v15 = ((int)v11 - v13) >> 2;
          else
            v15 = 0;
          v16 = v14 + v15;
          v31 = v16;
          if ( v16 < 0 )
            v16 = 0;
          v17 = operator new(4 * v16);
          v18 = (_DWORD *)*((_DWORD *)v4 + 1);
          v30 = v17;
          for ( j = v17; v18 != v12; ++j )
            sub_448BE0(j, v18++);
          sub_44B480(j, (_DWORD *)1, &v25);
          sub_448B80(v12, *((_DWORD **)v4 + 2), j + 1);
          nullsub_8(*((_DWORD *)v4 + 1), *((_DWORD *)v4 + 2));
          sub_4885A6(*((LPVOID *)v4 + 1));
          v20 = v30;
          *((_DWORD *)v4 + 3) = &v30[v31];
          v21 = sub_4481C0(v4);
          v5 = v32;
          v2 = a2;
          *((_DWORD *)v4 + 1) = v20;
          *((_DWORD *)v4 + 2) = &v20[v21 + 1];
        }
        v3 = v27;
      }
      v23 = *((_DWORD *)v5 + 2);
      ++v26;
    }
    while ( v26 < v23 );
  }
  sub_403B70(v5);
  sub_40AFC0(v2, aChunksfile, &String1);
  sub_40B1B0(v2, aMagnitude, (float *)v3 + 73);
  v3[300] = 0;
  if ( sub_40ABC0(v2, aExplodeup, 0) )
    sub_40B130(v2, aExplodeup, v3 + 300);
  return v3;
}
