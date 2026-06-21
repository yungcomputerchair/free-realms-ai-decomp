// addr: 0x00a46cd0
// name: ClientTutorialManager_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientTutorialManager_ctor(void * this, void * client) */

void * __thiscall ClientTutorialManager_ctor(void *this,void *client)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientTutorialManager, stores the client pointer, clears flags,
                       initializes tutorial/web support state, and runs a manager initialization
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b4a2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ClientTutorialManager::vftable;
  *(void **)((int)this + 4) = client;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 9) = 0;
  FUN_00ae8360(1);
  local_4 = 0;
  FUN_00ae3740(this);
  ExceptionList = local_c;
  return this;
}

