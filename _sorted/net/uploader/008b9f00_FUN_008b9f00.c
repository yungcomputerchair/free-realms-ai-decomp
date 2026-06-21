// addr: 0x008b9f00
// name: FUN_008b9f00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_008b9f00(void * client) */

void __fastcall FUN_008b9f00(void *client)

{
  int iVar1;
  void *pvVar2;
  uint value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Ensures the client has a target/mode object of type code 0xe, creating and
                       registering one if needed, then sends or applies a Target to it. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01581903;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)client + 0xec) != (undefined4 *)0x0) {
    iVar1 = (**(code **)**(undefined4 **)((int)client + 0xec))();
    if (iVar1 == 0xe) goto LAB_008b9fc1;
  }
  value_ = 0;
  if (*(uint *)((int)client + 0xec) != 0) {
    value_ = *(uint *)((int)client + 0xec);
  }
  pvVar2 = Mem_Alloc(0x3d0);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_00afcff0(*(undefined4 *)((int)client + 200),
                                  *(undefined4 *)((int)client + 0xe8),client);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)client + 0xec) = pvVar2;
  setField_78(pvVar2,value_);
  *(undefined1 *)(*(int *)((int)client + 0x1a8) + 0x88) = 0;
LAB_008b9fc1:
  uStack_4 = 1;
  (**(code **)(**(int **)((int)client + 0xec) + 0xd4))();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0101b370();
  ExceptionList = (void *)0x0;
  return;
}

