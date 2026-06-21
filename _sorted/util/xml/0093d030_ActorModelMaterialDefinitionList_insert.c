// addr: 0x0093d030
// name: ActorModelMaterialDefinitionList_insert
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorModelMaterialDefinitionList_insert(void * list, void * allocator,
   uint * key, void ** owner) */

void __thiscall
ActorModelMaterialDefinitionList_insert
          (void *this,void *list,void *allocator,uint *key,void **owner)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs a model-material definition entry, appends it to the
                       list, and places it in a 256-bucket hash table. Evidence: calls the entry
                       constructor then updates tail links, bucket chain, and count. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015924d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ActorModelMaterialDefinition_entryCtor(list,allocator,key);
  }
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)this + 0xc) + 0x60) = iVar1;
  }
  *(int *)((int)this + 0xc) = iVar1;
  uVar2 = *(uint *)(iVar1 + 0x68) & 0xff;
  *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)((int)this + uVar2 * 4 + 0x14);
  *(int *)((int)this + uVar2 * 4 + 0x14) = iVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

