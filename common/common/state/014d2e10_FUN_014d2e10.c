// addr: 0x014d2e10
// name: FUN_014d2e10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014d2e10(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac75b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar2 = Mem_Alloc(0xc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_012fa910();
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_01300680(2);
  *(undefined4 *)(iVar1 + 8) = param_2;
  ExceptionList = local_c;
  return;
}

