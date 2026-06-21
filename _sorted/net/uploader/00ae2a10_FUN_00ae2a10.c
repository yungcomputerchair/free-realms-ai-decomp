// addr: 0x00ae2a10
// name: FUN_00ae2a10
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00ae2a10(void * this, void * vtable) */

void * __thiscall FUN_00ae2a10(void *this,void *vtable)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an object with a caller-supplied vtable pointer and clears
                       several trailing fields. No class-identifying string, RTTI, or fixed vtable
                       symbol is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb8eb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(void **)this = vtable;
  FUN_00ae2890(uVar1);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  ExceptionList = local_c;
  return this;
}

