// addr: 0x00a2d270
// name: AbilityPacketRequestAbilityDefinition_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AbilityPacketRequestAbilityDefinition_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a AbilityPacketRequestAbilityDefinition ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b1438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAbilityPacket_ctor_subop(param_1,0xc);
  *param_1 = AbilityPacketRequestAbilityDefinition::vftable;
  param_1[3] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

