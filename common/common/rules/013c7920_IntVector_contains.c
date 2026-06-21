// addr: 0x013c7920
// name: IntVector_contains
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IntVector_contains(int needle_, void * vector) */

bool __cdecl IntVector_contains(int needle_,void *vector)

{
  int *piVar1;
  int *piVar2;
  
                    /* Linearly searches an int vector's begin/end pointers and returns whether
                       needle is present, with range/assert checks around the vector metadata. */
  piVar1 = *(int **)((int)vector + 8);
  if (piVar1 < *(int **)((int)vector + 4)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)vector + 4);
  if (*(int **)((int)vector + 8) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != needle_)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)((int)vector + 8);
  if (piVar1 < *(int **)((int)vector + 4)) {
    FUN_00d83c2d();
  }
  if (vector == (void *)0x0) {
    FUN_00d83c2d();
  }
  return piVar2 != piVar1;
}

