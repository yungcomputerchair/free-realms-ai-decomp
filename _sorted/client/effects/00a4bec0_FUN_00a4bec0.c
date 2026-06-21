// addr: 0x00a4bec0
// name: FUN_00a4bec0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a4bec0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b51d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_00a4ae00(param_2,1);
  }
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = param_2;
  if (iVar1 < param_2) {
    iVar3 = iVar1 * 0x24;
    param_2 = param_2 - iVar1;
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
      iVar3 = iVar3 + 0x24;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = SoeUtil::Array<OverHeadElement*,0,1>::vftable;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = SoeUtil::Array<OverHeadElement*,4,1>::vftable;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return;
}

