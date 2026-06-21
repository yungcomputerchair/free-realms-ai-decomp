// addr: 0x012da570
// name: FUN_012da570
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_012da570(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **last;
  void **first;
  bool bVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PointerVector_assign(param_2,param_1,(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4));
  puVar2 = *(undefined4 **)(param_3 + 4);
  if (*(undefined4 **)(param_3 + 8) < puVar2) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)(param_3 + 8);
  if (puVar4 < *(undefined4 **)(param_3 + 4)) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar2) break;
    if (param_3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 <= *(undefined4 **)(param_3 + 4)) {
      FUN_00d83c2d();
    }
    puVar1 = puVar4 + -1;
    if (*(undefined4 **)(param_3 + 8) <= puVar1) {
      FUN_00d83c2d();
    }
    FUN_012c5e40(*puVar1);
    local_4 = 0;
    last = *(void ***)((int)param_2 + 8);
    if (last < *(void ***)((int)param_2 + 4)) {
      FUN_00d83c2d();
    }
    first = *(void ***)((int)param_2 + 4);
    if (*(void ***)((int)param_2 + 8) < first) {
      FUN_00d83c2d();
    }
    local_4 = 0xffffffff;
    PointerVector_sortRange(param_2,first,param_2,last);
    bVar3 = puVar4 <= *(undefined4 **)(param_3 + 4);
    puVar4 = puVar1;
    if (bVar3) {
      FUN_00d83c2d();
    }
  }
  ExceptionList = local_c;
  return 1;
}

