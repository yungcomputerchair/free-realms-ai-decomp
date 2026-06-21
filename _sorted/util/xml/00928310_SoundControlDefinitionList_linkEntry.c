// addr: 0x00928310
// name: SoundControlDefinitionList_linkEntry
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundControlDefinitionList_linkEntry(void * list, void * entry) */

void __thiscall SoundControlDefinitionList_linkEntry(void *this,void *list,void *entry)

{
  uint uVar1;
  
                    /* Links a SoundControlDefinition entry into list and hash bucket chains using
                       the key stored at offset 0xd8. Evidence: called by the SoundControlDefinition
                       insertion routine. */
  *(undefined4 *)((int)list + 0xd4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)list + 0xd0) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = list;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0xd0) = list;
  }
  *(void **)((int)this + 0xc) = list;
  uVar1 = *(uint *)((int)list + 0xd8) & 0xff;
  *(undefined4 *)((int)list + 0xdc) = *(undefined4 *)((int)this + uVar1 * 4 + 0x14);
  *(void **)((int)this + uVar1 * 4 + 0x14) = list;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

