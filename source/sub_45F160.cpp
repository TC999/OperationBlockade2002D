//----- (0045F160) --------------------------------------------------------
void __thiscall sub_45F160(float *this, float *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  float *v6; // edx
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edx
  float *v13; // eax

  v3 = *((_DWORD *)this + 131);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *a2 = this[588];
      a2[1] = this[589];
      a2[2] = this[590];
    }
    else
    {
      v4 = *((_DWORD *)this + 130);
      v5 = 0;
      if ( v4 <= 0 )
        goto LABEL_11;
      v6 = this + 231;
      v7 = *((_DWORD *)this + 130);
      do
      {
        if ( *v6 > 0.0 )
          ++v5;
        v6 += 88;
        --v7;
      }
      while ( v7 );
      if ( v5 )
      {
        do
        {
          v10 = 10 * v4 - 1;
          v11 = rand();
          v4 = *((_DWORD *)this + 130);
          v12 = v11 % (v10 + 1) / 10;
          if ( v12 >= v4 )
            v12 = 0;
        }
        while ( this[88 * v12 + 231] <= 0.0 );
        v13 = &this[13 * LODWORD(this[88 * v12 + 220]) + 588];
        *a2 = *v13;
        a2[1] = v13[1];
        a2[2] = v13[2];
      }
      else
      {
LABEL_11:
        v8 = rand() % (10 * v4) / 10;
        if ( v8 >= *((_DWORD *)this + 130) )
          v8 = 0;
        v9 = 13 * LODWORD(this[88 * v8 + 220]);
        *a2 = this[13 * LODWORD(this[88 * v8 + 220]) + 588];
        a2[1] = this[v9 + 589];
        a2[2] = this[v9 + 590];
      }
    }
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = sub_468BE0(0, 0, 0) + 72.0;
  }
}
