// addr: 0x010de0b0
// name: UdpManager_startManagerThread
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpManager_startManagerThread(void * this) */

void __fastcall UdpManager_startManagerThread(void *this)

{
  void *this_00;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Under a guard, lazily allocates UdpManagerThread, stores it, and starts it
                       via virtual method offset 0x14. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164c433;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_010da6d0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  if (*(int *)((int)this + 0x1e8) == 0) {
    this_00 = Mem_Alloc(0x20);
    local_4._0_1_ = 1;
    if (this_00 == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = UdpLibrary_UdpManagerThread_ctor(this_00);
    }
    *(int **)((int)this + 0x1e8) = piVar1;
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*piVar1 + 0x14))();
  }
  local_4 = 0xffffffff;
  FUN_010da6e0();
  ExceptionList = local_c;
  return;
}

