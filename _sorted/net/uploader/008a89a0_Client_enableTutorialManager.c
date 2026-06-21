// addr: 0x008a89a0
// name: Client_enableTutorialManager
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Client_enableTutorialManager(void * client, bool enabled_) */

void __thiscall Client_enableTutorialManager(void *this,void *client,bool enabled_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When enabled, marks tutorial support active and lazily constructs a
                       ClientTutorialManager for the client. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e7db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((char)client != '\0') &&
     (*(undefined1 *)((int)this + 0x780) = 1, *(int *)((int)this + 0x77c) == 0)) {
    pvVar1 = Mem_Alloc(0x2ba70);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = ClientTutorialManager_ctor(pvVar1,this);
    }
    *(void **)((int)this + 0x77c) = pvVar1;
  }
  ExceptionList = local_c;
  return;
}

