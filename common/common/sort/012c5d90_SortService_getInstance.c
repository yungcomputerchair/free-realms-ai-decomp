// addr: 0x012c5d90
// name: SortService_getInstance
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * SortService_getInstance(void) */

void * SortService_getInstance(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates the global SortService singleton and initializes its vtable.
                       Evidence is the DAT_01cbd698 global check, Mem_Alloc(4), and assignment of
                       SortService::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166eacb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd698 == (undefined4 *)0x0) {
    DAT_01cbd698 = Mem_Alloc(4);
    if (DAT_01cbd698 == (undefined4 *)0x0) {
      DAT_01cbd698 = (undefined4 *)0x0;
    }
    else {
      *DAT_01cbd698 = SortService::vftable;
    }
  }
  ExceptionList = local_c;
  return DAT_01cbd698;
}

