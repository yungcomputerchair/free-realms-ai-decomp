// addr: 0x012c0270
// name: TradeService_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TradeService_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TradeService by installing TradeService::vftable and
                       initializing its embedded red-black tree/container member. The vtable write
                       names the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e22b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = TradeService::vftable;
  FUN_012c0110(uVar1);
  ExceptionList = local_c;
  return param_1;
}

