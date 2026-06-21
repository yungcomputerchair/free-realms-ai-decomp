// addr: 0x0149b380
// name: EqualToExpression_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EqualToExpression_create(void) */

void * EqualToExpression_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x24 bytes and constructs a EqualToExpression using its constructor
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a388b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = EqualToExpression_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

