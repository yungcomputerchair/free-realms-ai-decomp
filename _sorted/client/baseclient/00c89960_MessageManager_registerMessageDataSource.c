// addr: 0x00c89960
// name: MessageManager_registerMessageDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageManager_registerMessageDataSource(void * this) */

void __thiscall MessageManager_registerMessageDataSource(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Allocates a MessageDataSource and passes it to a nearby message-manager
                       setter while player data is being deserialized. */
  puStack_8 = &LAB_016058bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined ***)((int)this + 8) = SoeUtil::Set<int,-1,0>::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 0x14) =
       SoeUtil::List<ClientFirstTimeEventManager::QueuedEvent,-1>::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 1;
  uStack_3 = 0;
  pvVar1 = Mem_Alloc(0x270);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MessageDataSource_ctor(pvVar1,in_stack_00000004);
  }
  _local_4 = CONCAT31(uStack_3,1);
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_00c88550(pvVar1);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(*(int *)this + 0x959);
  ExceptionList = local_c;
  return;
}

