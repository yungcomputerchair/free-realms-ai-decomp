// addr: 0x00927620
// name: ActorRumbleEffectDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall ActorRumbleEffectDefinition_ctor(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorRumbleEffectDefinition with AssetRequester state and
                       default rumble parameters. Evidence: direct
                       ActorRumbleEffectDefinition::vftable assignment after base construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158faa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  param_1[0x24] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0x25] = param_2;
  uVar1 = _DAT_0175b420;
  param_1[0x27] = _DAT_0175b420;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  param_1[0x2a] = DAT_017eb904;
  param_1[0x2b] = 0;
  uVar1 = DAT_017eb6dc;
  *param_1 = ActorRumbleEffectDefinition::vftable;
  param_1[0x24] = ActorRumbleEffectDefinition::vftable;
  param_1[0x26] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

