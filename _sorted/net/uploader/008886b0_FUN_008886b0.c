// addr: 0x008886b0
// name: FUN_008886b0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_008886b0(void * arg1, void * arg2) */

void * __thiscall FUN_008886b0(void *this,void *arg1,void *arg2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x50 bytes and constructs an object via FUN_008884b0 with swapped
                       arguments; likely a DeepParticle controller factory but the produced vtable
                       is not shown here. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01577f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_008884b0(arg1,this);
  }
  ExceptionList = local_c;
  return pvVar1;
}

