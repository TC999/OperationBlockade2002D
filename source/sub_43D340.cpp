//----- (0043D340) --------------------------------------------------------
char __thiscall sub_43D340(int this, int a2)
{
  double v3; // st7
  int v5; // [esp+4h] [ebp-1Ch] BYREF
  LPVOID v6; // [esp+8h] [ebp-18h]
  _BYTE v7[4]; // [esp+Ch] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+10h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-4h]

  v3 = *(float *)(this + 44) - *(float *)(dword_520970 + 68);
  *(float *)(this + 44) = v3;
  if ( v3 < 0.0 )
  {
    sub_43EFF0(&v5);
    v9 = 0;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_4261C0(*(_DWORD **)(this + 40), aStaging, 0);
      }
      else if ( v5 == 888 )
      {
        if ( byte_520C3C )
        {
          sub_43EFC0(v7, &byte_520C3C, 52973);
          sub_488CEE(lpMem);
        }
      }
      else if ( v5 > 1 )
      {
        sub_421110(*(LPVOID **)(*(_DWORD *)(this + 48) + 112), (const char *)v6);
        *(_DWORD *)(this + 44) = 2139095039;
      }
    }
    else
    {
      *(_DWORD *)(this + 44) = 1056964608;
    }
    v9 = -1;
    sub_488CEE(v6);
  }
  return sub_428620((_DWORD *)this, a2);
}
