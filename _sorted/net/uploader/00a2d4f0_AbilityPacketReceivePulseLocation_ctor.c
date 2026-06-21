// addr: 0x00a2d4f0
// name: AbilityPacketReceivePulseLocation_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AbilityPacketReceivePulseLocation_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a AbilityPacketReceivePulseLocation ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b1598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAbilityPacket_ctor_subop(param_1,0x10);
  *param_1 = AbilityPacketReceivePulseLocation::vftable;
  ExceptionList = local_c;
  return param_1;
}

