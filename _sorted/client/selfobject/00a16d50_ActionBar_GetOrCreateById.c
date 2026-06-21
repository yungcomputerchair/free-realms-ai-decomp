// addr: 0x00a16d50
// name: ActionBar_GetOrCreateById
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionBar_GetOrCreateById(void * selfObject, uint id_) */

void __thiscall ActionBar_GetOrCreateById(void *this,void *selfObject,uint id_)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up an action bar by id and creates a ClientActionBar if missing; id 1
                       is BaseClient.AplActionBar, id 2 is BaseClient.ItemActionBar, otherwise
                       InvalidActionBar. Existing comments and strings confirm action-bar semantics.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ae30b;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + ((uint)selfObject % 5) * 4 + 0x35434);
  while( true ) {
    if (iVar1 == 0) {
      ExceptionList = &local_c;
      pvVar2 = Mem_Alloc(0x3b4);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = ClientActionBar_ctor(pvVar2,*(void **)((int)this + 0x3bc));
      }
      local_4 = 0xffffffff;
      ActionBarMap_Insert((void *)((int)this + 0x35424),(uint)selfObject,pvVar2);
      ExceptionList = local_c;
      return;
    }
    if (*(void **)(iVar1 + 0x39c) == selfObject) break;
    iVar1 = *(int *)(iVar1 + 0x398);
  }
  return;
}

