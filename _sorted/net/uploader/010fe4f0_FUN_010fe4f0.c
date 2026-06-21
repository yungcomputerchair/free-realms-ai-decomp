// addr: 0x010fe4f0
// name: FUN_010fe4f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_010fe4f0(void * object) */

void * __fastcall FUN_010fe4f0(void *object)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a UDP/network-related object with zeroed fields, a 4000-sized
                       component, a StringFixed<256>, and several trailing state slots. No enclosing
                       class vtable or string identifies it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164e7c6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined4 *)object = 0;
  *(undefined4 *)((int)object + 4) = 0;
  *(undefined1 *)((int)object + 0x10) = 0;
  *(undefined4 *)((int)object + 8) = 0;
  *(undefined4 *)((int)object + 0xc) = 0;
  FUN_00fc4580(4000);
  *(undefined4 *)((int)object + 0xa0) = 0;
  *(undefined4 *)((int)object + 0xa4) = 0;
  *(undefined4 *)((int)object + 0xa8) = 0;
  *(undefined **)((int)object + 0xc4) = &DAT_01cb9c88;
  *(undefined4 *)((int)object + 0xcc) = 0;
  *(undefined4 *)((int)object + 200) = 0;
  *(undefined ***)((int)object + 0xc0) = SoeUtil::StringFixed<256>::vftable;
  local_4 = 1;
  FUN_007039b0(uVar1);
  *(undefined4 *)((int)object + 0xac) = 0;
  *(undefined4 *)((int)object + 0xb0) = 0;
  *(undefined4 *)((int)object + 0xb4) = 0;
  *(undefined4 *)((int)object + 0xb8) = 0;
  *(undefined4 *)((int)object + 0xbc) = 0;
  *(undefined4 *)((int)object + 0x240) = 0;
  *(undefined4 *)((int)object + 0x244) = 0;
  *(undefined4 *)((int)object + 0x248) = 0;
  *(undefined4 *)((int)object + 0x24c) = 0;
  ExceptionList = local_c;
  return object;
}

