// addr: 0x012e4410
// name: FUN_012e4410
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012e4410(void)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167220b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  if (DAT_01cbd764 == 0) {
    local_10 = Mem_Alloc(0x2c);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_01cbd764 = 0;
    }
    else {
      DAT_01cbd764 = PreferencesManager_ctor(uVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

