// addr: 0x01383960
// name: FUN_01383960
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_01383960(void)

{
  char cVar1;
  bool bVar2;
  int needle_;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  cVar1 = FUN_013833c0(0xd,local_18);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_01300cd0();
    ExceptionList = local_c;
    return false;
  }
  needle_ = PlayElement_getId();
  bVar2 = ValueData_containsInt(local_18,needle_);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return bVar2;
}

