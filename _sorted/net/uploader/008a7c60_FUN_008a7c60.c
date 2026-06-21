// addr: 0x008a7c60
// name: FUN_008a7c60
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_008a7c60(void * client) */

void * __fastcall FUN_008a7c60(void *client)

{
  void *this;
  undefined4 extraout_EAX;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and returns the object at client+0x654 using FUN_009f5a00.
                       Specific type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e6fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)client + 0x654) == 0) {
    this = Mem_Alloc(0x30);
    local_4 = 0;
    if (this == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      initSmallTransformOrBoundsStruct(this);
      uVar1 = extraout_EAX;
    }
    *(undefined4 *)((int)client + 0x654) = uVar1;
  }
  ExceptionList = local_c;
  return *(void **)((int)client + 0x654);
}

