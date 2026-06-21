// addr: 0x014f6930
// name: FUN_014f6930
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool contains_int_in_member_vector(int this_, int value_) */

bool __thiscall contains_int_in_member_vector(void *this,int this_,int value_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Scans the int vector stored at this+0x34..this+0x38 and returns true if value
                       is present, with debug bounds checks around the scan. No class identity is
                       evident from strings or callers in this context. */
  piVar1 = *(int **)((int)this + 0x38);
  if (piVar1 < *(int **)((int)this + 0x34)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0x34);
  if (*(int **)((int)this + 0x38) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != this_)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)((int)this + 0x38);
  if (piVar1 < *(int **)((int)this + 0x34)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffffd0) {
    FUN_00d83c2d();
  }
  return piVar2 != piVar1;
}

