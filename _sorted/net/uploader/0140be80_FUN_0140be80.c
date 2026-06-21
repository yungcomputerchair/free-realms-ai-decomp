// addr: 0x0140be80
// name: FUN_0140be80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0140be80(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691deb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0140bd40(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

