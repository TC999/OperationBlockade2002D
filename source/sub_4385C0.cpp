//----- (004385C0) --------------------------------------------------------
int __thiscall sub_4385C0(int this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  float v5; // [esp+0h] [ebp-20h]

  sub_401270((_DWORD *)this);
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 488) = 0;
  *(_DWORD *)(this + 492) = 0;
  *(_DWORD *)(this + 496) = 0;
  *(_BYTE *)(this + 500) = 1;
  *(_DWORD *)this = &off_49951C;
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 412) = 0;
  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  *(_DWORD *)(this + 416) = v3;
  sub_41C7A0((int)v3, 1);
  sub_41C760(*(_DWORD *)(this + 416), aSoundsDialogue_0);
  sub_41CA40(*(_DWORD *)(this + 416));
  v5 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(this + 416), v5);
  *(_DWORD *)(this + 428) = -1;
  *(_DWORD *)(this + 472) = -1;
  *(_DWORD *)(this + 436) = 0;
  *(_DWORD *)(this + 440) = 0;
  *(_DWORD *)(this + 444) = 0;
  *(_DWORD *)(this + 448) = 0;
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 456) = 0;
  *(_DWORD *)(this + 460) = 0;
  *(_DWORD *)(this + 468) = 0;
  *(_DWORD *)(this + 464) = 0;
  *(_DWORD *)(this + 28) = 1061459977;
  return this;
}
