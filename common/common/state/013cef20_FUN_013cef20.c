// addr: 0x013cef20
// name: FUN_013cef20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013cef20(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  int iVar2;
  undefined4 extraout_EDX;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_10;
  void *local_c [2];
  int iStack_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  this = param_2;
  local_c[0] = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readString(this,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(this,param_1 + 8);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 0xf);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(this,param_1 + 0x16);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(this,(int *)&stack0xffffffe8);
            uVar3 = extraout_var_04;
            if (bVar1) {
              *(bool *)(param_1 + 0x1d) = unaff_EDI != 0;
              bVar1 = StdVectorPairBool_deserialize
                                (&stack0xffffffec,
                                 (void *)CONCAT31((int3)((uint)extraout_EDX >> 8),unaff_EDI != 0));
              uVar3 = extraout_var_05;
              if (bVar1) {
                (**(code **)(*param_1 + 0x7c))();
                if (1 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,&iStack_10);
                  uVar3 = extraout_var_06;
                  if (!bVar1) goto LAB_013cef42;
                  *(bool *)(param_1 + 0x22) = iStack_10 != 0;
                }
                if (iStack_4 < 4) {
                  bVar1 = Deserializer_readInteger(this,(int *)local_c);
                  uVar3 = extraout_var_07;
                  if (!bVar1) goto LAB_013cef42;
                }
                if (5 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,(int *)&stack0xffffffec);
                  uVar3 = extraout_var_08;
                  if (!bVar1) goto LAB_013cef42;
                  *(bool *)((int)param_1 + 0x89) = unaff_ESI != 0;
                  bVar1 = Deserializer_readInteger(this,(int *)local_c);
                  uVar3 = extraout_var_09;
                  if (!bVar1) goto LAB_013cef42;
                  *(bool *)((int)param_1 + 0x8a) = local_c[0] != (void *)0x0;
                }
                if (7 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,(int *)local_c);
                  uVar3 = extraout_var_10;
                  if (!bVar1) goto LAB_013cef42;
                  param_1[0x23] = (int)local_c[0];
                }
                if (9 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,param_1 + 0x24);
                  uVar3 = extraout_var_11;
                  if (!bVar1) goto LAB_013cef42;
                }
                iVar2 = (**(code **)(*param_1 + 0x14))(this);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_013cef42:
  return (uint)uVar3 << 8;
}

