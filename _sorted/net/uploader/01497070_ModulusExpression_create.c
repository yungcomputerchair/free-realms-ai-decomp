// addr: 0x01497070
// name: ModulusExpression_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * ModulusExpression_create(void) */

void * ModulusExpression_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a ModulusExpression, returning null on allocation
                       failure. Evidence is the ModulusExpression_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2c0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ModulusExpression_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

