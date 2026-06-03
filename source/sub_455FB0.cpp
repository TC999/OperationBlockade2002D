//----- (00455FB0) --------------------------------------------------------
char __cdecl sub_455FB0(float *self, int a2)
{
  if ( (float *)sub_408F30((_DWORD *)dword_520970) == self )
  {
    sub_401450((_DWORD *)self);
    sub_4014C0(self, 1.5707964, 0.0, 0.0);
    sub_401480(self, 0.0, 0.0, 9000.0);
  }
  return sub_428620((_DWORD *)self, a2);
}
