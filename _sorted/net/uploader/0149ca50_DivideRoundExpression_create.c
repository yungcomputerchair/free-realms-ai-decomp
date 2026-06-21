// addr: 0x0149ca50
// name: DivideRoundExpression_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * DivideRoundExpression_create(void) */

void * DivideRoundExpression_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x28 bytes and constructs a DivideRoundExpression using its
                       constructor helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DivideRoundExpression_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

