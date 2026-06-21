// addr: 0x00941310
// name: ActorCompositeEffectDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorCompositeEffectDefinitionList_insert(void * list, void * allocator,
   uint * key) */

void __thiscall
ActorCompositeEffectDefinitionList_insert(void *this,void *list,void *allocator,uint *key)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs an ActorCompositeEffectDefinition entry, appends it to
                       the list, and adds it to a byte-keyed hash bucket. Evidence: calls
                       ActorCompositeEffectDefinition_entryCtor and updates tail, bucket, and count
                       fields. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01592be1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ActorCompositeEffectDefinition_entryCtor(list,allocator);
  }
  *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)this + 0xc) + 0x40) = iVar1;
  }
  *(int *)((int)this + 0xc) = iVar1;
  uVar2 = *(uint *)(iVar1 + 0x48) & 0xff;
  *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)((int)this + uVar2 * 4 + 0x14);
  *(int *)((int)this + uVar2 * 4 + 0x14) = iVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

