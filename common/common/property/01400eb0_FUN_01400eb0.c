// addr: 0x01400eb0
// name: FUN_01400eb0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_01400eb0(void *param_1,uint *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  void *local_4;
  
                    /* Serializes an unknown small record: two integers, two byte flags, one string,
                       and a vector<int>. Evidence is Serializer_appendInteger,
                       Serializer_appendString, and STLVector_int_serialize; no class-identifying
                       string is present. */
  bVar1 = Serializer_appendInteger(param_1,*param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Serializer_appendInteger(param_1,param_2[1]);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Serializer_appendInteger(param_1,(uint)(byte)param_2[2]);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Serializer_appendInteger(param_1,(uint)(byte)param_2[3]);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Serializer_appendString(param_1,param_2 + 4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            local_4 = param_1;
            iVar2 = STLVector_int_serialize(&local_4,(int)(param_2 + 0xb));
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

