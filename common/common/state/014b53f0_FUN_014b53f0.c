// addr: 0x014b53f0
// name: FUN_014b53f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b53f0(int *param_1,void *param_2)

{
  void *stream;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  
                    /* Deserializes a state/message record by reading three integer fields at
                       this+0xc, +0x10, and +0x14 after the common FUN_013b2530 gate. No class
                       identity is visible in this context. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  bVar1 = MatchCommand_deserializeWithCommonFields(param_1,stream);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(stream,param_1 + 3);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(stream,param_1 + 4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(stream,param_1 + 5);
        uVar3 = extraout_var_02;
        if (bVar1) {
          iVar2 = (**(code **)(*param_1 + 0x14))(stream);
          return iVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

