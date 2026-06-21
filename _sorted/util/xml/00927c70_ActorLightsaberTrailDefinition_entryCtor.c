// addr: 0x00927c70
// name: ActorLightsaberTrailDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorLightsaberTrailDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a lightsaber-trail definition entry and stores its key at offset
                       0xc8. Evidence: called by the lightsaber trail insertion helper before link
                       insertion. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158fbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorLightsaberTrailDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 200) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

