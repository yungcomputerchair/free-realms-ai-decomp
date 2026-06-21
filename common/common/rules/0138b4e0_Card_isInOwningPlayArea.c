// addr: 0x0138b4e0
// name: Card_isInOwningPlayArea
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Card_isInOwningPlayArea(int param_1)

{
  void *objectPtr;
  int iVar1;
  
                    /* Checks whether the card/element is currently in the play area belonging to
                       the recorded owner/player. */
  if (*(int *)(param_1 + 0x40) != 0) {
    objectPtr = PlayArea_findPlayerElementById(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x40));
    if (objectPtr != (void *)0x0) {
      iVar1 = unknown_getField30(objectPtr);
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}

