// addr: 0x009272d0
// name: ActorCameraEffectDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorCameraEffectDefinitionList_insert(void * list, void * allocator,
   uint * key, void ** owner) */

void __thiscall
ActorCameraEffectDefinitionList_insert(void *this,void *list,void *allocator,uint *key,void **owner)

{
  void *entry;
  int iVar1;
  void *list_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs a camera effect definition entry and links it into the
                       list/hash container. Evidence: calls ActorCameraEffectDefinition_entryCtor
                       then ActorCameraEffectDefinitionList_linkEntry. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0158fa11;
  local_c = ExceptionList;
  entry = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))();
  uStack_4 = 0;
  if (iVar1 == 0) {
    list_00 = (void *)0x0;
  }
  else {
    list_00 = (void *)ActorCameraEffectDefinition_entryCtor(list,allocator,key);
  }
  uStack_4 = 0xffffffff;
  ActorCameraEffectDefinitionList_linkEntry(this,list_00,entry);
  ExceptionList = local_c;
  return;
}

