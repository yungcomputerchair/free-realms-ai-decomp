// addr: 0x0149d8c0
// name: AddExpression_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * AddExpression_create(void) */

void * AddExpression_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x24 bytes and constructs a AddExpression using its constructor
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3fcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AddExpression_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

