//----- (00475CAA) --------------------------------------------------------
int __thiscall sub_475CAA(_DWORD *this)
{
  int v2; // eax
  bool v3; // cf
  int *v4; // edx
  float *v5; // eax
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  unsigned int v9; // edi
  _DWORD *v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // eax
  _DWORD v15[17]; // [esp+4h] [ebp-84h] BYREF
  int v16; // [esp+48h] [ebp-40h]
  int v17; // [esp+4Ch] [ebp-3Ch]
  float v18; // [esp+50h] [ebp-38h]
  int v19; // [esp+54h] [ebp-34h]
  int v20; // [esp+58h] [ebp-30h]
  int v21; // [esp+5Ch] [ebp-2Ch]
  int v22; // [esp+60h] [ebp-28h]
  int v23; // [esp+64h] [ebp-24h]
  int v24; // [esp+68h] [ebp-20h]
  int v25; // [esp+6Ch] [ebp-1Ch]
  int v26; // [esp+70h] [ebp-18h]
  int v27; // [esp+74h] [ebp-14h]
  _DWORD *v28; // [esp+78h] [ebp-10h]
  unsigned int v29; // [esp+7Ch] [ebp-Ch]
  float v30; // [esp+80h] [ebp-8h]
  float v31; // [esp+84h] [ebp-4h]

  if ( this[1060] && this[1061] )
  {
    v2 = this[1];
    if ( v2 == 844388420 || (v24 = 0, v2 == 877942852) )
      v24 = 1;
    v3 = this[1053] < this[1055];
    v29 = this[1053];
    if ( v3 )
    {
      do
      {
        v15[16] = v25 | 0xC00;
        dword_52230C = v25;
        v4 = v15;
        if ( v24 )
        {
          v28 = this + 1049;
          v26 = 4;
          do
          {
            v5 = (float *)(*v28 + 16 * (v29 - this[1053]));
            v27 = 4;
            do
            {
              v30 = *v5 * v5[3] * 255.0 + 0.5;
              v23 = (int)v30;
              v30 = v5[1] * v5[3] * 255.0 + 0.5;
              v21 = (int)v30;
              v30 = v5[3] * v5[2] * 255.0 + 0.5;
              v17 = (int)v30;
              v6 = v5[3] * 255.0;
              v31 = *(float *)&v17;
              v30 = v6 + 0.5;
              v19 = (int)v30;
              v5 += 4;
              *v4++ = v17 | ((v21 | ((v23 | (v19 << 8)) << 8)) << 8);
              --v27;
            }
            while ( v27 );
            ++v28;
            --v26;
          }
          while ( v26 );
        }
        else
        {
          v28 = this + 1049;
          v27 = 4;
          do
          {
            v7 = (float *)(*v28 + 16 * (v29 - this[1053]));
            v26 = 4;
            do
            {
              v31 = *v7 * 255.0 + 0.5;
              v22 = (int)v31;
              v31 = v7[1] * 255.0 + 0.5;
              v20 = (int)v31;
              v31 = v7[2] * 255.0 + 0.5;
              LODWORD(v18) = (int)v31;
              v8 = v7[3] * 255.0;
              v30 = v18;
              v31 = v8 + 0.5;
              v16 = (int)v31;
              v7 += 4;
              *v4++ = LODWORD(v18) | ((v20 | ((v22 | (v16 << 8)) << 8)) << 8);
              --v26;
            }
            while ( v26 );
            ++v28;
            --v27;
          }
          while ( v27 );
        }
        v31 = *(float *)&v25;
        v9 = 0;
        if ( this[1062] )
        {
          v10 = v15;
          do
          {
            v11 = 0;
            v12 = 4 * (v9 & this[1064]);
            do
              *v10++ = v15[v12 + (v11++ & this[1063])];
            while ( v11 < 4 );
            ++v9;
          }
          while ( v9 < 4 );
        }
        v13 = this[1];
        switch ( v13 )
        {
          case 827611204:
            sub_47AFCE(v15, this[6] + this[1043] * this[1057] + this[1042] * (this[1054] >> 2) + 8 * (v29 >> 2));
            break;
          case 844388420:
          case 861165636:
            sub_47BB23(v15, this[6] + 16 * (v29 >> 2) + this[1043] * this[1057] + this[1042] * (this[1054] >> 2));
            break;
          case 877942852:
          case 894720068:
            sub_47BB7C(v15, this[6] + 16 * (v29 >> 2) + this[1043] * this[1057] + this[1042] * (this[1054] >> 2));
            break;
        }
        v29 += 4;
      }
      while ( v29 < this[1055] );
    }
    this[1060] = 0;
  }
  return 0;
}
