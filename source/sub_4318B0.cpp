//----- (004318B0) --------------------------------------------------------
char __cdecl sub_4318B0(_DWORD *self)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v28; // [esp+4h] [ebp-18h] BYREF
  int v29; // [esp+8h] [ebp-14h]
  int v30; // [esp+Ch] [ebp-10h]
  int v31; // [esp+10h] [ebp-Ch] BYREF
  int v32; // [esp+14h] [ebp-8h]
  int v33; // [esp+18h] [ebp-4h]

  if ( !self[567] )
  {
    v2 = self[568];
    if ( v2 )
    {
      sub_41D840(v2);
      v3 = self[336];
      v4 = self[337];
      v28 = self[335];
      v5 = self[328];
      v29 = v3;
      v6 = self[329];
      v31 = v5;
      v32 = v6;
      v30 = v4;
      v7 = (_DWORD *)self[568];
      v33 = self[330];
      sub_41D960(v7, (_DWORD *)&v31, (_DWORD *)&v28);
    }
    if ( !self[567] )
    {
      v8 = self[569];
      if ( v8 )
      {
        sub_41D840(v8);
        v9 = self[336];
        v10 = self[337];
        v31 = self[335];
        v11 = self[328];
        v32 = v9;
        v12 = self[329];
        v33 = v10;
        v13 = self[330];
        v28 = v11;
        v29 = v12;
        v30 = v13;
        sub_41D960((_DWORD *)self[569], (_DWORD *)&v28, (_DWORD *)&v31);
      }
    }
  }
  if ( self[567] == 1 )
  {
    v14 = self[570];
    if ( v14 )
    {
      sub_41D840(v14);
      v15 = self[336];
      v16 = self[337];
      v31 = self[335];
      v17 = self[328];
      v32 = v15;
      v18 = self[329];
      v28 = v17;
      v29 = v18;
      v33 = v16;
      v19 = (_DWORD *)self[570];
      v30 = self[330];
      sub_41D960(v19, (_DWORD *)&v28, (_DWORD *)&v31);
    }
  }
  v20 = self[107];
  if ( *(_DWORD *)(v20 + 292) == 3 )
  {
    v21 = self[356];
    if ( v21 )
    {
      SLOBYTE(v20) = *(_BYTE *)(v21 + 16);
      if ( (_BYTE)v20 )
      {
        v22 = self[336];
        v31 = self[335];
        v23 = self[337];
        v32 = v22;
        v24 = self[328];
        v33 = v23;
        v25 = self[329];
        v28 = v24;
        v26 = self[330];
        v29 = v25;
        v30 = v26;
        SLOBYTE(v20) = (char)sub_41D960((_DWORD *)v21, (_DWORD *)&v28, (_DWORD *)&v31);
      }
    }
  }
  return v20;
}
