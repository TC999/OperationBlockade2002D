//----- (0046C888) --------------------------------------------------------
unsigned int *__thiscall sub_46C888(unsigned int *self, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  char v10; // [esp+0h] [ebp-Ch]

  v3 = a2;
  v4 = a2 & 0xE;
  *self = a2;
  self[2] = 0;
  self[3] = 0;
  self[4] = 0;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  v5 = 12;
  if ( v4 == 4 )
  {
    v5 = 16;
    sub_46D8FD(0, "D3DX: Detected a mesh that is using XYZRHW which is not supported.", v10);
    v3 = a2;
  }
  if ( v4 >= 6 )
  {
    v6 = (v4 - 4) >> 1;
    if ( !v6 || v6 > 5 )
    {
      if ( sub_46D957(
             (char)"d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\mesh\\gxcrackfvf.h",
             126,
             (int)"(dwPosition >= 1) && (dwPosition <= 5)") )
      {
        DebugBreak();
      }
      v3 = a2;
    }
    v5 += 4 * v6;
    self[7] = v6;
  }
  if ( (v3 & 0x10) != 0 )
  {
    self[2] = v5;
    v5 += 12;
  }
  if ( (v3 & 0x20) != 0 )
  {
    self[3] = v5;
    v5 += 4;
  }
  if ( (v3 & 0x40) != 0 )
  {
    self[4] = v5;
    v5 += 4;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    self[5] = v5;
    v5 += 4;
  }
  if ( (v3 & 0xF00) != 0 )
  {
    v7 = (v3 >> 8) & 0xF;
    v8 = HIWORD(v3);
    self[6] = v5;
    for ( self[8] = v7; v7; --v7 )
    {
      v5 += dword_499ED8[v8 & 3];
      v8 >>= 2;
    }
  }
  self[1] = v5;
  return self;
}
