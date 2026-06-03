//----- (00472F4B) --------------------------------------------------------
_BYTE *__stdcall sub_472F4B(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *result; // eax
  _BYTE *v4; // ebx
  _BYTE *v10; // ebx
  int v13; // edi
  int rECX, rEDX, rESI, rEDI;
  _BYTE v16[64]; // [esp+Ch] [ebp-40h] BYREF

  result = a1;
  if ( !a1 || !a2 || !a3 )
    return 0;
  if ( a3 == a1 )
  {
    if ( a2 != a1 )
    {
      v4 = a1;
      rECX = (int)a2;
      rEDX = (int)a3;
      rEDI = -4;
      do
      {
        rESI = -16;
        __asm
        {
          mov edx, rEDX
          mov edi, rEDI
          fld     dword ptr [edx+edi*4+10h]
          fld     dword ptr [edx+edi*4+20h]
          fld     dword ptr [edx+edi*4+30h]
          fld     dword ptr [edx+edi*4+40h]
        }
        do
        {
          __asm
          {
            mov ecx, rECX
            mov esi, rESI
            fld     st(3)
            fmul    dword ptr [ecx+esi*4+40h]
            fld     st(3)
            fmul    dword ptr [ecx+esi*4+44h]
            fld     st(3)
            fmul    dword ptr [ecx+esi*4+48h]
            fld     st(3)
            fmul    dword ptr [ecx+esi*4+4Ch]
            fxch    st(3)
            faddp   st(1), st
            fxch    st(2)
            faddp   st(1), st
            faddp   st(1), st
            fstp    dword ptr [v4+esi*4+64]
          }
          rESI += 4;
        }
        while ( rESI );
        __asm
        {
          ffree   st(3)
          ffree   st(2)
          ffree   st(1)
          ffree   st
        }
        v4 += 4;
        ++rEDI;
      }
      while ( rEDI );
      return result;
    }
    qmemcpy(v16, a3, sizeof(v16));
    a3 = v16;
  }
  v10 = a1;
  rECX = (int)a2;
  rEDX = (int)a3;
  v13 = -4;
  do
  {
    rESI = -4;
    __asm
    {
      mov ecx, rECX
      fld     dword ptr [ecx]
      fld     dword ptr [ecx+4]
      fld     dword ptr [ecx+8]
      fld     dword ptr [ecx+0Ch]
    }
    do
    {
      __asm
      {
        mov edx, rEDX
        mov esi, rESI
        fld     st(3)
        fmul    dword ptr [edx+esi*4+10h]
        fld     st(3)
        fmul    dword ptr [edx+esi*4+20h]
        fld     st(3)
        fmul    dword ptr [edx+esi*4+30h]
        fld     st(3)
        fmul    dword ptr [edx+esi*4+40h]
        fxch    st(3)
        faddp   st(1), st
        fxch    st(2)
        faddp   st(1), st
        faddp   st(1), st
        fstp    dword ptr [v10+esi*4+16]
      }
      ++rESI;
    }
    while ( rESI );
    __asm
    {
      ffree   st(3)
      ffree   st(2)
      ffree   st(1)
      ffree   st
    }
    rECX += 16;
    v10 += 16;
    ++v13;
  }
  while ( v13 );
  return result;
}
