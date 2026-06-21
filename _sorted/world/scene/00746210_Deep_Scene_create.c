// addr: 0x00746210
// name: Deep_Scene_create
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_Scene_create(void * owner) */

void * __fastcall Deep_Scene_create(void *owner)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x250 bytes for a Deep::Scene and constructs it with the supplied
                       owner/context pointer, returning null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01553c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x250);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Deep_Scene_ctor(pvVar1,owner);
  }
  ExceptionList = local_c;
  return pvVar1;
}

