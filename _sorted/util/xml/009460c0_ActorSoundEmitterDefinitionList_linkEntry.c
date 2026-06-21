// addr: 0x009460c0
// name: ActorSoundEmitterDefinitionList_linkEntry
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorSoundEmitterDefinitionList_linkEntry(void * list, void * entry) */

void __thiscall ActorSoundEmitterDefinitionList_linkEntry(void *this,void *list,void *entry)

{
  uint uVar1;
  
                    /* Links an ActorSoundEmitterDefinition entry into the list tail and hash bucket
                       keyed by offset 0x1b8. Evidence: called only by the actor sound emitter
                       insertion wrapper. */
  *(undefined4 *)((int)list + 0x1b4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)list + 0x1b0) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = list;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0x1b0) = list;
  }
  *(void **)((int)this + 0xc) = list;
  uVar1 = *(uint *)((int)list + 0x1b8) & 0xff;
  *(undefined4 *)((int)list + 0x1bc) = *(undefined4 *)((int)this + uVar1 * 4 + 0x14);
  *(void **)((int)this + uVar1 * 4 + 0x14) = list;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

