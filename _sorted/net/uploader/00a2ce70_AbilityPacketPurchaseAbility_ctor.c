// addr: 0x00a2ce70
// name: AbilityPacketPurchaseAbility_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AbilityPacketPurchaseAbility_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a AbilityPacketPurchaseAbility ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b1228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAbilityPacket_ctor_subop(param_1,7);
  *param_1 = AbilityPacketPurchaseAbility::vftable;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}

