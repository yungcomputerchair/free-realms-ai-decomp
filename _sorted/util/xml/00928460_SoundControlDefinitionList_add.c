// addr: 0x00928460
// name: SoundControlDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundControlDefinitionList_add(uint key_) */

void __thiscall SoundControlDefinitionList_add(void *this,uint key_)

{
                    /* Wrapper that adds a SoundControlDefinition entry by forwarding the key to the
                       insertion helper. Evidence: only prepares a local key and calls 009283e0. */
  SoundControlDefinitionList_insert((void *)((int)this + 0x2c),&stack0xfffffffc,&key_,(uint *)key_);
  return;
}

