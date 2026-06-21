// addr: 0x00832e70
// name: FUN_00832e70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00832e70(int doCleanup_) */

void __cdecl FUN_00832e70(int doCleanup_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-frame wrapper that conditionally calls FUN_0082ef80(0) when its
                       argument is nonzero. Purpose and owning class are unknown. */
  puStack_8 = &LAB_0156ca61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (doCleanup_ != 0) {
    GuiApp_ctor(0);
  }
  ExceptionList = local_c;
  return;
}

