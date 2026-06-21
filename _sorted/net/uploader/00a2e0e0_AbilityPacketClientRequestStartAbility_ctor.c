// addr: 0x00a2e0e0
// name: AbilityPacketClientRequestStartAbility_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AbilityPacketClientRequestStartAbility_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a AbilityPacketClientRequestStartAbility ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b17a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAbilityPacket_ctor_subop(param_1,10);
  *param_1 = AbilityPacketClientRequestStartAbility::vftable;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[6] = DAT_01be6870;
  param_1[7] = DAT_01be6874;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  ExceptionList = local_c;
  return param_1;
}

