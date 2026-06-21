// addr: 0x013d5810
// name: CollectionItem_create
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CollectionItem_create(void) */

void * CollectionItem_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x30 bytes and constructs a CollectionItem, returning null on
                       allocation failure. Evidence is Mem_Alloc(0x30) followed by
                       CollectionItem_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b89b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x30);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)CollectionItem_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

