// addr: 0x013d92e0
// name: FUN_013d92e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013d92e0(int *param_1,void *param_2)

{
  void *deserializer;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  int unaff_ESI;
  
                    /* Deserializer wrapper: begins a field, deserializes a nested object with
                       FUN_013b2910, then reads two or three integer fields depending on version
                       before finalizing. Owning class is not evident. */
  deserializer = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = LobbyCommand_deserialize(param_1,deserializer);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(deserializer,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(deserializer,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          if (1 < unaff_ESI) {
            bVar1 = Deserializer_readInteger(deserializer,param_1 + 4);
            uVar3 = extraout_var_03;
            if (!bVar1) goto LAB_013d92fb;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
          return iVar2;
        }
      }
    }
  }
LAB_013d92fb:
  return (uint)uVar3 << 8;
}

