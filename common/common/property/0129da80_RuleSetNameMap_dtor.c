// addr: 0x0129da80
// name: RuleSetNameMap_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetNameMap_dtor(int mapOwner) */

void __fastcall RuleSetNameMap_dtor(int mapOwner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor wrapper for a RuleSetDB name-map member at this+0xc. It computes
                       the member address and invokes RuleSetNameMap_clear under SEH protection. */
  puStack_8 = &LAB_0166af36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RuleSetNameMap_clear(mapOwner + 0x10);
  ExceptionList = puStack_8;
  return;
}

