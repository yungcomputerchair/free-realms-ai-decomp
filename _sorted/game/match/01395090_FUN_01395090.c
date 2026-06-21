// addr: 0x01395090
// name: FUN_01395090
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool anyVirtualCandidatePassesPredicate(void * thisObj) */

bool __fastcall anyVirtualCandidatePassesPredicate(void *thisObj)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puStack_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary list of candidates via virtual method +0x114 and returns
                       true if any candidate passes virtual predicate +0xdc with mode 1. */
  puStack_8 = &LAB_01684578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  (**(code **)(*(int *)thisObj + 0x114))(&local_1c,3,DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  puVar3 = local_1c;
  if (local_1c < puStack_20) {
    FUN_00d83c2d();
  }
  puVar5 = puStack_20;
  uVar2 = local_4;
  if (local_1c < puStack_20) {
    FUN_00d83c2d();
    uVar2 = local_4;
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar3) {
      local_c = (void *)0xffffffff;
      if (puStack_20 == (undefined4 *)0x0) {
        ExceptionList = local_14;
        return false;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_20);
    }
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (local_1c <= puVar5) {
      FUN_00d83c2d();
    }
    uVar1 = *puVar5;
    EvaluationEnvironment_setActionReturn(uVar1);
    cVar4 = (**(code **)(*(int *)thisObj + 0xdc))(uVar1,uVar2,1);
    if (cVar4 == '\x01') break;
    if (local_1c <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  local_c = (void *)0xffffffff;
  if (puStack_20 == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_20);
}

