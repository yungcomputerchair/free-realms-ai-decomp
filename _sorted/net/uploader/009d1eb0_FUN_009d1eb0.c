// addr: 0x009d1eb0
// name: FUN_009d1eb0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_009d1eb0(void * outHolder) */

void * __fastcall FUN_009d1eb0(void *outHolder)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x2a8-byte asset/display object with FUN_009d1d20 and stores it
                       in an output holder. No type evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a490b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x2a8);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009d1d20(uVar1);
  }
  *(undefined4 *)outHolder = uVar3;
  ExceptionList = local_c;
  return outHolder;
}

