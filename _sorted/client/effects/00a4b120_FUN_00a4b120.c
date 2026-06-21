// addr: 0x00a4b120
// name: FUN_00a4b120
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00a4b120(void)

{
  uint uVar1;
  int iVar2;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_015b4e7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  iVar2 = 0;
  local_4 = 0;
  do {
    local_14[0] = iVar2;
    FUN_00a47cc0(local_14);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  local_4 = 0xffffffff;
  FUN_00a49d60(uVar1);
  ExceptionList = local_c;
  return;
}

