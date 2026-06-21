// addr: 0x013a8080
// name: FUN_013a8080
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013a8080(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint extraout_EDX;
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
  puStack_c = &LAB_01686040;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  uVar6 = param_2;
  puVar1 = &uStack_38;
  if (0x3fffffff < param_2) {
    FUN_013a6680();
    uVar6 = extraout_EDX;
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar2 < uVar6) {
    iVar3 = FUN_013a4960(uVar6);
    local_8 = 0;
    local_18 = iVar3;
    puVar4 = (undefined4 *)FUN_013a5240(local_20);
    puVar5 = (undefined4 *)FUN_013a5210(local_28);
    StdVectorDword_uninitializedMoveRangeEx(*puVar5,puVar5[1],*puVar4,puVar4[1],iVar3);
    local_8 = 0xffffffff;
    if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(uint *)(param_1 + 0xc) = iVar3 + param_2 * 4;
    *(int *)(param_1 + 8) = iVar3;
    *(int *)(param_1 + 4) = iVar3;
  }
  ExceptionList = local_10;
  return;
}

