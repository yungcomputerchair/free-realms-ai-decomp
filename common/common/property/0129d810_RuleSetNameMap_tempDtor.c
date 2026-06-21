// addr: 0x0129d810
// name: RuleSetNameMap_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RuleSetNameMap_tempDtor(void) */

void RuleSetNameMap_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for the RuleSetDB name map variant. It only
                       stack-protects a local and calls RuleSetNameMap_clear. */
  puStack_8 = &LAB_0166ae0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RuleSetNameMap_clear(in_ECX + 4);
  ExceptionList = puStack_8;
  return;
}

