// addr: 0x0139bd30
// name: FUN_0139bd30
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0139bd30(void * arg1, void * arg2, void * arg3, void * arg4) */

void FUN_0139bd30(void *arg1,void *arg2,void *arg3,void *arg4)

{
  int *piVar1;
  int in_ECX;
  int elementId_;
  void **ppvVar2;
  void **ppvVar3;
  
                    /* Converts/extracts ids from the first three arguments, obtains an object
                       through FUN_01357a00, and invokes its virtual method at offset 0x16c with the
                       fourth argument. The exact class and operation are not identifiable from this
                       context. */
  arg3 = (void *)PlayElement_getId();
  ppvVar3 = &arg3;
  ppvVar2 = &arg2;
  IntToObjectTree_findOrCreateSlot(&arg1);
  IntKeyBufferMap_findOrInsert(ppvVar2);
  FUN_0042c155(ppvVar3);
  piVar1 = find_play_element_in_maps(*(void **)(in_ECX + 0x30),elementId_);
  (**(code **)(*piVar1 + 0x16c))(arg4);
  return;
}

