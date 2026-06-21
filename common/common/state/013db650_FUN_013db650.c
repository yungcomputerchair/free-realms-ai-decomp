// addr: 0x013db650
// name: FUN_013db650
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * sync_queue_like_ctor(void * this) */

void * __fastcall sync_queue_like_ctor(void *this)

{
  HANDLE pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Initializes a synchronization/queue-like utility object by zeroing fields,
                       initializing a critical section, and creating an event handle. Not
                       state-domain logic. */
  puStack_8 = &LAB_0168c4f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 1;
  uStack_3 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  _local_4 = CONCAT31(uStack_3,2);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x38) = pvVar1;
  ExceptionList = local_c;
  return this;
}

