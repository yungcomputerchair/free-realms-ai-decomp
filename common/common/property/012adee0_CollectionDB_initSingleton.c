// addr: 0x012adee0
// name: CollectionDB_initSingleton
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionDB_initSingleton(void) */

void CollectionDB_initSingleton(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and initializes the global CollectionDB singleton at
                       DAT_01cbd684. It allocates 0x10 bytes and constructs the object with 012add30
                       if the singleton is not already present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166cb1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd684 == 0) {
    local_10 = Mem_Alloc(0x10);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd684 = 0;
    }
    else {
      DAT_01cbd684 = CollectionDB_ctor(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

