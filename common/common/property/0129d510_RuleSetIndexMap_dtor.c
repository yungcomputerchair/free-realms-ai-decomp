// addr: 0x0129d510
// name: RuleSetIndexMap_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetIndexMap_dtor(int map) */

void __fastcall RuleSetIndexMap_dtor(int map)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor wrapper for a RuleSetDB index map member at this+0xc. It forms the
                       member address, then invokes the map clear/free routine under SEH protection.
                        */
  puStack_8 = &LAB_0166ace6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RuleSetIndexMap_clear(map + 0x10);
  ExceptionList = puStack_8;
  return;
}

