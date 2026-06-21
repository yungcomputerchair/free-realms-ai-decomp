// addr: 0x012f6b00
// name: FUN_012f6b00
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012f6b00(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  void *destPtr;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint extraout_EDX;
  uint uVar5;
  uint uStack_38;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_016749c0;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  uVar5 = param_2;
  puVar1 = &uStack_38;
  if (0x3fffffff < param_2) {
    FUN_00423ee8();
    uVar5 = extraout_EDX;
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar2 < uVar5) {
    destPtr = (void *)FUN_00416f41(uVar5);
    local_8 = 0;
    local_18 = destPtr;
    puVar3 = (undefined4 *)FUN_0041f5d2(local_20);
    puVar4 = (undefined4 *)FUN_0041f3a1(local_28);
    STLVector_dword_moveRange
              ((void *)*puVar4,(void *)puVar4[1],(void *)*puVar3,(void *)puVar3[1],destPtr);
    local_8 = 0xffffffff;
    if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    *(void **)(param_1 + 0xc) = (void *)((int)destPtr + param_2 * 4);
    *(void **)(param_1 + 8) = destPtr;
    *(void **)(param_1 + 4) = destPtr;
  }
  ExceptionList = local_10;
  return;
}

