// addr: 0x0140c310
// name: NetworkCommand_create
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkCommand_create(void) */

void * NetworkCommand_create(void)

{
  void *pvVar1;
  void *extraout_EAX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a base NetworkCommand without registering it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691f3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    NetworkCommand_ctor(pvVar1);
    pvVar1 = extraout_EAX;
  }
  ExceptionList = local_c;
  return pvVar1;
}

