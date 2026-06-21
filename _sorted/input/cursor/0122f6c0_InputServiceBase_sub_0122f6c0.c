// addr: 0x0122f6c0
// name: InputServiceBase_sub_0122f6c0
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall InputServiceBase_sub_0122f6c0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a InputServiceBase sub_0122f6c0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01651268;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = Input::InputServiceBase::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  FUN_01230d30(uVar1);
  ExceptionList = local_c;
  return;
}

