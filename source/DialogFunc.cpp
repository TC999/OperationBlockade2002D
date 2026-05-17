//----- (0041A5A0) --------------------------------------------------------
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  INT_PTR result; // eax
  LRESULT v5; // esi
  LRESULT v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int *v10; // eax
  char *v11; // eax
  LRESULT v12; // esi
  LRESULT v13; // eax
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // eax
  LRESULT v17; // eax
  bool v18; // al
  int v20; // eax
  WPARAM v21; // ebp
  LRESULT v22; // edi
  int v23; // edi
  int v24; // esi
  int v25; // ebx
  int SystemMetrics; // eax
  tagRECT Rect; // [esp+10h] [ebp-10h] BYREF
  HWND hDlga; // [esp+24h] [ebp+4h]

  if ( a2 == 24 )
  {
    if ( a3 && dword_5200CC )
    {
      dword_5200CC = 0;
      GetWindowRect(hDlg, &Rect);
      v23 = Rect.bottom - Rect.top;
      v24 = Rect.right - Rect.left;
      v25 = (GetSystemMetrics(0) - v24) / 2;
      SystemMetrics = GetSystemMetrics(1);
      MoveWindow(hDlg, v25, (SystemMetrics - v23) / 2, v24, v23, 0);
    }
    if ( byte_5200B8 && a3 )
      ShowWindow(hDlg, 0);
    return 1;
  }
  if ( a2 == 272 )
  {
    *(_DWORD *)dword_4F5CD4 = sub_422BA0(AppName, aScreenwidth, 640);
    *(_DWORD *)&dword_5200BC = sub_422BA0(AppName, aScreenheight, 480);
    *(_DWORD *)&dword_520098 = sub_422BA0(AppName, aScreendepth, 16);
    dword_5200CC = 1;
    dword_5200C0 = GetDlgItem(hDlg, 1001);
    dword_5200C4 = GetDlgItem(hDlg, 1002);
    dword_5200B4 = GetDlgItem(hDlg, 1005);
    dword_5200A0 = GetDlgItem(hDlg, 1006);
    dword_4F5CD0 = GetDlgItem(hDlg, 1080);
    dword_4F5D10 = GetDlgItem(hDlg, 1007);
    v20 = sub_422BA0(AppName, aFullscreen_0, 1);
    LOBYTE(dword_5200AC) = v20 != 0;
    if ( v20 )
      ShowWindow(dword_5200B4, 0);
    byte_4F5D0C = sub_422BA0(AppName, aLoadeverything, 0) != 0;
    LOBYTE(dword_52009C) = sub_422BA0(AppName, aWaitforvsync, 1) != 0;
    byte_5209BC = sub_422BA0(AppName, aZbuffertoggle, 1) != 0;
    SendMessageA(dword_5200B4, 0xF1u, (_BYTE)dword_5200AC != 0, 0);
    SendMessageA(
      dword_5200A0,
      0xF1u,
      ((unsigned __int8)dword_52009C & (unsigned __int8)-((_BYTE)dword_5200AC != 0)) != 0,
      0);
    EnableWindow(dword_5200A0, (unsigned __int8)dword_5200AC);
    SendMessageA(dword_4F5CD0, 0xF1u, byte_4F5D0C != 0, 0);
    SendMessageA(dword_4F5D10, 0xF1u, byte_5209BC != 0, 0);
    dword_4F5CC8 = GetDlgItem(hDlg, 1003);
    SendMessageA(dword_4F5CC8, 0x143u, 0, (LPARAM)aHigh);
    SendMessageA(dword_4F5CC8, 0x143u, 0, (LPARAM)aMedium);
    SendMessageA(dword_4F5CC8, 0x143u, 0, (LPARAM)aLow);
    SendMessageA(dword_4F5CC8, 0x14Eu, wParam, 0);
    dword_4F5CCC = GetDlgItem(hDlg, 1004);
    SendMessageA(dword_4F5CCC, 0x143u, 0, (LPARAM)aHigh);
    SendMessageA(dword_4F5CCC, 0x143u, 0, (LPARAM)aMedium);
    SendMessageA(dword_4F5CCC, 0x143u, 0, (LPARAM)aLow);
    switch ( *(_DWORD *)&dword_520A44 )
    {
      case 0x100:
        SendMessageA(dword_4F5CCC, 0x14Eu, 0, 0);
        break;
      case 0x80:
        SendMessageA(dword_4F5CCC, 0x14Eu, 1u, 0);
        break;
      case 0x40:
        SendMessageA(dword_4F5CCC, 0x14Eu, 2u, 0);
        break;
    }
    dword_5200A4 = GetDlgItem(hDlg, 1009);
    SendMessageA(dword_5200A4, 0xF1u, byte_520974 != 0, 0);
    sub_41B030();
    v21 = -1;
    for ( hDlga = 0; (unsigned int)hDlga < dword_5200B0; hDlga = (HWND)((char *)hDlga + 1) )
    {
      v22 = SendMessageA(dword_5200C0, 0x143u, 0, (LPARAM)&unk_4F5F20);
      SendMessageA(dword_5200C0, 0x151u, v22, v22);
      if ( v21 == -1 )
        v21 = v22;
    }
    SendMessageA(dword_5200C0, 0x14Eu, v21, 0);
    sub_41A390();
    if ( byte_5200B8 )
    {
      ShowWindow(hDlg, 0);
      SendMessageA(hDlg, 0x111u, 1u, 0);
      return 1;
    }
    return 1;
  }
  if ( a2 != 273 )
    return 0;
  if ( (unsigned __int16)a3 > 0x3ECu )
  {
    switch ( (__int16)a3 )
    {
      case 1005:
        if ( HIWORD(a3) )
          return 0;
        LOBYTE(dword_5200AC) = SendMessageA(dword_5200B4, 0xF0u, 0, 0) == 1;
        sub_422DC0((HKEY)AppName, aFullscreen_0, dword_5200AC);
        sub_41A390();
        if ( (_BYTE)dword_5200AC )
        {
          SendMessageA(dword_5200A0, 0xF1u, (_BYTE)dword_52009C != 0, 0);
          EnableWindow(dword_5200A0, (unsigned __int8)dword_5200AC);
        }
        else
        {
          SendMessageA(dword_5200A0, 0xF1u, 0, 0);
          EnableWindow(dword_5200A0, 0);
        }
        result = 0;
        break;
      case 1006:
        if ( HIWORD(a3) )
          return 0;
        v18 = SendMessageA(dword_5200A0, 0xF0u, 0, 0) == 1;
        LOBYTE(dword_52009C) = v18;
        if ( !(_BYTE)dword_5200AC )
          return 0;
        sub_422DC0((HKEY)AppName, aWaitforvsync, v18);
        result = 0;
        break;
      case 1007:
        if ( !HIWORD(a3) )
        {
          byte_5209BC = SendMessageA(dword_4F5D10, 0xF0u, 0, 0) == 1;
          sub_422DC0((HKEY)AppName, aZbuffertoggle, byte_5209BC);
        }
        return 0;
      case 1009:
        if ( HIWORD(a3) )
          return 0;
        byte_520974 = SendMessageA(dword_5200A4, 0xF0u, 0, 0) == 1;
        sub_422DC0((HKEY)AppName, aAnimatedocean, byte_520974);
        result = 0;
        break;
      case 1080:
        if ( HIWORD(a3) )
          return 0;
        byte_4F5D0C = SendMessageA(dword_4F5CD0, 0xF0u, 0, 0) == 1;
        sub_422DC0((HKEY)AppName, aLoadeverything, byte_4F5D0C);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)a3 == 1004 )
  {
    if ( HIWORD(a3) == 768 || HIWORD(a3) == 1 )
    {
      v17 = SendMessageA(dword_4F5CCC, 0x147u, 0, 0);
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          *(_DWORD *)&dword_520A44 = 128;
          sub_422DC0((HKEY)AppName, aMaxparticles, 0x80u);
          return 0;
        }
        else
        {
          if ( v17 == 2 )
            *(_DWORD *)&dword_520A44 = 64;
          sub_422DC0((HKEY)AppName, aMaxparticles, dword_520A44);
          return 0;
        }
      }
      else
      {
        *(_DWORD *)&dword_520A44 = 256;
        sub_422DC0((HKEY)AppName, aMaxparticles, 0);
        return 0;
      }
    }
    return 0;
  }
  if ( (unsigned __int16)a3 > 0x3E9u )
  {
    if ( (unsigned __int16)a3 == 1002 )
    {
      if ( HIWORD(a3) == 9 )
      {
        v12 = SendMessageA(dword_5200C0, 0x147u, 0, 0);
        v13 = SendMessageA(dword_5200C4, 0x147u, 0, 0);
        if ( !(_BYTE)dword_5200AC )
        {
          v14 = dword_4A2994[2 * v13];
          *(_DWORD *)dword_4F5CD4 = dword_4A2990[2 * v13];
          *(_DWORD *)&dword_5200BC = v14;
          return 0;
        }
        v15 = dword_4F624C[4323 * v12 + 810 * dword_52096C + 5 * v13];
        v16 = (_DWORD *)((char *)&unk_4F6244 + 17292 * v12 + 3240 * dword_52096C + 20 * v13);
        *(_DWORD *)dword_4F5CD4 = *v16;
        *(_DWORD *)&dword_5200BC = v16[1];
        *(_DWORD *)&dword_520098 = 16;
        if ( v15 == 22 || v15 == 21 || v15 == 20 )
        {
          *(_DWORD *)&dword_520098 = 32;
          return 0;
        }
      }
    }
    else if ( (unsigned __int16)a3 == 1003 && (HIWORD(a3) == 768 || HIWORD(a3) == 1) )
    {
      wParam = SendMessageA(dword_4F5CC8, 0x147u, 0, 0);
      sub_422DC0((HKEY)AppName, aTexturescaledo, wParam);
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 == 1001 )
  {
    if ( HIWORD(a3) == 9 )
    {
      sub_41A390();
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 != 1 )
  {
    if ( (unsigned __int16)a3 == 2 )
    {
      EndDialog(hDlg, 0);
      return 0;
    }
    return 0;
  }
  v5 = SendMessageA(dword_5200C0, 0x147u, 0, 0);
  v6 = SendMessageA(dword_5200C4, 0x147u, 0, 0);
  dword_52096C = 1;
  dword_520A48 = v5;
  byte_520A18 = (_BYTE)dword_5200AC != 0 ? dword_52009C : 0;
  LOBYTE(dword_520A30) = (_BYTE)dword_5200AC == 0;
  byte_520A10 = byte_4F5D0C;
  if ( (_BYTE)dword_5200AC )
  {
    v9 = 5 * v6;
    v10 = (int *)((char *)&unk_4F6EEC + 17292 * v5 + 20 * v6);
    dword_5209EC = dword_4F6EFC[4323 * v5 + v9];
    dword_5209E0 = v10[2];
    dword_5209F4 = *v10;
    dword_5209D8 = v10[1];
  }
  else
  {
    v7 = dword_4A2990[2 * v6];
    v8 = dword_4A2994[2 * v6];
    dword_5209EC = 80;
    dword_5209F4 = v7;
    dword_5209D8 = v8;
  }
  sub_422DC0((HKEY)AppName, aScreenwidth, dword_4F5CD4[0]);
  sub_422DC0((HKEY)AppName, aScreenheight, dword_5200BC);
  sub_422DC0((HKEY)AppName, aScreendepth, dword_520098);
  v11 = aWindowed;
  if ( !(_BYTE)dword_520A30 )
    v11 = aFullscreen;
  sub_4229D0(aPickvideomodeS, (char)v11);
  EndDialog(hDlg, 1);
  return 0;
}
