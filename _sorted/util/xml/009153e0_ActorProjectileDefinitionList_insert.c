// addr: 0x009153e0
// name: ActorProjectileDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorProjectileDefinitionList_insert(void * list, void * allocator, uint
   * key, void ** owner) */

void __thiscall
ActorProjectileDefinitionList_insert(void *this,void *list,void *allocator,uint *key,void **owner)

{
  void *entry;
  int iVar1;
  void *list_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs a projectile definition entry and links it into the
                       list/hash container. Evidence: calls ActorProjectileDefinition_entryCtor then
                       ActorProjectileDefinitionList_linkEntry. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0158ce21;
  local_c = ExceptionList;
  entry = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))();
  uStack_4 = 0;
  if (iVar1 == 0) {
    list_00 = (void *)0x0;
  }
  else {
    list_00 = (void *)ActorProjectileDefinition_entryCtor(list,allocator,key);
  }
  uStack_4 = 0xffffffff;
  ActorProjectileDefinitionList_linkEntry(this,list_00,entry);
  ExceptionList = local_c;
  return;
}

