// addr: 0x013ce9a0
// name: FUN_013ce9a0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool virtual_vector_contains_near_return_address(int * this) */

bool __fastcall virtual_vector_contains_near_return_address(int *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_retaddr;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls the object's virtual method at vtable offset 0x4c to fill a temporary
                       vector of ints, then returns true if any entry equals the caller return
                       address or is offset by +/-300000. The decompiler exposes the compared target
                       as unaff_retaddr, so the exact source argument is unclear. */
  puStack_8 = &LAB_0168aa08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*this + 0x4c))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  piVar3 = local_1c;
  piVar1 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
    piVar1 = local_18;
  }
  while( true ) {
    piVar2 = piVar1;
    if (piVar1 < local_1c) {
      FUN_00d83c2d();
      piVar2 = local_18;
    }
    if (piVar3 == piVar1) {
      puStack_8 = (undefined1 *)0xffffffff;
      if (local_1c == (int *)0x0) {
        ExceptionList = local_10;
        return false;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    if (piVar2 <= piVar3) {
      FUN_00d83c2d();
      piVar2 = local_18;
    }
    if (*piVar3 == unaff_retaddr) break;
    if (piVar2 <= piVar3) {
      FUN_00d83c2d();
      piVar2 = local_18;
    }
    if (*piVar3 + -300000 == unaff_retaddr) break;
    if (piVar2 <= piVar3) {
      FUN_00d83c2d();
      piVar2 = local_18;
    }
    if (*piVar3 == unaff_retaddr + -300000) break;
    if (piVar2 <= piVar3) {
      FUN_00d83c2d();
      piVar2 = local_18;
    }
    piVar3 = piVar3 + 1;
    piVar1 = piVar2;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c == (int *)0x0) {
    ExceptionList = local_10;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}

