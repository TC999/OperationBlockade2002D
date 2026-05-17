//----- (004735E3) --------------------------------------------------------
void __thiscall sub_4735E3(float *this, float *a2)
{
  float *v2; // edi
  unsigned int v3; // esi
  float *v4; // ebx

  v2 = a2;
  v3 = (unsigned int)&a2[4 * *((_DWORD *)this + 1044)];
  if ( (unsigned int)a2 < v3 )
  {
    v4 = this + 7;
    do
    {
      if ( sub_47304C(v2, v4) )
      {
        v2[3] = 0.0;
        v2[2] = 0.0;
        v2[1] = 0.0;
        *v2 = 0.0;
      }
      v2 += 4;
    }
    while ( (unsigned int)v2 < v3 );
  }
}
