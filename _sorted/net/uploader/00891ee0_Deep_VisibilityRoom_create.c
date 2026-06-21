// addr: 0x00891ee0
// name: Deep_VisibilityRoom_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * Deep_VisibilityRoom_create(void) */

void * Deep_VisibilityRoom_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a Deep::VisibilityRoom object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015795bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x160);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Deep_VisibilityRoom_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

