// addr: 0x00d0c930
// name: FUN_00d0c930
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00d0c930(void * outHolder) */

void * __fastcall FUN_00d0c930(void *outHolder)

{
  void *this;
  undefined4 extraout_EAX;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x1c-byte object with FUN_00d0c820 and stores it in an output
                       holder. No class evidence visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016125cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x1c);
  local_4 = 0;
  if (this == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_00d0c820(this);
    uVar1 = extraout_EAX;
  }
  *(undefined4 *)outHolder = uVar1;
  ExceptionList = local_c;
  return outHolder;
}

