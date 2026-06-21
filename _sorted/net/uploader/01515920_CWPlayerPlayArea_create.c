// addr: 0x01515920
// name: CWPlayerPlayArea_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWPlayerPlayArea_create(void) */

void * CWPlayerPlayArea_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWPlayerPlayArea, returning null on allocation
                       failure. Evidence is the CWPlayerPlayArea_ctor or vtable-named constructor
                       callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b72eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x58);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWPlayerPlayArea_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (void *)((int)pvVar1 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

