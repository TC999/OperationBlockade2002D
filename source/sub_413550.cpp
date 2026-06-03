//----- (00413550) --------------------------------------------------------
static const char aParticleDat[] = "particle.dat";

void __cdecl sub_413550(int self)
{
  FILE *v2; // eax
  bool v3; // zf
  LPVOID *v4; // edi
  int v5; // ebx
  LPVOID *v6; // edi
  int v7; // eax
  FILE *v8; // [esp-4h] [ebp-24h]
  size_t ElementSize; // [esp+Ch] [ebp-14h] BYREF
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch] BYREF
  unsigned int Buffer; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)(self + 20) )
  {
    fclose(*(FILE **)(self + 20));
    *(_DWORD *)(self + 20) = 0;
  }
  v2 = fopen(aParticleDat, (const char *)Mode);
  *(_DWORD *)(self + 20) = (int)v2;
  if ( v2 )
  {
    sub_4898CA(&Buffer, 4u, 1u, v2);
    if ( Buffer >= 0xF3430023 && Buffer <= 0xF3430024 )
    {
      v8 = *(FILE **)(self + 20);
      v10 = 0;
      sub_4898CA(&v10, 4u, 1u, v8);
      v3 = v10 == 0;
      v11 = 0;
      --v10;
      if ( v3 )
      {
LABEL_17:
        fclose(*(FILE **)(self + 20));
        *(_DWORD *)(self + 20) = 0;
        sub_4134F0((_DWORD *)self);
      }
      else
      {
        while ( 1 )
        {
          sub_4898CA(&v11, 4u, 1u, *(FILE **)(self + 20));
          if ( v11 != -554860416 )
            break;
          v4 = (LPVOID *)sub_413780((_DWORD *)self);
          sub_4898CA(&ElementSize, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA(v4, ElementSize, 1u, *(FILE **)(self + 20));
          sub_4898CA(&ElementSize, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA((char *)v4 + 33, ElementSize, 1u, *(FILE **)(self + 20));
          sub_4898CA(&ElementSize, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA((char *)v4 + 293, ElementSize, 1u, *(FILE **)(self + 20));
          sub_4898CA(v4 + 91, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA(v4 + 92, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA(v4 + 93, 1u, 1u, *(FILE **)(self + 20));
          if ( Buffer < 0xF3430024 )
            v4[172] = (LPVOID)1;
          else
            sub_4898CA(v4 + 172, 4u, 1u, *(FILE **)(self + 20));
          sub_4898CA(&v13, 4u, 1u, *(FILE **)(self + 20));
          v5 = 0;
          if ( v13 > 0 )
          {
            v6 = v4 + 94;
            do
            {
              sub_40E780(v6, *(FILE **)(self + 20));
              ++v5;
              v6 += 3;
            }
            while ( v5 < v13 );
          }
          v7 = *(_DWORD *)(self + 44);
          if ( v7 )
            *(_DWORD *)(self + 44) = *(_DWORD *)(v7 + 692);
          v3 = v10-- == 0;
          if ( v3 )
            goto LABEL_17;
        }
      }
    }
  }
}
