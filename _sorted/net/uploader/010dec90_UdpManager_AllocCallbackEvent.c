// addr: 0x010dec90
// name: UdpManager_AllocCallbackEvent
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpManager_AllocCallbackEvent(void * this) */

void * __fastcall UdpManager_AllocCallbackEvent(void *this)

{
  uint entryOffset_;
  undefined4 *extraout_EAX;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or reuses a 0x28-byte callback event structure from a free list
                       under the UDP manager guard and zero-initializes it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164c5a8;
  local_c = ExceptionList;
  entryOffset_ = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_010da6d0();
  local_4 = 0;
  if ((*(void **)((int)this + 0x554) == (void *)0x0) ||
     (FUN_010dca70((void *)((int)this + 0x550),*(void **)((int)this + 0x554),entryOffset_),
     puVar1 = extraout_EAX, extraout_EAX == (undefined4 *)0x0)) {
    puVar1 = Mem_Alloc(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[7] = 0;
      puVar1[8] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_010da6e0();
  ExceptionList = local_c;
  return puVar1;
}

