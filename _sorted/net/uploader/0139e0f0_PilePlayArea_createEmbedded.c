// addr: 0x0139e0f0
// name: PilePlayArea_createEmbedded
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_0139e0f0(void) */

void * PilePlayArea_createEmbedded(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x48-byte object via FUN_0139d3d0 and returns the embedded
                       subobject at +8 when construction succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168549b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x48);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PilePlayArea_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (void *)((int)pvVar1 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

