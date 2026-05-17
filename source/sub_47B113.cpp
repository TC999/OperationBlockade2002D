//----- (0047B113) --------------------------------------------------------
float *__usercall sub_47B113@<eax>(float *result@<eax>, float *a2@<ecx>)
{
  *a2 = *result * *result + result[1] * result[1] + result[2] * result[2];
  a2[1] = (result[4] + *result) * result[1] + result[5] * result[2];
  a2[2] = (result[8] + *result) * result[2] + result[5] * result[1];
  a2[4] = result[5] * result[5] + result[4] * result[4] + result[1] * result[1];
  a2[5] = (result[8] + result[4]) * result[5] + result[2] * result[1];
  a2[8] = result[8] * result[8] + result[5] * result[5] + result[2] * result[2];
  return result;
}
