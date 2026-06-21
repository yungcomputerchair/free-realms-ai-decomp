// addr: 0x01418d40
// name: FUN_01418d40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01418d40(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  puStack_8 = &LAB_0169350e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = AttributeModifier::vftable;
  param_1[2] = AttributeModifier::vftable;
  local_4 = 2;
  PlayElement_detachFromParent(param_1);
  local_4._0_1_ = 1;
  FUN_01385460(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  PlayElement_dtor(param_1);
  ExceptionList = local_c;
  return;
}

