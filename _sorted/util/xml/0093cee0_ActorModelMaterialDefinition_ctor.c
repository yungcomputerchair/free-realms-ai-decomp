// addr: 0x0093cee0
// name: ActorModelMaterialDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ActorModelMaterialDefinition_ctor(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorModelMaterialDefinition, including AssetRequester state,
                       material name string, parameter list, and defaults. Evidence: direct
                       ActorModelMaterialDefinition::vftable and
                       SoeUtil::List<ModelMaterialParameter> vtable assignments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01592469;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SensoryEffectDefinition_ctor(param_1,param_3);
  param_1[10] = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  param_1[0xb] = param_2;
  *param_1 = ActorModelMaterialDefinition::vftable;
  param_1[10] = ActorModelMaterialDefinition::vftable;
  param_1[0xc] = SoeUtil::IString<char>::vftable;
  param_1[0xd] = &DAT_01be48fc;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = SoeUtil::List<ModelMaterialParameter,-1>::vftable;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = DAT_017649d4;
  *(undefined1 *)(param_1 + 0x17) = 0;
  ExceptionList = local_c;
  return param_1;
}

