// addr: 0x014b4430
// name: FUN_014b4430
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b4430(int *param_1,void *param_2)

{
  void *stream;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  
                    /* Deserializes a small state/message object: runs the base pre-read hook, calls
                       FUN_013b2530 on the stream/context, reads one integer into this+0xc, then
                       runs the post-read hook. No class-identifying strings were present. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = MatchCommand_deserializeWithCommonFields(param_1,stream);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(stream,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(stream);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

