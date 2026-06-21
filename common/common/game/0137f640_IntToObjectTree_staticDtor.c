// addr: 0x0137f640
// name: IntToObjectTree_staticDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void IntToObjectTree_staticDtor(void) */

void IntToObjectTree_staticDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded global/static destructor wrapper that destroys an rb-tree
                       via StdRbTree_destroyAndFree. */
  puStack_8 = &LAB_0168231b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree((void *)(in_ECX + 4));
  ExceptionList = puStack_8;
  return;
}

