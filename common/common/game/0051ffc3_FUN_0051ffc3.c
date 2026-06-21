// addr: 0x0051ffc3
// name: FUN_0051ffc3
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0051ffc3(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar1 = FUN_004ce330();
  uVar2 = FUN_004cf177();
  if (uVar1 < uVar2) {
    uVar3 = FUN_00502b14(*(undefined4 *)(param_1 + 8),1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  else {
    FUN_004d08b8(*(undefined4 *)(param_1 + 8),param_1);
    FUN_0051b390(&local_c,local_c,local_8,param_2);
  }
  return;
}

