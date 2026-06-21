// addr: 0x009d3620
// name: FUN_009d3620
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_009d3620(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a4bd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_009d2b70(param_2,1);
  }
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = param_2;
  if (iVar2 < param_2) {
    iVar3 = iVar2 * 0x50;
    param_2 = param_2 - iVar2;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
      iVar3 = iVar3 + 0x50;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar4 = &DAT_01bc2660;
        puVar1 = puVar1 + 4;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return;
}

