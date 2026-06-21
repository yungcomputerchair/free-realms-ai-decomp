// addr: 0x0093d0e0
// name: ActorModelMaterialDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorModelMaterialDefinitionList_add(void * list, uint key_) */

void __thiscall ActorModelMaterialDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds a model-material definition entry using the model material list
                       insertion helper. Evidence: local key wrapper around 0093d030. */
  ActorModelMaterialDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

