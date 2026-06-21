// addr: 0x007bd400
// name: SoundControlDefinition_initDefaults
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void SoundControlDefinition_initDefaults(void * control) */

void __fastcall SoundControlDefinition_initDefaults(void *control)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_017649d4;
                    /* Initializes the embedded sound-control/default playback fields used by
                       SoundControlDefinition and ActorSoundEmitterDefinition. Evidence: only writes
                       fixed defaults and is called from constructors that install
                       SoundControlDefinition::vftable or ActorSoundEmitterDefinition::vftable. */
  uVar1 = _DAT_0175b420;
  *(undefined4 *)((int)control + 0x18) = _DAT_017efbd4;
  *(undefined4 *)control = 1;
  *(undefined4 *)((int)control + 4) = 0;
  *(undefined4 *)((int)control + 8) = 0;
  *(undefined4 *)((int)control + 0xc) = 1;
  *(undefined4 *)((int)control + 0x10) = 500;
  *(undefined4 *)((int)control + 0x14) = uVar2;
  *(undefined4 *)((int)control + 0x1c) = uVar1;
  *(undefined4 *)((int)control + 0x20) = 0;
  *(undefined4 *)((int)control + 0x24) = uVar1;
  *(undefined4 *)((int)control + 0x28) = 0;
  *(undefined4 *)((int)control + 0x2c) = uVar2;
  *(undefined4 *)((int)control + 0x30) = 0;
  *(undefined4 *)((int)control + 0x34) = 0;
  *(undefined4 *)((int)control + 0x38) = uVar1;
  *(undefined1 *)((int)control + 0x3c) = 1;
  return;
}

