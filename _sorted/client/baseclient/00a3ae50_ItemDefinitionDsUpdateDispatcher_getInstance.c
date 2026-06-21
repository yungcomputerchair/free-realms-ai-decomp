// addr: 0x00a3ae50
// name: ItemDefinitionDsUpdateDispatcher_getInstance
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ItemDefinitionDsUpdateDispatcher_getInstance(void) */

void ItemDefinitionDsUpdateDispatcher_getInstance(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the singleton
                       ItemDefinitionDsUpdateDispatcher if the global instance pointer is null. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b2f6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01be69c4 == (void *)0x0) {
    this = Mem_Alloc(0x10);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01be69c4 = (void *)0x0;
    }
    else {
      DAT_01be69c4 = ItemDefinitionDsUpdateDispatcher_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

