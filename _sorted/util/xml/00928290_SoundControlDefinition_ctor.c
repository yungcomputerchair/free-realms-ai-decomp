// addr: 0x00928290
// name: SoundControlDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SoundControlDefinition_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SoundControlDefinition derived from ActorEffectDefinition and
                       initializes its default sound-control fields. Evidence: direct
                       SoundControlDefinition::vftable assignment and call to
                       SoundControlDefinition_initDefaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158fd48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  local_4 = 0;
  *param_1 = SoundControlDefinition::vftable;
  SoundControlDefinition_initDefaults(param_1 + 0x24);
  ExceptionList = local_c;
  return param_1;
}

