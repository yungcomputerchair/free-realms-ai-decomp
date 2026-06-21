// addr: 0x014f8f80
// name: Guild_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * Guild_create(void) */

void * Guild_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a Guild, returning null on allocation failure.
                       Evidence is the Guild_ctor or vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2f9b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x54);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)Guild_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

