// addr: 0x0129d2c0
// name: RuleSetIndexMap_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RuleSetIndexMap_tempDtor(void) */

void RuleSetIndexMap_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for a RuleSetDB index map object on the
                       stack. It stack-protects a local address and calls RuleSetIndexMap_clear. */
  puStack_8 = &LAB_0166abfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RuleSetIndexMap_clear(in_ECX + 4);
  ExceptionList = puStack_8;
  return;
}

