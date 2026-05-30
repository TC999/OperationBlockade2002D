//----- (0046D30C) --------------------------------------------------------
int __cdecl sub_46D30C(char a1, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int v10; // ebx
  char v12; // [esp+0h] [ebp-34h]
  int v13[8]; // [esp+8h] [ebp-2Ch] BYREF
  unsigned int v14; // [esp+28h] [ebp-Ch]
  int v15; // [esp+2Ch] [ebp-8h]
  int v16; // [esp+30h] [ebp-4h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    sub_46D8FD(0, "pTexture pointer is invalid", v12);
    return -2005530516;
  }
  if ( a5 == -1 )
  {
    (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)a2 + 56))(a2, 0, v13);
    a5 = sub_46CAA2(v13[0])[1] != 3 ? 5 : 2;
  }
  v7 = (*(int (__stdcall **)(int))(*(_DWORD *)v5 + 52))(v5);
  v8 = a4;
  v14 = v7;
  if ( a4 == -1 )
    v8 = 0;
  if ( v8 >= v7 )
  {
    sub_46D8FD(0, "uSrcLevel larger than num Mip level in the texture", a1);
    return -2005530516;
  }
  v16 = 0;
  a2 = 0;
  if ( (unsigned __int8)a5 == 2 || (v15 = 0, (unsigned __int8)a5 == 5) )
    v15 = 1;
  v9 = (*(int (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v5 + 60))(v5, v8, &v16);
  if ( v9 >= 0 )
  {
    v10 = v8 + 1;
    a4 = v10;
    if ( v10 < v14 )
    {
      while ( 1 )
      {
        v9 = (*(int (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v5 + 60))(v5, v10, &a2);
        if ( v9 < 0 )
          goto LABEL_27;
        v9 = sub_46D19F(v5, a2, a3, 0, v16, a3, 0, a5, 0);
        if ( v9 < 0 )
          goto LABEL_27;
        if ( v15 )
        {
          if ( v16 )
            (*(void (__stdcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v16 = a2;
        }
        else
        {
          if ( !a2 )
            goto LABEL_25;
          (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2);
        }
        a2 = 0;
LABEL_25:
        if ( ++a4 >= v14 )
          break;
        v10 = a4;
      }
    }
    v9 = 0;
  }
LABEL_27:
  if ( v16 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v16 + 8))(v16);
    v16 = 0;
  }
  if ( a2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  return v9;
}
