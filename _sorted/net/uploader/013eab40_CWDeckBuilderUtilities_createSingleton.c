// addr: 0x013eab40
// name: CWDeckBuilderUtilities_createSingleton
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWDeckBuilderUtilities_createSingleton(void) */

void CWDeckBuilderUtilities_createSingleton(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWDeckBuilderUtilities singleton into global
                       DAT_01cbd6a8. Constructor callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168e84b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x5c);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    DAT_01cbd6a8 = 0;
  }
  else {
    DAT_01cbd6a8 = CWDeckBuilderUtilities_ctor(uVar1);
  }
  ExceptionList = local_c;
  return;
}

