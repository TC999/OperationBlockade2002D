//----- (00471714) --------------------------------------------------------
void __cdecl sub_471714(int a1)
{
  char v1[200]; // [esp+0h] [ebp-C8h] BYREF

  (*(void (__cdecl **)(int, char *))(*(_DWORD *)a1 + 12))(a1, v1);
  sub_46D8FD(0, "LoadJPG: %s", v1);
}
