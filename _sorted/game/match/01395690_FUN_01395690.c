// addr: 0x01395690
// name: FUN_01395690
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01395690(int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_30;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_01684668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x34))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  piVar4 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  piVar5 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar5 == piVar4) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar5 <= local_1c) {
      FUN_00d83c2d();
    }
    piVar1 = piVar5 + -1;
    if (local_18 <= piVar1) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)*piVar1;
    if ((piVar2 != (int *)0x0) && (piVar2 != piStack_30)) {
      (**(code **)(*piVar2 + 0x150))();
    }
    bVar3 = piVar5 <= local_1c;
    piVar5 = piVar1;
    if (bVar3) {
      FUN_00d83c2d();
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

