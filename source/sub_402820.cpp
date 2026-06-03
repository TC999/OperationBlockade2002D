#include "common.h"

extern const CLSID rclsid;
extern const IID riid;

//----- (00402820) --------------------------------------------------------
HRESULT sub_402820()
{
  HRESULT Instance; // eax
  HRESULT v1; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi

  Instance = CoCreateInstance(rclsid, 0, CLSCTX_INPROC_SERVER, riid, &ppv);
  v1 = Instance;
  if ( Instance >= 0 )
  {
    v3 = (*(int (__stdcall **)(LPVOID, void *, int *))(*(_DWORD *)ppv + 0))(ppv, &unk_499D74, &dword_4B5A94);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = (*(int (__stdcall **)(LPVOID, void *, int *))(*(_DWORD *)ppv + 0))(ppv, &unk_499D54, &dword_4B5A98);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = (*(int (__stdcall **)(LPVOID, void *, int *))(*(_DWORD *)ppv + 0))(ppv, &unk_499D64, &dword_4B5A9C);
        v8 = v7;
        if ( v7 >= 0 )
        {
          return 0;
        }
        else
        {
          sub_4229D0(aFailedHr0xXInP_1, v7);
          sub_4028F0();
          return v8;
        }
      }
      else
      {
        sub_4229D0(aFailedHr0xXInP_0, v5);
        sub_4028F0();
        return v6;
      }
    }
    else
    {
      sub_4229D0(aFailedHr0xXInP, v3);
      sub_4028F0();
      return v4;
    }
  }
  else
  {
    sub_4229D0(aFailedHr0xXInC, Instance);
    sub_4028F0();
    return v1;
  }
}
