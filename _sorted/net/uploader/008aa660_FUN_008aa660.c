// addr: 0x008aa660
// name: FUN_008aa660
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_008aa660(void) */

void FUN_008aa660(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a global 0x908-byte asset/display manager object at
                       DAT_01be4904. Specific class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e86b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01be4904 == (void *)0x0) {
    this = Mem_Alloc(0x908);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01be4904 = (void *)0x0;
    }
    else {
      DAT_01be4904 = OnlineHelpWindow_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

