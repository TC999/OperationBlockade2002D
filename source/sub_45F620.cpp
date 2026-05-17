//----- (0045F620) --------------------------------------------------------
void __thiscall sub_45F620(int this, int a2, char a3)
{
  char v4; // al
  char v5; // dl
  int v6; // ecx
  int *v7; // eax
  char *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  char *v12; // eax
  float v13; // [esp+0h] [ebp-20h]
  float v14; // [esp+0h] [ebp-20h]
  float v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  if ( *(_BYTE *)(dword_520970 + 296) || sub_408F30(dword_520970) != this )
    return;
  if ( a2 == 59 )
  {
    sub_4261C0(*(_DWORD **)(dword_520970 + 232), aHelpscreen, 0);
    return;
  }
  if ( a2 == 34 )
  {
    if ( !a3 )
    {
      v4 = *(_BYTE *)(this + 2645);
      *(_BYTE *)(this + 2644) = 0;
      if ( v4 )
      {
        *(_BYTE *)(this + 2646) = 1;
        *(_BYTE *)(this + 2645) = 0;
      }
      return;
    }
    *(_BYTE *)(this + 2644) = 1;
  }
  if ( a3 )
  {
    switch ( a2 )
    {
      case 15:
        sub_45EFA0((_DWORD *)this);
        break;
      case 2:
        sub_45EE50(this, 0);
        break;
      case 3:
        sub_45EE50(this, 1);
        break;
      case 4:
        sub_45EE50(this, 2);
        break;
      case 5:
        sub_45EE50(this, 3);
        break;
      case 6:
        sub_45EE50(this, 4);
        break;
      case 7:
        sub_45EE50(this, 5);
        break;
      case 26:
        sub_45F050((_DWORD *)this);
        break;
      case 27:
        sub_45F000((_DWORD *)this);
        break;
    }
    v5 = 0;
    v6 = 0;
    v7 = (int *)(this + 11528);
    while ( !*(v7 - 2) || *v7 <= 0 )
    {
      ++v6;
      v7 += 7;
      if ( v6 >= 3 )
        goto LABEL_35;
    }
    v5 = 1;
LABEL_35:
    if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) && !v5 )
    {
      if ( *(_DWORD *)(this + 11520) && (a2 == 16 || a2 == 30) && *(float *)(this + 11540) <= 0.0 )
      {
        sub_42F620(*(_DWORD *)(this + 11524), *(_DWORD *)(this + 11520));
        *(_DWORD *)(this + 11528) = *(_DWORD *)(this + 11524);
        *(_DWORD *)(this + 11524) = 0;
        *(_DWORD *)(this + 11540) = *(_DWORD *)(this + 11532);
        *(_DWORD *)(this + 11544) = *(_DWORD *)(this + 11536);
        v8 = sub_403620((_DWORD *)dword_4B5AB0, aSpecialAttack);
        sub_4030B0(v8, 0, aAirstrikefight, -1);
      }
      else if ( *(_DWORD *)(this + 11548) && (a2 == 17 || a2 == 20) && *(float *)(this + 11568) <= 0.0 )
      {
        v9 = *(_DWORD *)(this + 516);
        v15 = 0.0;
        v16 = 1065353216;
        v17 = 0;
        v13 = *(float *)(this + 52 * v9 + 2368) * 0.017453292;
        sub_401000(&v15, v13);
        sub_42EF80(*(_DWORD *)(this + 11552), *(_DWORD *)(this + 11548), &v15);
        *(_DWORD *)(this + 11556) = *(_DWORD *)(this + 11552);
        *(_DWORD *)(this + 11552) = 0;
        *(_DWORD *)(this + 11568) = *(_DWORD *)(this + 11560);
        v10 = sub_403620((_DWORD *)dword_4B5AB0, aSpecialAttack);
        sub_4030B0(v10, 0, aAirstriketorpe, -1);
      }
      else if ( *(_DWORD *)(this + 11576) && (a2 == 18 || a2 == 48) && *(float *)(this + 11596) <= 0.0 )
      {
        v11 = *(_DWORD *)(this + 516);
        v15 = 0.0;
        v16 = 1065353216;
        v17 = 0;
        v14 = *(float *)(this + 52 * v11 + 2368) * 0.017453292;
        sub_401000(&v15, v14);
        sub_42E480(*(_DWORD *)(this + 11580), *(_DWORD *)(this + 11576), &v15);
        *(_DWORD *)(this + 11584) = *(_DWORD *)(this + 11580);
        *(_DWORD *)(this + 11580) = 0;
        *(_DWORD *)(this + 11596) = *(_DWORD *)(this + 11588);
        v12 = sub_403620((_DWORD *)dword_4B5AB0, aSpecialAttack);
        sub_4030B0(v12, 0, aAirstrikebombe, -1);
      }
    }
  }
}
