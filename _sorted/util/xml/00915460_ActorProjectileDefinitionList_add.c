// addr: 0x00915460
// name: ActorProjectileDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorProjectileDefinitionList_add(void * list, uint key_) */

void __thiscall ActorProjectileDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds a projectile definition entry to the list by passing a local key to the
                       projectile insertion helper. Evidence: thin wrapper over 009153e0, whose
                       callees construct and link ActorProjectileDefinition objects. */
  ActorProjectileDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

