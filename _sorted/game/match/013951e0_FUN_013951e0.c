// addr: 0x013951e0
// name: FUN_013951e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_013951e0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int unaff_EBP;
  int *piVar4;
  int *piStack_20;
  int *local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Selects the first candidate id from a virtual list for which the object's
                       virtual predicate at +0xdc accepts it, skipping the first/default candidate.
                       Returns the accepted id or 0. */
  puStack_8 = &LAB_016845a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x114))(&local_1c,3,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  if ((piStack_20 != (int *)0x0) && ((int)local_1c - (int)piStack_20 >> 2 != 0)) {
    piVar3 = (int *)FUN_01392dd0(0);
    unaff_EBP = *piVar3;
  }
  piVar3 = local_1c;
  if (local_1c < piStack_20) {
    FUN_00d83c2d();
  }
  piVar4 = piStack_20;
  if (local_1c < piStack_20) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar3) break;
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (local_1c <= piVar4) {
      FUN_00d83c2d();
    }
    iVar1 = *piVar4;
    if (iVar1 != unaff_EBP) {
      EvaluationEnvironment_setActionReturn(iVar1);
      cVar2 = (**(code **)(*param_1 + 0xdc))(iVar1,local_4,1);
      if (cVar2 == '\x01') {
        local_c = (void *)0xffffffff;
        if (piStack_20 == (int *)0x0) {
          ExceptionList = local_14;
          return iVar1;
        }
                    /* WARNING: Subroutine does not return */
        _free(piStack_20);
      }
    }
    if (local_1c <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  local_c = (void *)0xffffffff;
  if (piStack_20 == (int *)0x0) {
    ExceptionList = local_14;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_20);
}

