extern char aSoundsDialogue_0[];

//----- (004385C0) --------------------------------------------------------
int __cdecl sub_4385C0(int self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  float v5; // [esp+0h] [ebp-20h]

  sub_401270((_DWORD *)self);
  *(_DWORD *)(self + 404) = 0;
  *(_DWORD *)(self + 408) = 0;
  *(_DWORD *)(self + 488) = 0;
  *(_DWORD *)(self + 492) = 0;
  *(_DWORD *)(self + 496) = 0;
  *(_BYTE *)(self + 500) = 1;
  *(_DWORD *)self = (int)&off_49951C;
  *(_DWORD *)(self + 392) = 0;
  *(_DWORD *)(self + 396) = 0;
  *(_DWORD *)(self + 400) = 0;
  *(_DWORD *)(self + 412) = 0;
  v2 = (_DWORD *)operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  *(_DWORD *)(self + 416) = (int)v3;
  sub_41C7A0((int)v3, 1);
  sub_41C760(*(_DWORD *)(self + 416), aSoundsDialogue_0);
  sub_41CA40(*(_DWORD *)(self + 416));
  v5 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(self + 416), v5);
  *(_DWORD *)(self + 428) = -1;
  *(_DWORD *)(self + 472) = -1;
  *(_DWORD *)(self + 436) = 0;
  *(_DWORD *)(self + 440) = 0;
  *(_DWORD *)(self + 444) = 0;
  *(_DWORD *)(self + 448) = 0;
  *(_DWORD *)(self + 452) = 0;
  *(_DWORD *)(self + 456) = 0;
  *(_DWORD *)(self + 460) = 0;
  *(_DWORD *)(self + 468) = 0;
  *(_DWORD *)(self + 464) = 0;
  *(_DWORD *)(self + 28) = 1061459977;
  return self;
}
