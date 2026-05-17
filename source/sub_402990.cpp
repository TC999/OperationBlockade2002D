//----- (00402990) --------------------------------------------------------
int __cdecl sub_402990(LPCCH lpMultiByteStr)
{
  int v1; // eax
  int v2; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  int v12; // [esp+40h] [ebp-230h] BYREF
  int v13; // [esp+44h] [ebp-22Ch] BYREF
  int v14; // [esp+48h] [ebp-228h] BYREF
  tagMSG Msg; // [esp+4Ch] [ebp-224h] BYREF
  WCHAR WideCharStr[260]; // [esp+68h] [ebp-208h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 260);
  v1 = (*(int (__stdcall **)(LPVOID, WCHAR *, _DWORD))(*(_DWORD *)ppv + 52))(ppv, WideCharStr, 0);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v4 = (*(int (__stdcall **)(int, HWND))(*(_DWORD *)dword_4B5A98 + 124))(dword_4B5A98, hWnd);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = sub_402B90();
      v7 = v6;
      if ( v6 >= 0 )
      {
        v8 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B5A94 + 32))(dword_4B5A94);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v10 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B5A94 + 28))(dword_4B5A94);
          v11 = v10;
          if ( v10 >= 0 )
          {
            dword_4A00AC = 1;
            do
            {
              if ( (*(int (__stdcall **)(int, int *, int *, int *, _DWORD))(*(_DWORD *)dword_4B5A9C + 32))(
                     dword_4B5A9C,
                     &v12,
                     &v13,
                     &v14,
                     0) == -2147467260 )
                goto LABEL_17;
              v11 = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)dword_4B5A9C + 48))(
                      dword_4B5A9C,
                      v12,
                      v13,
                      v14);
              if ( v11 < 0 )
                sub_4229D0(aFailed08lxToFr, v11);
              if ( v12 != 1 )
LABEL_17:
                Sleep(0x64u);
              else
                dword_4A00AC = 0;
              while ( PeekMessageA(&Msg, hWnd, 0, 0, 1u) )
              {
                TranslateMessage(&Msg);
                DispatchMessageA(&Msg);
              }
            }
            while ( dword_4A00AC );
            return v11;
          }
          else
          {
            sub_4229D0(aFailed08lxInRu, v10);
            return v11;
          }
        }
        else
        {
          sub_4229D0(aFailed08lxInPa, v8);
          return v9;
        }
      }
      else
      {
        sub_4229D0(aFailed08lxToSe, v6);
        return v7;
      }
    }
    else
    {
      sub_4229D0(aFailed0x08lxTo, v4);
      return v5;
    }
  }
  else
  {
    sub_4229D0(aFailed0x08lxIn, v1);
    return v2;
  }
}
