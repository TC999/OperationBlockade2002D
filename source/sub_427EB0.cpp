//----- (00427EB0) --------------------------------------------------------
bool __cdecl sub_427EB0(int *a1)
{
  bool result; // al
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // edx
  int *v10; // eax
  int v11; // ecx
  int v12; // edx
  FILE *v13; // eax
  FILE *v14; // esi
  size_t v15; // eax
  int v16; // eax
  int v17; // [esp+54h] [ebp-16Ch] BYREF
  int v18; // [esp+58h] [ebp-168h] BYREF
  int v19; // [esp+5Ch] [ebp-164h] BYREF
  int v20; // [esp+60h] [ebp-160h]
  __int16 v21; // [esp+6Ch] [ebp-154h] BYREF
  size_t v22; // [esp+6Eh] [ebp-152h]
  __int16 v23; // [esp+72h] [ebp-14Eh]
  __int16 v24; // [esp+74h] [ebp-14Ch]
  int v25; // [esp+76h] [ebp-14Ah]
  _DWORD v26[3]; // [esp+7Ch] [ebp-144h] BYREF
  __int16 v27; // [esp+88h] [ebp-138h]
  __int16 v28; // [esp+8Ah] [ebp-136h]
  int v29; // [esp+8Ch] [ebp-134h]
  size_t ElementCount; // [esp+90h] [ebp-130h]
  int v31; // [esp+94h] [ebp-12Ch]
  int v32; // [esp+98h] [ebp-128h]
  int v33; // [esp+9Ch] [ebp-124h]
  int v34; // [esp+A0h] [ebp-120h]
  char v35[4]; // [esp+A4h] [ebp-11Ch] BYREF
  int v36; // [esp+A8h] [ebp-118h]
  int v37[4]; // [esp+ACh] [ebp-114h] BYREF
  char Buffer[260]; // [esp+BCh] [ebp-104h] BYREF

  v17 = 0;
  v18 = 0;
  result = sub_422EF0(aScreens);
  if ( result )
  {
    v2 = 1;
    do
    {
      v3 = v2++;
      sprintf(Buffer, "screens\\shot%03d.tga", v3);
    }
    while ( sub_422AE0(Buffer) );
    v4 = *a1;
    v37[0] = 0;
    (*(void (__stdcall **)(int *, int *))(v4 + 36))(a1, v37);
    v5 = *a1;
    v20 = 0;
    v19 = 0;
    (*(void (__stdcall **)(int *, int *))(v5 + 24))(a1, &v18);
    if ( v18 )
    {
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)v18 + 32))(v18, v37[0], &v19);
      if ( v18 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18);
        v18 = 0;
      }
    }
    if ( (*(int (__stdcall **)(int *, int, int, int, int *))(*a1 + 108))(a1, v19, v20, 21, &v17) >= 0 )
    {
      if ( (*(int (__stdcall **)(int *, int))(*a1 + 120))(a1, v17) >= 0 )
      {
        v26[1] = v19;
        v26[0] = 40;
        ElementCount = 3 * v20 * v19;
        v26[2] = v20;
        v27 = 1;
        v28 = 24;
        v29 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v6 = operator new(ElementCount + 1);
        if ( v6 )
        {
          if ( (*(int (__stdcall **)(int, char *, _DWORD, int))(*(_DWORD *)v17 + 36))(v17, v35, 0, 16) >= 0 )
          {
            v7 = v6;
            v8 = v20 - 1;
            if ( v20 - 1 >= 0 )
            {
              v9 = v19;
              do
              {
                v10 = (int *)(v36 + 4 * v9 * v8);
                v11 = 0;
                if ( v9 > 0 )
                {
                  do
                  {
                    v12 = *v10++;
                    *v7 = v12;
                    v9 = v19;
                    v7 = (_DWORD *)((char *)v7 + 3);
                    ++v11;
                  }
                  while ( v11 < v19 );
                }
                --v8;
              }
              while ( v8 >= 0 );
            }
            (*(void (__stdcall **)(int))(*(_DWORD *)v17 + 40))(v17);
            if ( v17 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v17 = 0;
            }
            v21 = 19778;
            v22 = ElementCount + 54;
            v24 = 0;
            v23 = 0;
            v25 = 54;
            v13 = fopen(Buffer, aWb);
            v14 = v13;
            if ( v13 )
            {
              if ( sub_48A21D(&v21, 0xEu, 1u, v13) )
              {
                if ( sub_48A21D(v26, 0x28u, 1u, v14) )
                {
                  v15 = sub_48A21D(v6, 1u, ElementCount, v14);
                  if ( v15 >= ElementCount )
                  {
                    fclose(v14);
                    sub_4885A6(v6);
                    v16 = sub_450BF0(0, 4.0);
                    sub_421190(v16, "'%s' written", Buffer);
                    return 1;
                  }
                  else
                  {
                    return 0;
                  }
                }
                else
                {
                  return 0;
                }
              }
              else
              {
                return 0;
              }
            }
            else
            {
              sub_4229D0("Function \"Screenshot\": The file \"%s\" could not be created.", Buffer);
              return 0;
            }
          }
          else
          {
            sub_4229D0(aFunctionScreen_2);
            return 0;
          }
        }
        else
        {
          sub_4229D0(aFunctionScreen_1);
          return 0;
        }
      }
      else
      {
        sub_4229D0(aFunctionScreen_0);
        return 0;
      }
    }
    else
    {
      sub_4229D0(aFunctionScreen);
      return 0;
    }
  }
  return result;
}
