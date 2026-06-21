// addr: 0x012d94c0
// name: PropertyMap_setValueForKey
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyMap_setValueForKey(undefined4 value, undefined4 key) */

void PropertyMap_setValueForKey(int value,undefined4 key)

{
  int *piVar1;
  int in_ECX;
  int *unaff_retaddr;
  
                    /* Finds or creates a map entry for the supplied key via FUN_012d8ef0 and writes
                       the value into the returned slot. This is a small associative-container
                       insertion/assignment helper. */
  piVar1 = PropertyIntMap_findOrCreateSlot((void *)(in_ECX + 0x30),&key,unaff_retaddr);
  *piVar1 = value;
  return;
}

