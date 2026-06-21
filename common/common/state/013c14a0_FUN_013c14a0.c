// addr: 0x013c14a0
// name: FUN_013c14a0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013c14a0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01441e20(this);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readString(this,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (1 < iStack_4) {
          bVar1 = Deserializer_readString(this,param_1 + 8);
          uVar3 = extraout_var_02;
          if (!bVar1) goto LAB_013c14be;
          bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff0);
          uVar3 = extraout_var_03;
          if (!bVar1) goto LAB_013c14be;
          *(bool *)(param_1 + 0xf) = unaff_EDI != 0;
        }
        if (2 < iStack_4) {
          bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
          uVar3 = extraout_var_04;
          if (!bVar1) goto LAB_013c14be;
          *(bool *)((int)param_1 + 0x3d) = unaff_ESI != 0;
        }
        iVar2 = (**(code **)(*param_1 + 0x14))(this);
        return iVar2;
      }
    }
  }
LAB_013c14be:
  return (uint)uVar3 << 8;
}

