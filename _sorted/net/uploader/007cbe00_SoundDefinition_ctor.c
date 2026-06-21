// addr: 0x007cbe00
// name: SoundDefinition_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoundDefinition_ctor(void * this, void * resource) */

void * __thiscall SoundDefinition_ctor(void *this,void *resource)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SoundDefinition asset, clears its common asset slot, stores a
                       resource/context pointer, and installs the SoundDefinition vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01561258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined ***)this = SoundDefinition::vftable;
  *(void **)((int)this + 0x2c) = resource;
  ExceptionList = local_c;
  return this;
}

