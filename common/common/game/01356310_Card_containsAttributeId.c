// addr: 0x01356310
// name: Card_containsAttributeId
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_containsAttributeId(void * this, int attributeId_) */

bool __thiscall Card_containsAttributeId(void *this,int attributeId_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Scans a vector of integer IDs stored on a Card-like object and returns true
                       if the requested id is present; used by Card_calculateAttribute. */
  piVar1 = *(int **)((int)this + 0x1b8);
  if (piVar1 < *(int **)((int)this + 0x1b4)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0x1b4);
  if (*(int **)((int)this + 0x1b8) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != attributeId_)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)((int)this + 0x1b8);
  if (piVar1 < *(int **)((int)this + 0x1b4)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffe50) {
    FUN_00d83c2d();
  }
  return piVar2 != piVar1;
}

