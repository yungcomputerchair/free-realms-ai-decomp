// addr: 0x00946390
// name: ActorSoundEmitterDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorSoundEmitterDefinitionList_insert(void * list, void * allocator,
   uint * key, void * owner, void * playlistLoader) */

void __thiscall
ActorSoundEmitterDefinitionList_insert
          (void *this,void *list,void *allocator,uint *key,void *owner,void *playlistLoader)

{
  void *entry;
  int iVar1;
  void *list_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs an ActorSoundEmitterDefinition entry and links it into
                       the list/hash container. Evidence: calls
                       ActorSoundEmitterDefinition_entryCtor and
                       ActorSoundEmitterDefinitionList_linkEntry. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01593711;
  local_c = ExceptionList;
  entry = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))();
  uStack_4 = 0;
  if (iVar1 == 0) {
    list_00 = (void *)0x0;
  }
  else {
    list_00 = (void *)ActorSoundEmitterDefinition_entryCtor(list,allocator,key,owner);
  }
  uStack_4 = 0xffffffff;
  ActorSoundEmitterDefinitionList_linkEntry(this,list_00,entry);
  ExceptionList = local_c;
  return;
}

