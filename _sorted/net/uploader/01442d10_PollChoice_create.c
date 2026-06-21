// addr: 0x01442d10
// name: PollChoice_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * PollChoice_create(void) */

void * PollChoice_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a PollChoice, returning null on allocation failure.
                       Evidence is the PollChoice_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016990cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PollChoice_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

