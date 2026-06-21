// addr: 0x00915310
// name: ActorProjectileDefinitionList_linkEntry
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorProjectileDefinitionList_linkEntry(void * list, void * entry) */

void __thiscall ActorProjectileDefinitionList_linkEntry(void *this,void *list,void *entry)

{
  uint uVar1;
  
                    /* Links an ActorProjectileDefinition entry into the list tail and hash bucket
                       keyed by the byte at offset 0xb8. Evidence comes from the projectile
                       insertion caller chain. */
  *(undefined4 *)((int)list + 0xb4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)list + 0xb0) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = list;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0xb0) = list;
  }
  *(void **)((int)this + 0xc) = list;
  uVar1 = *(uint *)((int)list + 0xb8) & 0xff;
  *(undefined4 *)((int)list + 0xbc) = *(undefined4 *)((int)this + uVar1 * 4 + 0x14);
  *(void **)((int)this + uVar1 * 4 + 0x14) = list;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

