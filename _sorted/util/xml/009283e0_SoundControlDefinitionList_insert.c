// addr: 0x009283e0
// name: SoundControlDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundControlDefinitionList_insert(void * list, void * allocator, uint *
   key) */

void __thiscall SoundControlDefinitionList_insert(void *this,void *list,void *allocator,uint *key)

{
  void *entry;
  int iVar1;
  void *list_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs a SoundControlDefinition entry and links it into the
                       list/hash container. Evidence: calls SoundControlDefinition_entryCtor
                       followed by SoundControlDefinitionList_linkEntry. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0158fdb1;
  local_c = ExceptionList;
  entry = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))();
  uStack_4 = 0;
  if (iVar1 == 0) {
    list_00 = (void *)0x0;
  }
  else {
    list_00 = (void *)SoundControlDefinition_entryCtor(list,allocator);
  }
  uStack_4 = 0xffffffff;
  SoundControlDefinitionList_linkEntry(this,list_00,entry);
  ExceptionList = local_c;
  return;
}

