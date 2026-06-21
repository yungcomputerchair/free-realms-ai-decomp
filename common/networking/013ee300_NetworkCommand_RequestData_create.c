// addr: 0x013ee300
// name: NetworkCommand_RequestData_create
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkCommand_RequestData_create(void) */

void * NetworkCommand_RequestData_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a NetworkCommand_RequestData without registering it.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ee4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = NetworkCommand_RequestData_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

