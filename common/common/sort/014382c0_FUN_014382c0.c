// addr: 0x014382c0
// name: FUN_014382c0
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014382c0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  uint uVar6;
  uint uStack_38;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01697280;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  if (*(int *)(param_2 + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar6 != 0) {
    local_18 = param_1;
    puVar1 = &uStack_38;
    if (0x3fffffff < uVar6) {
      FUN_012b4030();
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    iVar2 = FUN_012b0ab0(uVar6);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = iVar2;
    *(uint *)(param_1 + 0xc) = iVar2 + uVar6 * 4;
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_012c60b0(local_20);
    puVar4 = (undefined4 *)FUN_012c6080(local_28);
    ppvVar5 = StatePointerVector_uninitializedCopyRange
                        ((void *)*puVar4,(void **)puVar4[1],(void *)*puVar3,(void **)puVar3[1],
                         *(void ***)(param_1 + 4));
    *(void ***)(param_1 + 8) = ppvVar5;
  }
  ExceptionList = local_10;
  return param_1;
}

