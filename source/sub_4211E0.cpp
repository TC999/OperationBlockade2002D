//----- (004211E0) --------------------------------------------------------
int __thiscall sub_4211E0(const char **this, char a2)
{
  unsigned int v3; // kr04_4
  char *v5; // [esp+Ch] [ebp-4h]

  v3 = strlen(this[2]) + 1;
  if ( (int)(v3 + 1) > (int)this[1] )
  {
    v5 = strcpy((char *)operator new(v3 + 1), this[2]);
    sub_4885A6((LPVOID)this[2]);
    this[2] = v5;
    this[1] = (const char *)(v3 + 1);
  }
  this[2][v3 - 1] = a2;
  this[2][v3] = 0;
  return sub_421AB0(*this, this[2], this + 6, this + 7);
}
