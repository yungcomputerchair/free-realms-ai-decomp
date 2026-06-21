// addr: 0x012b8f80
// name: ArchetypeDB_getInstance
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchetypeDB_getInstance(void) */

void ArchetypeDB_getInstance(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global ArchetypeDB singleton if
                       DAT_01cbd688 is null. The constructor initializes DB structures and type id
                       0x9f3. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d87b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd688 == 0) {
    local_10 = Mem_Alloc(0x40);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd688 = 0;
    }
    else {
      DAT_01cbd688 = ArchetypeDB_ctor(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

