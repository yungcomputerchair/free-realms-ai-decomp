// addr: 0x0137df10
// name: FUN_0137df10
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0137dfbf) */
/* Setting prototype: bool contains_value_from_virtual_vector(int this_, int value_) */

bool __thiscall contains_value_from_virtual_vector(void *this,int this_,int value_)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If the object pointer at this+0x10 is present, calls its virtual method at
                       vtable offset 0x38 to fill a temporary vector of ints, scans that vector for
                       value, frees the temporary buffer, and returns whether value was found. Class
                       identity is not evident from strings/callers in this context. */
  puStack_8 = &LAB_01682068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x38))
              (local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
    piVar1 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar3 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    for (; (piVar2 = local_14, piVar3 != piVar1 && (*piVar3 != this_)); piVar3 = piVar3 + 1) {
    }
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    if (piVar2 != piVar3) {
      local_4 = 0xffffffff;
      if (local_18 == (int *)0x0) {
        ExceptionList = local_c;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  local_4 = 0xffffffff;
  if (local_18 == (int *)0x0) {
    ExceptionList = local_c;
    return false;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

