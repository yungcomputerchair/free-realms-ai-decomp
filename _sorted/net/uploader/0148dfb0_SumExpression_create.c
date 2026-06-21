// addr: 0x0148dfb0
// name: SumExpression_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * SumExpression_create(void) */

void * SumExpression_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a SumExpression, returning null on allocation
                       failure. Evidence is the SumExpression_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SumExpression_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

