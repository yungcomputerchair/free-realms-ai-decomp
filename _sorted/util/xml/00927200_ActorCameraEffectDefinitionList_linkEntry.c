// addr: 0x00927200
// name: ActorCameraEffectDefinitionList_linkEntry
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorCameraEffectDefinitionList_linkEntry(void * list, void * entry) */

void __thiscall ActorCameraEffectDefinitionList_linkEntry(void *this,void *list,void *entry)

{
  uint uVar1;
  
                    /* Links an ActorCameraEffectDefinition entry into the list tail and hash bucket
                       keyed by offset 0xc8. Evidence: used by the camera effect definition
                       insertion chain. */
  *(undefined4 *)((int)list + 0xc4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)list + 0xc0) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = list;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0xc0) = list;
  }
  *(void **)((int)this + 0xc) = list;
  uVar1 = *(uint *)((int)list + 200) & 0xff;
  *(undefined4 *)((int)list + 0xcc) = *(undefined4 *)((int)this + uVar1 * 4 + 0x14);
  *(void **)((int)this + uVar1 * 4 + 0x14) = list;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

