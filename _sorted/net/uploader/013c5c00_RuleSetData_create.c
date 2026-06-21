// addr: 0x013c5c00
// name: RuleSetData_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * RuleSetData_create(void) */

void * RuleSetData_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a RuleSetData object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01689b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = RuleSetData_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

